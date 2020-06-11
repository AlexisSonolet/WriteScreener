#ifndef MTABBAR_H
#define MTABBAR_H

#include <QApplication>
#include <QStyleOptionTab>
#include <QStylePainter>
#include <QTabBar>
#include <QWidget>

class MTabBar : public QTabBar
{
    public:
        MTabBar();

        QSize tabSizeHint(int index) const{
                QSize s = QTabBar::tabSizeHint(index);
                s.transpose();
                return s;
        }

    protected:
        void paintEvent(QPaintEvent * event);
};


class MTabWidget : public QTabWidget
{
    public:
        MTabWidget(QWidget *parent=0);
};

#endif // MTABBAR_H
