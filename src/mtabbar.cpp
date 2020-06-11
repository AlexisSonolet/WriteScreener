#include "../headers/mtabbar.h"

MTabBar::MTabBar()
{
    QString newStyle = QString::fromUtf8(
        "QTabWidget::pane { /* The tab widget frame */\n"
        "	border-top: 0px solid #C2C7CB;\n"
        "}\n"
        "\n"
        "QTabWidget::tab-bar {\n"
        "	left: 0px; /* move to the right by 5px */\n"
        "}\n"
        "\n"
        "/* Style the tab using the tab sub-control. Note that it reads QTabBar _not_ QTabWidget */\n"
        "QTabBar::tab {\n"
        "	border: 2px solid;\n"
        "	border-right: 0px;\n"
        "	border-top: 0px;\n"
        "	border-bottom: 0px;\n"
        "	min-width: 16ex;\n"
        "	padding: -10px 5px 5px 5px;\n"
        "	background-color: #333333;\n"
        "}\n"
        "\n"
        "QTabBar::tab:selected {\n"
        "	background-color: #444444;\n"
        "	border-color: #FFFFFF;\n"
        "}\n"
        "QTabBar::tab:!selected {\n"
        "	background-color: #333333;\n"
        "	border-color: #333333 \n"
        "}\n"
        "\n");
    this->setStyleSheet(newStyle);
}

void MTabBar::paintEvent(QPaintEvent* event)
{
    QStylePainter painter(this);
    QStyleOptionTab opt;

    for(int i = 0;i < count();i++)
    {
        initStyleOption(&opt,i);
        painter.drawControl(QStyle::CE_TabBarTabShape, opt);
        painter.save();

        QSize s = opt.rect.size();
        s.transpose();
        QRect r(QPoint(), s);
        r.moveCenter(opt.rect.center());
        opt.rect = r;

        QPoint c = tabRect(i).center();
        painter.translate(c);
        painter.rotate(90);
        painter.translate(-c);
        painter.drawControl(QStyle::CE_TabBarTabLabel,opt);
        painter.restore();
    }

}

MTabWidget::MTabWidget(QWidget *parent):
    QTabWidget(parent)
{
    setTabBar(new MTabBar);
    setTabPosition(QTabWidget::West);
}

