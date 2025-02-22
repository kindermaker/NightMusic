#include "LyricWidget.h"
#include "ui_LyricWidget.h"

#include <algorithm>
#include <QTextCodec>

LyricWidget::LyricWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LyricWidget)
{
    ui->setupUi(this);

    clear();//清空用于排版时的测试内容(.ui文件中)
}

LyricWidget::~LyricWidget()
{
    delete ui;
}


//重载比较（歌词按时间排序）
bool operator <(const LyricLine& A, const LyricLine& B){
    return A.time<B.time;
}

bool LyricWidget::process(QString filePath)
{    
    QFile lyricFile(filePath);
    lyricFile.open(QFile::ReadOnly);
    QString content(QString::fromUtf8(lyricFile.readAll()));
    lyricFile.close();
    
    //先清空歌词
    lines.clear();
    
    const QRegExp rx("\\[(\\d+):(\\d+(\\.\\d+)?)\\]"); //用来查找时间标签的正则表达式

    // 步骤1
    int pos = rx.indexIn(content);
    if (pos == -1) {
        return false;
    }
    else {
        int lastPos;
        QList<int> timeLabels;
        do {
            // 步骤2
            timeLabels << (rx.cap(1).toInt() * 60 + rx.cap(2).toDouble()) * 1000;
            lastPos = pos + rx.matchedLength();
            pos = rx.indexIn(content, lastPos);
            if (pos == -1) {
                QString text = content.mid(lastPos).trimmed();
                foreach (const int& time, timeLabels)
                    lines.push_back(LyricLine(time, text));
                break;
            }
            // 步骤3
            QString text = content.mid(lastPos, pos - lastPos);
            if (!text.isEmpty()) {
                foreach (const int& time, timeLabels)
                    lines.push_back(LyricLine(time, text.trimmed()));
                timeLabels.clear();
            }
        }
        while (true);
        // 步骤4
        stable_sort(lines.begin(), lines.end());
    }
    if (lines.size()) {
        return true;
    }
    return false;
}

int LyricWidget::getIndex(qint64 position)
{
    if(!lines.size()){
        return -1;
    }else{
        if(lines[0].time>=position){
            return 0;
        }
    }
    int i=1;
    for(i=1;i<lines.size();i++){
        if(lines[i-1].time<position && lines[i].time>=position){
            return i-1;
        }
    }
    return lines.size()-1;
}

void LyricWidget::show(qint64 position)
{
    int index=getIndex(position);
    if(index==-1){
        ui->label_3i->setText(u8"");
        ui->label_2i->setText(u8"");
        ui->label_1i->setText(u8"");
        ui->label_i->setText(u8"当前歌曲无歌词");
        ui->label_i1->setText(u8"");
        ui->label_i2->setText(u8"");
        ui->label_i3->setText(u8"");
    }else{
        ui->label_3i->setText(getLyricText(index-3).toUtf8());
        ui->label_2i->setText(getLyricText(index-2).toUtf8());
        ui->label_1i->setText(getLyricText(index-1).toUtf8());
        ui->label_i->setText(getLyricText(index).toUtf8());
        ui->label_i1->setText(getLyricText(index+1).toUtf8());
        ui->label_i2->setText(getLyricText(index+2).toUtf8());
        ui->label_i3->setText(getLyricText(index+3).toUtf8());

        // 设置字体大小
        QFont font = ui->label_3i->font();
        font.setPointSize(12);  // 设置字体大小为14
        ui->label_3i->setFont(font);

        font.setPointSize(14);  // 同样设置其他 label 的字体大小
        ui->label_2i->setFont(font);

        font.setPointSize(16);
        ui->label_1i->setFont(font);

        font.setPointSize(18);
        ui->label_i->setFont(font);

        font.setPointSize(16);
        ui->label_i1->setFont(font);

        font.setPointSize(14);
        ui->label_i2->setFont(font);

        font.setPointSize(12);
        ui->label_i3->setFont(font);

    }
}

QString LyricWidget::getLyricText(int index)
{
    if(index<0 || index>=lines.size()){
        return "";
    }else{
        return lines[index].text;
    }
}

void LyricWidget::clear()
{
    ui->label_3i->setText(u8"");
    ui->label_2i->setText(u8"");
    ui->label_1i->setText(u8"");
    ui->label_i->setText(u8"");
    ui->label_i1->setText(u8"");
    ui->label_i2->setText(u8"");
    ui->label_i3->setText(u8"");
}
