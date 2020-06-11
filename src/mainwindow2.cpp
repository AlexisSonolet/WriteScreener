#include "headers/mainwindow2.h"
#include "headers/mtabbar.h"

MainWindow2::MainWindow2(QWidget *parent) : QMainWindow(parent)
{
    setupUi(this);
    this->setCentralWidget(centralwidget);
    this->setWindowTitle("WriteScreener");
}


void MainWindow2::setupUi(QMainWindow *MainWindow)
{
    // === Setup Window ===

    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QString::fromUtf8("WriteScreener"));
    MainWindow->resize(667, 517);

    // === Actions ===

    // New
    actionNew = new QAction(MainWindow);
    actionNew->setObjectName(QString::fromUtf8("actionNew"));
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/images/images/icons2/007-writing.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionNew->setIcon(icon);
    actionNew->setIconVisibleInMenu(true);
    connect(actionNew, &QAction::triggered, this, &MainWindow2::on_actionNew_triggered);

    // Open
    actionOpen = new QAction(MainWindow);
    actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
    QIcon icon1;
    icon1.addFile(QString::fromUtf8(":/images/images/new icon/icons8-opened-folder-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionOpen->setIcon(icon1);
    connect(actionOpen, &QAction::triggered, this, &MainWindow2::on_actionOpen_triggered);

    // Save
    actionSave = new QAction(MainWindow);
    actionSave->setObjectName(QString::fromUtf8("actionSave"));
    QIcon icon2;
    icon2.addFile(QString::fromUtf8(":/images/images/icons2/047-floppy disk.png"), QSize(), QIcon::Normal, QIcon::On);
    actionSave->setIcon(icon2);
    connect(actionSave, &QAction::triggered, this, &MainWindow2::on_actionSave_triggered);

    // Exit
    actionExit = new QAction(MainWindow);
    actionExit->setObjectName(QString::fromUtf8("actionExit"));
    // actionExit->setCheckable(false);
    QIcon icon3;
    icon3.addFile(QString::fromUtf8(":/images/images/new icon/icons8-delete-48.png"), QSize(), QIcon::Normal, QIcon::On);
    actionExit->setIcon(icon3);
    connect(actionExit, &QAction::triggered, this, &MainWindow2::on_actionExit_triggered);

    // Print
    actionPrint = new QAction(MainWindow);
    actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
    QIcon icon4;
    icon4.addFile(QString::fromUtf8(":/images/images/new icon/icons8-print-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionPrint->setIcon(icon4);
    connect(actionPrint, &QAction::triggered, this, &MainWindow2::on_actionPrint_triggered);

    // Copy
    actionCopy = new QAction(MainWindow);
    actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
    QIcon icon5;
    icon5.addFile(QString::fromUtf8(":/images/images/new icon/icons8-copy-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionCopy->setIcon(icon5);
    connect(actionCopy, &QAction::triggered, this, &MainWindow2::on_actionCopy_triggered);

    // Paste
    actionPaste = new QAction(MainWindow);
    actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
    QIcon icon6;
    icon6.addFile(QString::fromUtf8(":/images/images/new icon/icons8-paste-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionPaste->setIcon(icon6);
    connect(actionPaste, &QAction::triggered, this, &MainWindow2::on_actionPaste_triggered);

    // Cut
    actionCut = new QAction(MainWindow);
    actionCut->setObjectName(QString::fromUtf8("actionCut"));
    QIcon icon7;
    icon7.addFile(QString::fromUtf8(":/images/images/new icon/icons8-cut-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionCut->setIcon(icon7);
    connect(actionCut, &QAction::triggered, this, &MainWindow2::on_actionCut_triggered);

    // Undo
    actionUndo = new QAction(MainWindow);
    actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
    QIcon icon8;
    icon8.addFile(QString::fromUtf8(":/images/images/new icon/icons8-undo-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionUndo->setIcon(icon8);
    connect(actionUndo, &QAction::triggered, this, &MainWindow2::on_actionUndo_triggered);

    // Redo
    actionRedo = new QAction(MainWindow);
    actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
    QIcon icon9;
    icon9.addFile(QString::fromUtf8(":/images/images/new icon/icons8-redo-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionRedo->setIcon(icon9);
    connect(actionRedo, &QAction::triggered, this, &MainWindow2::on_actionRedo_triggered);

    // Font
    actionPolice = new QAction(MainWindow);
    actionPolice->setObjectName(QString::fromUtf8("actionPolice"));
    QIcon icon10;
    icon10.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-choose-font-30.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionPolice->setIcon(icon10);
    connect(actionPolice, &QAction::triggered, this, &MainWindow2::on_actionPolice_triggered);

    // Align Center
    actionactionAlignCenter = new QAction(MainWindow);
    actionactionAlignCenter->setObjectName(QString::fromUtf8("actionactionAlignCenter"));
    QIcon icon11;
    icon11.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-align-center-24.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionactionAlignCenter->setIcon(icon11);
    connect(actionactionAlignCenter, &QAction::triggered, this, &MainWindow2::on_actionactionAlignCenter_triggered);

    // Align Left
    actionactionAlignLeft = new QAction(MainWindow);
    actionactionAlignLeft->setObjectName(QString::fromUtf8("actionactionAlignLeft"));
    QIcon icon12;
    icon12.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-align-left-24.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionactionAlignLeft->setIcon(icon12);
    connect(actionactionAlignLeft, &QAction::triggered, this, &MainWindow2::on_actionactionAlignLeft_triggered);

    // Align Right
    actionactionAlignRight = new QAction(MainWindow);
    actionactionAlignRight->setObjectName(QString::fromUtf8("actionactionAlignRight"));
    QIcon icon13;
    icon13.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-align-right-24.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionactionAlignRight->setIcon(icon13);
    connect(actionactionAlignRight, &QAction::triggered, this, &MainWindow2::on_actionactionAlignRight_triggered);

    // Align Justify
    actionactionAlignJustify = new QAction(MainWindow);
    actionactionAlignJustify->setObjectName(QString::fromUtf8("actionactionAlignJustify"));
    QIcon icon14;
    icon14.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-align-justify-24.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionactionAlignJustify->setIcon(icon14);
    connect(actionactionAlignJustify, &QAction::triggered, this, &MainWindow2::on_actionactionAlignJustify_triggered);

    // Uppercase
    actionactionUppercase = new QAction(MainWindow);
    actionactionUppercase->setObjectName(QString::fromUtf8("actionactionUppercase"));
    QIcon icon15;
    icon15.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-uppercase-24.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionactionUppercase->setIcon(icon15);
    connect(actionactionUppercase, &QAction::triggered, this, &MainWindow2::on_actionactionUppercase_triggered);

    // Lowercase
    actionactionLowercase = new QAction(MainWindow);
    actionactionLowercase->setObjectName(QString::fromUtf8("actionactionLowercase"));
    QIcon icon16;
    icon16.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-lowercase-24.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionactionLowercase->setIcon(icon16);
    connect(actionactionLowercase, &QAction::triggered, this, &MainWindow2::on_actionactionLowercase_triggered);

    // Color
    actionColor = new QAction(MainWindow);
    actionColor->setObjectName(QString::fromUtf8("actionColor"));
    QIcon icon17;
    icon17.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-color-wheel-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionColor->setIcon(icon17);
    connect(actionColor, &QAction::triggered, this, &MainWindow2::on_actionColor_triggered);

    // About
    actionAbout = new QAction(MainWindow);
    actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
    QIcon icon18;
    icon18.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-question-mark-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionAbout->setIcon(icon18);
    connect(actionAbout, &QAction::triggered, this, &MainWindow2::on_actionAbout_triggered);


    // === Central widget ===
    // The central widget is disposed as the verticalLayout_3 and contains the Tab Widget
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    centralwidget->setStyleSheet(QString::fromUtf8("background-color: #333333;"));
    verticalLayout_3 = new QVBoxLayout(centralwidget);
    verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));


    // === Tab widget ===

        // Tab setup
        tabWidget = new MTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);

        tabWidget->setStyleSheet(QString::fromUtf8(
            "QTabWidget::pane { /* The tab widget frame */\n"
            "	border-top: 0px solid #C2C7CB;\n"
            "}\n")); // TODO : I have no idea why it should be here but anyway it works

        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(50, 50));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);

        // === Tabs ===

        // Tab_2 is for project infos. Disposed as the horizontalLayout_4. It contains the horizontalLayout_3
            tab_2 = new QWidget();
            tab_2->setObjectName(QString::fromUtf8("tab_2"));
            sizePolicy.setHeightForWidth(tab_2->sizePolicy().hasHeightForWidth());
            tab_2->setSizePolicy(sizePolicy);
            tab_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
            "background-color: #FFFFFF;\n"
            "border-radius: 3px;\n"
            "}"));
            horizontalLayout_4 = new QHBoxLayout(tab_2);
            horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));

                // Tab_2 > horizontalLayout3 conains 2 horizontal spacers and in the middle, the verticalLayout_2
                horizontalLayout_3 = new QHBoxLayout();
                horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
                    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);
                horizontalLayout_3->addItem(horizontalSpacer);

                    verticalLayout_2 = new QVBoxLayout();
                    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

                        label = new QLabel(tab_2);
                        label->setObjectName(QString::fromUtf8("label"));
                        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
                        sizePolicy1.setHorizontalStretch(0);
                        sizePolicy1.setVerticalStretch(0);
                        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
                        label->setSizePolicy(sizePolicy1);

                    verticalLayout_2->addWidget(label);

                        lineEdit_3 = new QLineEdit(tab_2);
                        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
                        QFont font;
                        font.setFamily(QString::fromUtf8("Courier New"));
                        font.setPointSize(14);
                        font.setBold(false);
                        font.setWeight(50);
                        lineEdit_3->setFont(font);

                    verticalLayout_2->addWidget(lineEdit_3);

                        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

                    verticalLayout_2->addItem(verticalSpacer_4);

                        label_2 = new QLabel(tab_2);
                        label_2->setObjectName(QString::fromUtf8("label_2"));
                        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
                        label_2->setSizePolicy(sizePolicy1);

                    verticalLayout_2->addWidget(label_2);

                        lineEdit_2 = new QLineEdit(tab_2);
                        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
                        QFont font1;
                        font1.setFamily(QString::fromUtf8("Courier New"));
                        font1.setPointSize(14);
                        lineEdit_2->setFont(font1);

                    verticalLayout_2->addWidget(lineEdit_2);

                        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

                    verticalLayout_2->addItem(verticalSpacer_3);

                        label_3 = new QLabel(tab_2);
                        label_3->setObjectName(QString::fromUtf8("label_3"));
                        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
                        label_3->setSizePolicy(sizePolicy1);

                    verticalLayout_2->addWidget(label_3);

                        lineEdit = new QLineEdit(tab_2);
                        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
                        lineEdit->setFont(font1);
                        lineEdit->setStyleSheet(QString::fromUtf8(""));

                    verticalLayout_2->addWidget(lineEdit);

                        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

                    verticalLayout_2->addItem(verticalSpacer);

                        label_4 = new QLabel(tab_2);
                        label_4->setObjectName(QString::fromUtf8("label_4"));
                        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
                        label_4->setSizePolicy(sizePolicy1);

                    verticalLayout_2->addWidget(label_4);

                        lineEdit_4 = new QLineEdit(tab_2);
                        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
                        lineEdit_4->setFont(font1);

                    verticalLayout_2->addWidget(lineEdit_4);

                        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

                    verticalLayout_2->addItem(verticalSpacer_2);

                horizontalLayout_3->addLayout(verticalLayout_2);

                    horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

                horizontalLayout_3->addItem(horizontalSpacer_2);


            horizontalLayout_4->addLayout(horizontalLayout_3);

            QIcon icon19;
            icon19.addFile(QString::fromUtf8(":/images/images/icons2/007-writing.png"), QSize(), QIcon::Normal, QIcon::On);

        tabWidget->addTab(tab_2, icon19, QString());

        // Tab is the scrip edit area. Disposed as the horizontalLayout
            tab = new QWidget();
            tab->setObjectName(QString::fromUtf8("tab"));
            QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
            sizePolicy2.setHorizontalStretch(0);
            sizePolicy2.setVerticalStretch(0);
            sizePolicy2.setHeightForWidth(tab->sizePolicy().hasHeightForWidth());
            tab->setSizePolicy(sizePolicy2);
            tab->setStyleSheet(QString::fromUtf8(""));
            horizontalLayout = new QHBoxLayout(tab);
            horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

                verticalLayout = new QVBoxLayout();
                verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

                    textEdit = new QTextEdit(tab);
                    textEdit->setObjectName(QString::fromUtf8("textEdit"));
                    sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
                    textEdit->setSizePolicy(sizePolicy);
                    QFont font2;
                    font2.setFamily(QString::fromUtf8("Courier New"));
                    font2.setPointSize(12);
                    textEdit->setFont(font2);
                    textEdit->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));

                verticalLayout->addWidget(textEdit);

            horizontalLayout->addLayout(verticalLayout);

            QIcon icon20;
            QString iconThemeName = QString::fromUtf8("NormalOn");
            if (QIcon::hasThemeIcon(iconThemeName)) {
                icon20 = QIcon::fromTheme(iconThemeName);
            } else {
                icon20.addFile(QString::fromUtf8(":/images/images/new icon/icons8-copy-48.png"), QSize(), QIcon::Normal, QIcon::On);
            }

        tabWidget->addTab(tab, icon20, QString());

        // Tab_3 is an uknown tab
            tab_3 = new QWidget();
            tab_3->setObjectName(QString::fromUtf8("tab_3"));
            QIcon icon21;
            icon21.addFile(QString::fromUtf8(":/images/images/new icon/icons8-picture-48.png"), QSize(), QIcon::Normal, QIcon::On);

        tabWidget->addTab(tab_3, icon21, QString());

    verticalLayout_3->addWidget(tabWidget);
    MainWindow->setCentralWidget(centralwidget);


    // === Menu bar ===

    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 667, 26));
        // File menu
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menubar->addAction(menuFile->menuAction());
            menuFile->addAction(actionNew);
            menuFile->addAction(actionOpen);
            menuFile->addAction(actionSave);
            menuFile->addAction(actionPrint);
            menuFile->addSeparator();
            menuFile->addAction(actionExit);
        // Edit menu
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menubar->addAction(menuEdit->menuAction());
            menuEdit->addAction(actionCopy);
            menuEdit->addAction(actionPaste);
            menuEdit->addAction(actionCut);
            menuEdit->addSeparator();
            menuEdit->addAction(actionPolice);
            menuEdit->addAction(actionColor);
            menuEdit->addSeparator();
            menuEdit->addAction(actionUndo);
            menuEdit->addAction(actionRedo);
        // Help menu
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menubar->addAction(menuHelp->menuAction());
            menuHelp->addAction(actionAbout);

    MainWindow->setMenuBar(menubar);


    // === Tool bar ===
    toolBar = new QToolBar(MainWindow);
    toolBar->setObjectName(QString::fromUtf8("toolBar"));
    toolBar->setFloatable(false);
    MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionCut);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionactionAlignCenter);
        toolBar->addAction(actionactionAlignJustify);
        toolBar->addAction(actionactionAlignLeft);
        toolBar->addAction(actionactionAlignRight);
        toolBar->addSeparator();
        toolBar->addAction(actionactionUppercase);
        toolBar->addAction(actionactionLowercase);


    // === Status Bar ===
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    MainWindow->setStatusBar(statusbar);

    // === Translate UI ===
    retranslateUi(MainWindow);

    tabWidget->setCurrentIndex(0);
}

void MainWindow2::retranslateUi(QMainWindow *MainWindow)
{
    MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
    actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
    actionSave->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
    actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
    actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
    actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
    actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
    actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
    actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
    actionPolice->setText(QCoreApplication::translate("MainWindow", "Police", nullptr));
    actionactionAlignCenter->setText(QCoreApplication::translate("MainWindow", "actionAlignCenter", nullptr));
    actionactionAlignLeft->setText(QCoreApplication::translate("MainWindow", "actionAlignLeft", nullptr));
    actionactionAlignRight->setText(QCoreApplication::translate("MainWindow", "actionAlignRight", nullptr));
    actionactionAlignJustify->setText(QCoreApplication::translate("MainWindow", "actionAlignJustify", nullptr));
    actionactionUppercase->setText(QCoreApplication::translate("MainWindow", "actionUppercase", nullptr));
    actionactionLowercase->setText(QCoreApplication::translate("MainWindow", "actionLowercase", nullptr));
    actionColor->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
    actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
    label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">Title</span></p></body></html>", nullptr));
    label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">Writer</span></p></body></html>", nullptr));
    label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">Director</span></p></body></html>", nullptr));
    label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">Producer</span></p></body></html>", nullptr));
    tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());

    textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
    "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
    "p, li { white-space: pre-wrap; }\n"
    "</style></head><body style=\" font-family:'Courier New'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
    "<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));

    tabWidget->setTabText(tabWidget->indexOf(tab), QString());
    tabWidget->setTabText(tabWidget->indexOf(tab_3), QString());
    menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
    menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
}

void MainWindow2::on_actionNew_triggered()
{
    currentFile.clear();
    textEdit->setText(QString());
}

void MainWindow2::on_actionOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(filename);
    currentFile = filename;
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot open file : " + file.errorString());
        return;
    }
    setWindowTitle(filename);
    QTextStream in(&file);
    QString text = in.readAll();
    textEdit->setText(text);
    file.close();
}

void MainWindow2::on_actionSave_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, "Save");
    QFile file(filename);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file : " + file.errorString());
        return;
    }
    currentFile = filename;
    setWindowTitle(filename);
    QTextStream out(&file);
    QString text = textEdit->toPlainText();
    out << text;
    file.close();
}

void MainWindow2::on_actionPrint_triggered()
{
    QPrinter printer;
    printer.setPrinterName("Printer Name");
    QPrintDialog pDialog(&printer, this);
    if (pDialog.exec() == QDialog::Rejected) {
        QMessageBox::warning(this, "Warning", "Cannot access printer");
        return;
    }

    textEdit->print(&printer);
}

void MainWindow2::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow2::on_actionCopy_triggered()
{
    textEdit->copy();
}

void MainWindow2::on_actionPaste_triggered()
{
    textEdit->paste();
}

void MainWindow2::on_actionCut_triggered()
{
    textEdit->cut();
}

void MainWindow2::on_actionUndo_triggered()
{
    textEdit->undo();
}

void MainWindow2::on_actionRedo_triggered()
{
    textEdit->redo();
}

void MainWindow2::on_actionPolice_triggered()
{
    bool selected;
    QFont font = QFontDialog::getFont(&selected, this);
    if (selected) {
        // A font is selected
        QTextCursor cursor = textEdit->textCursor();
        QTextCharFormat formatChar = cursor.charFormat();
        formatChar.setFont(font);
        cursor.setCharFormat(formatChar);
    }
}

void MainWindow2::on_actionactionAlignCenter_triggered()
{
    textEdit->setAlignment(Qt::AlignCenter);
}

void MainWindow2::on_actionactionAlignLeft_triggered()
{
    textEdit->setAlignment(Qt::AlignLeft);
}

void MainWindow2::on_actionactionAlignRight_triggered()
{
    textEdit->setAlignment(Qt::AlignRight);
}

void MainWindow2::on_actionactionAlignJustify_triggered()
{
    textEdit->setAlignment(Qt::AlignJustify);
}

void MainWindow2::on_actionactionUppercase_triggered()
{
    QTextCursor cursor = textEdit->textCursor();
    if (cursor.selectionEnd() - cursor.selectionStart() == 0) {
        // Passer toute la ligne en majuscule
        cursor.select(QTextCursor::LineUnderCursor);
    }
    cursor.insertText(cursor.selectedText().toUpper());
}

void MainWindow2::on_actionactionLowercase_triggered()
{
    QTextCursor cursor = textEdit->textCursor();
    if (cursor.selectionEnd() - cursor.selectionStart() == 0) {
        // Passer toute la ligne en majuscule
        cursor.select(QTextCursor::LineUnderCursor);
    }
    cursor.insertText(cursor.selectedText().toLower());
}

void MainWindow2::on_actionColor_triggered()
{
    QColor color = QColorDialog::getColor(Qt::black, this);
    textEdit->setTextColor(color);
}

void MainWindow2::on_actionAbout_triggered()
{
    About *win = new About(this);
    win->show();
}

