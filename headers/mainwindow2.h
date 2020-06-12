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
    QAction *actionactionBold;
    QAction *actionactionItalic;
    QAction *actionColor;
    QAction *actionAbout;
    QWidget *centralwidget;
    QVBoxLayout *vLayoutCentralWidget;
    QTabWidget *tabWidget;
    QWidget *tabProjectInfos;
    QHBoxLayout *hLayoutProjectInfos;
    QHBoxLayout *hLayoutListInfos;
    QSpacerItem *horizontalSpacerLeft;
    QVBoxLayout *vLayoutListInfos;
    QLabel *labelTitle;
    QLineEdit *lineEditTitle;
    QSpacerItem *verticalSpacerTitle;
    QLabel *labelWriter;
    QLineEdit *lineEditWriter;
    QSpacerItem *verticalSpacerWriter;
    QLabel *labelDirector;
    QLineEdit *lineEditDirector;
    QSpacerItem *verticalSpacerDirector;
    QLabel *labelProducer;
    QLineEdit *lineEditProducer;
    QSpacerItem *verticalSpacerEndListInfos;
    QSpacerItem *horizontalSpacerRight;
    QWidget *tabScriptEdit;
    QHBoxLayout *hLayoutScriptEdit;
    QVBoxLayout *vLayoutScriptEdit;
    QTextEdit *textScriptEdit;
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

    void on_actionactionBold_triggered();

    void on_actionactionItalic_triggered();

    void on_actionColor_triggered();

    void on_actionAbout_triggered();

private:
    QString currentFile = "";

};

#endif // MAINWINDOW2_H
