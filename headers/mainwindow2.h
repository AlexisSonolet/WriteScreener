#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include "headers/about.h"

#include <QMainWindow>
#include <QWidget>

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QFontDialog>
#include <QTextDocument>
#include <QTextBlock>
#include <QTextCursor>
#include <QColor>
#include <QColorDialog>

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = nullptr);

    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionPrint;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionPolice;
    QAction *actionactionAlignCenter;
    QAction *actionactionAlignLeft;
    QAction *actionactionAlignRight;
    QAction *actionactionAlignJustify;
    QAction *actionactionUppercase;
    QAction *actionactionLowercase;
    QAction *actionColor;
    QAction *actionAbout;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QWidget *tab_3;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow);

    void retranslateUi(QMainWindow *MainWindow);

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionPrint_triggered();

    void on_actionExit_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionPolice_triggered();

    void on_actionactionAlignCenter_triggered();

    void on_actionactionAlignLeft_triggered();

    void on_actionactionAlignRight_triggered();

    void on_actionactionAlignJustify_triggered();

    void on_actionactionUppercase_triggered();

    void on_actionactionLowercase_triggered();

    void on_actionColor_triggered();

    void on_actionAbout_triggered();

private:
    QString currentFile = "";

};

#endif // MAINWINDOW2_H
