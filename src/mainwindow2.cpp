#include "headers/mainwindow2.h"
#include "headers/mtabbar.h"

MainWindow2::MainWindow2(QWidget *parent) : QMainWindow(parent)
{
    setupUi(this);
    this->setCentralWidget(centralwidget);
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
    QIcon iconNew;
    iconNew.addFile(QString::fromUtf8(":/images/images/icons2/007-writing.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionNew->setIcon(iconNew);
    actionNew->setIconVisibleInMenu(true);
    connect(actionNew, &QAction::triggered, this, &MainWindow2::on_actionNew_triggered);

    // Open
    actionOpen = new QAction(MainWindow);
    actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
    QIcon iconOpen;
    iconOpen.addFile(QString::fromUtf8(":/images/images/new icon/icons8-opened-folder-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionOpen->setIcon(iconOpen);
    connect(actionOpen, &QAction::triggered, this, &MainWindow2::on_actionOpen_triggered);

    // Save
    actionSave = new QAction(MainWindow);
    actionSave->setObjectName(QString::fromUtf8("actionSave"));
    QIcon iconSave;
    iconSave.addFile(QString::fromUtf8(":/images/images/icons2/047-floppy disk.png"), QSize(), QIcon::Normal, QIcon::On);
    actionSave->setIcon(iconSave);
    connect(actionSave, &QAction::triggered, this, &MainWindow2::on_actionSave_triggered);

    // Exit
    actionExit = new QAction(MainWindow);
    actionExit->setObjectName(QString::fromUtf8("actionExit"));
    // actionExit->setCheckable(false);
    QIcon iconExit;
    iconExit.addFile(QString::fromUtf8(":/images/images/new icon/icons8-delete-48.png"), QSize(), QIcon::Normal, QIcon::On);
    actionExit->setIcon(iconExit);
    connect(actionExit, &QAction::triggered, this, &MainWindow2::on_actionExit_triggered);

    // Print
    actionPrint = new QAction(MainWindow);
    actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
    QIcon iconPrint;
    iconPrint.addFile(QString::fromUtf8(":/images/images/new icon/icons8-print-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionPrint->setIcon(iconPrint);
    connect(actionPrint, &QAction::triggered, this, &MainWindow2::on_actionPrint_triggered);

    // Copy
    actionCopy = new QAction(MainWindow);
    actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
    QIcon iconCopy;
    iconCopy.addFile(QString::fromUtf8(":/images/images/new icon/icons8-copy-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionCopy->setIcon(iconCopy);
    connect(actionCopy, &QAction::triggered, this, &MainWindow2::on_actionCopy_triggered);

    // Paste
    actionPaste = new QAction(MainWindow);
    actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
    QIcon iconPaste;
    iconPaste.addFile(QString::fromUtf8(":/images/images/new icon/icons8-paste-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionPaste->setIcon(iconPaste);
    connect(actionPaste, &QAction::triggered, this, &MainWindow2::on_actionPaste_triggered);

    // Cut
    actionCut = new QAction(MainWindow);
    actionCut->setObjectName(QString::fromUtf8("actionCut"));
    QIcon iconCut;
    iconCut.addFile(QString::fromUtf8(":/images/images/new icon/icons8-cut-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionCut->setIcon(iconCut);
    connect(actionCut, &QAction::triggered, this, &MainWindow2::on_actionCut_triggered);

    // Undo
    actionUndo = new QAction(MainWindow);
    actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
    QIcon iconUndo;
    iconUndo.addFile(QString::fromUtf8(":/images/images/new icon/icons8-undo-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionUndo->setIcon(iconUndo);
    connect(actionUndo, &QAction::triggered, this, &MainWindow2::on_actionUndo_triggered);

    // Redo
    actionRedo = new QAction(MainWindow);
    actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
    QIcon iconRedo;
    iconRedo.addFile(QString::fromUtf8(":/images/images/new icon/icons8-redo-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionRedo->setIcon(iconRedo);
    connect(actionRedo, &QAction::triggered, this, &MainWindow2::on_actionRedo_triggered);

    // Font
    actionPolice = new QAction(MainWindow);
    actionPolice->setObjectName(QString::fromUtf8("actionPolice"));
    QIcon iconPolice;
    iconPolice.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-choose-font-30.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionPolice->setIcon(iconPolice);
    connect(actionPolice, &QAction::triggered, this, &MainWindow2::on_actionPolice_triggered);

    // Align Center
    actionactionAlignCenter = new QAction(MainWindow);
    actionactionAlignCenter->setObjectName(QString::fromUtf8("actionactionAlignCenter"));
    QIcon iconAlignCenter;
    iconAlignCenter.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-align-center-24.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionactionAlignCenter->setIcon(iconAlignCenter);
    connect(actionactionAlignCenter, &QAction::triggered, this, &MainWindow2::on_actionactionAlignCenter_triggered);

    // Align Left
    actionactionAlignLeft = new QAction(MainWindow);
    actionactionAlignLeft->setObjectName(QString::fromUtf8("actionactionAlignLeft"));
    QIcon iconAlignLeft;
    iconAlignLeft.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-align-left-24.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionactionAlignLeft->setIcon(iconAlignLeft);
    connect(actionactionAlignLeft, &QAction::triggered, this, &MainWindow2::on_actionactionAlignLeft_triggered);

    // Align Right
    actionactionAlignRight = new QAction(MainWindow);
    actionactionAlignRight->setObjectName(QString::fromUtf8("actionactionAlignRight"));
    QIcon iconAlignRight;
    iconAlignRight.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-align-right-24.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionactionAlignRight->setIcon(iconAlignRight);
    connect(actionactionAlignRight, &QAction::triggered, this, &MainWindow2::on_actionactionAlignRight_triggered);

    // Align Justify
    actionactionAlignJustify = new QAction(MainWindow);
    actionactionAlignJustify->setObjectName(QString::fromUtf8("actionactionAlignJustify"));
    QIcon iconAlignJustify;
    iconAlignJustify.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-align-justify-24.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionactionAlignJustify->setIcon(iconAlignJustify);
    connect(actionactionAlignJustify, &QAction::triggered, this, &MainWindow2::on_actionactionAlignJustify_triggered);

    // Uppercase
    actionactionUppercase = new QAction(MainWindow);
    actionactionUppercase->setObjectName(QString::fromUtf8("actionactionUppercase"));
    QIcon iconUppercase;
    iconUppercase.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-uppercase-24.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionactionUppercase->setIcon(iconUppercase);
    connect(actionactionUppercase, &QAction::triggered, this, &MainWindow2::on_actionactionUppercase_triggered);

    // Lowercase
    actionactionLowercase = new QAction(MainWindow);
    actionactionLowercase->setObjectName(QString::fromUtf8("actionactionLowercase"));
    QIcon iconLowercase;
    iconLowercase.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-lowercase-24.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionactionLowercase->setIcon(iconLowercase);
    connect(actionactionLowercase, &QAction::triggered, this, &MainWindow2::on_actionactionLowercase_triggered);

    // Bold
    actionactionBold = new QAction(MainWindow);
    actionactionBold->setObjectName(QString::fromUtf8("actionactionBold"));
    QIcon iconBold;
    iconBold.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-bold-24.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionactionBold->setIcon(iconBold);
    connect(actionactionBold, &QAction::triggered, this, &MainWindow2::on_actionactionBold_triggered);

    // Italic
    actionactionItalic = new QAction(MainWindow);
    actionactionItalic->setObjectName(QString::fromUtf8("actionactionItalic"));
    QIcon iconItalic;
    iconItalic.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-italic-24.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionactionItalic->setIcon(iconItalic);
    connect(actionactionItalic, &QAction::triggered, this, &MainWindow2::on_actionactionItalic_triggered);

    // Color
    actionColor = new QAction(MainWindow);
    actionColor->setObjectName(QString::fromUtf8("actionColor"));
    QIcon iconColor;
    iconColor.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-color-wheel-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionColor->setIcon(iconColor);
    connect(actionColor, &QAction::triggered, this, &MainWindow2::on_actionColor_triggered);

    // About
    actionAbout = new QAction(MainWindow);
    actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
    QIcon iconAbout;
    iconAbout.addFile(QString::fromUtf8(":/images/images/new icons 2/icons8-question-mark-48.png"), QSize(), QIcon::Normal, QIcon::Off);
    actionAbout->setIcon(iconAbout);
    connect(actionAbout, &QAction::triggered, this, &MainWindow2::on_actionAbout_triggered);


    // === Central widget ===
    // The central widget is disposed as the vLayoutCentralWidget and contains the Tab Widget
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    centralwidget->setStyleSheet(QString::fromUtf8("background-color: #333333;"));
    vLayoutCentralWidget = new QVBoxLayout(centralwidget);
    vLayoutCentralWidget->setObjectName(QString::fromUtf8("vLayoutCentralWidget"));


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

        // tabProjectInfos is for project infos. Disposed as the hLayoutProjectInfos. It contains the hLayoutListInfos
            tabProjectInfos = new QWidget();
            tabProjectInfos->setObjectName(QString::fromUtf8("tabProjectInfos"));
            sizePolicy.setHeightForWidth(tabProjectInfos->sizePolicy().hasHeightForWidth());
            tabProjectInfos->setSizePolicy(sizePolicy);
            tabProjectInfos->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
            "background-color: #FFFFFF;\n"
            "border-radius: 3px;\n"
            "}"));
            hLayoutProjectInfos = new QHBoxLayout(tabProjectInfos);
            hLayoutProjectInfos->setObjectName(QString::fromUtf8("hLayoutProjectInfos"));

                // tabProjectInfos > horizontalLayout3 conains 2 horizontal spacers and in the middle, the vLayoutListInfos
                hLayoutListInfos = new QHBoxLayout();
                hLayoutListInfos->setObjectName(QString::fromUtf8("hLayoutListInfos"));
                    horizontalSpacerLeft = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);
                hLayoutListInfos->addItem(horizontalSpacerLeft);

                    vLayoutListInfos = new QVBoxLayout();
                    vLayoutListInfos->setObjectName(QString::fromUtf8("vLayoutListInfos"));

                        labelTitle = new QLabel(tabProjectInfos);
                        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
                        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
                        sizePolicy1.setHorizontalStretch(0);
                        sizePolicy1.setVerticalStretch(0);
                        sizePolicy1.setHeightForWidth(labelTitle->sizePolicy().hasHeightForWidth());
                        labelTitle->setSizePolicy(sizePolicy1);

                    vLayoutListInfos->addWidget(labelTitle);

                        lineEditTitle = new QLineEdit(tabProjectInfos);
                        lineEditTitle->setObjectName(QString::fromUtf8("lineEditTitle"));
                        QFont font;
                        font.setFamily(QString::fromUtf8("Courier New"));
                        font.setPointSize(14);
                        font.setBold(false);
                        font.setWeight(50);
                        lineEditTitle->setFont(font);

                    vLayoutListInfos->addWidget(lineEditTitle);

                        verticalSpacerTitle = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

                    vLayoutListInfos->addItem(verticalSpacerTitle);

                        labelWriter = new QLabel(tabProjectInfos);
                        labelWriter->setObjectName(QString::fromUtf8("labelWriter"));
                        sizePolicy1.setHeightForWidth(labelWriter->sizePolicy().hasHeightForWidth());
                        labelWriter->setSizePolicy(sizePolicy1);

                    vLayoutListInfos->addWidget(labelWriter);

                        lineEditWriter = new QLineEdit(tabProjectInfos);
                        lineEditWriter->setObjectName(QString::fromUtf8("lineEditWriter"));
                        QFont font1;
                        font1.setFamily(QString::fromUtf8("Courier New"));
                        font1.setPointSize(14);
                        lineEditWriter->setFont(font1);

                    vLayoutListInfos->addWidget(lineEditWriter);

                        verticalSpacerWriter = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

                    vLayoutListInfos->addItem(verticalSpacerWriter);

                        labelDirector = new QLabel(tabProjectInfos);
                        labelDirector->setObjectName(QString::fromUtf8("labelDirector"));
                        sizePolicy1.setHeightForWidth(labelDirector->sizePolicy().hasHeightForWidth());
                        labelDirector->setSizePolicy(sizePolicy1);

                    vLayoutListInfos->addWidget(labelDirector);

                        lineEditDirector = new QLineEdit(tabProjectInfos);
                        lineEditDirector->setObjectName(QString::fromUtf8("lineEditDirector"));
                        lineEditDirector->setFont(font1);
                        lineEditDirector->setStyleSheet(QString::fromUtf8(""));

                    vLayoutListInfos->addWidget(lineEditDirector);

                        verticalSpacerDirector = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

                    vLayoutListInfos->addItem(verticalSpacerDirector);

                        labelProducer = new QLabel(tabProjectInfos);
                        labelProducer->setObjectName(QString::fromUtf8("labelProducer"));
                        sizePolicy1.setHeightForWidth(labelProducer->sizePolicy().hasHeightForWidth());
                        labelProducer->setSizePolicy(sizePolicy1);

                    vLayoutListInfos->addWidget(labelProducer);

                        lineEditProducer = new QLineEdit(tabProjectInfos);
                        lineEditProducer->setObjectName(QString::fromUtf8("lineEditProducer"));
                        lineEditProducer->setFont(font1);

                    vLayoutListInfos->addWidget(lineEditProducer);

                        verticalSpacerEndListInfos = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

                    vLayoutListInfos->addItem(verticalSpacerEndListInfos);

                hLayoutListInfos->addLayout(vLayoutListInfos);

                    horizontalSpacerRight = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);
                hLayoutListInfos->addItem(horizontalSpacerRight);

            hLayoutProjectInfos->addLayout(hLayoutListInfos);

            QIcon iconProjectInfosTab;
            iconProjectInfosTab.addFile(QString::fromUtf8(":/images/images/icons2/007-writing.png"), QSize(), QIcon::Normal, QIcon::On);

        tabWidget->addTab(tabProjectInfos, iconProjectInfosTab, QString());

        // Tab is the scrip edit area. Disposed as the horizontalLayout
            tabScriptEdit = new QWidget();
            tabScriptEdit->setObjectName(QString::fromUtf8("tabScriptEdit"));
            QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
            sizePolicy2.setHorizontalStretch(0);
            sizePolicy2.setVerticalStretch(0);
            sizePolicy2.setHeightForWidth(tabScriptEdit->sizePolicy().hasHeightForWidth());
            tabScriptEdit->setSizePolicy(sizePolicy2);
            tabScriptEdit->setStyleSheet(QString::fromUtf8(""));
            hLayoutScriptEdit = new QHBoxLayout(tabScriptEdit);
            hLayoutScriptEdit->setObjectName(QString::fromUtf8("hLayoutScriptEdit"));

                vLayoutScriptEdit = new QVBoxLayout();
                vLayoutScriptEdit->setObjectName(QString::fromUtf8("vLayoutScriptEdit"));

                    textScriptEdit = new QTextEdit(tabScriptEdit);
                    textScriptEdit->setObjectName(QString::fromUtf8("textScriptEdit"));
                    sizePolicy.setHeightForWidth(textScriptEdit->sizePolicy().hasHeightForWidth());
                    textScriptEdit->setSizePolicy(sizePolicy);
                    QFont font2;
                    font2.setFamily(QString::fromUtf8("Courier New"));
                    font2.setPointSize(12);
                    textScriptEdit->setFont(font2);
                    textScriptEdit->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));

                vLayoutScriptEdit->addWidget(textScriptEdit);

            hLayoutScriptEdit->addLayout(vLayoutScriptEdit);

            QIcon iconScriptEditTab;
            QString iconThemeName = QString::fromUtf8("NormalOn");
            if (QIcon::hasThemeIcon(iconThemeName)) {
                iconScriptEditTab = QIcon::fromTheme(iconThemeName);
            } else {
                iconScriptEditTab.addFile(QString::fromUtf8(":/images/images/new icon/icons8-copy-48.png"), QSize(), QIcon::Normal, QIcon::On);
            }

        tabWidget->addTab(tabScriptEdit, iconScriptEditTab, QString());


    vLayoutCentralWidget->addWidget(tabWidget);
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
        toolBar->addSeparator();
        toolBar->addAction(actionactionBold);
        toolBar->addAction(actionactionItalic);


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
    MainWindow->setWindowTitle(QCoreApplication::translate("WriteScreener", "WriteScreener", nullptr));
    actionNew->setText(QCoreApplication::translate("WriteScreener", "New", nullptr));
    actionOpen->setText(QCoreApplication::translate("WriteScreener", "Open", nullptr));
    actionSave->setText(QCoreApplication::translate("WriteScreener", "Save as", nullptr));
    actionExit->setText(QCoreApplication::translate("WriteScreener", "Exit", nullptr));
    actionPrint->setText(QCoreApplication::translate("WriteScreener", "Print", nullptr));
    actionCopy->setText(QCoreApplication::translate("WriteScreener", "Copy", nullptr));
    actionPaste->setText(QCoreApplication::translate("WriteScreener", "Paste", nullptr));
    actionCut->setText(QCoreApplication::translate("WriteScreener", "Cut", nullptr));
    actionUndo->setText(QCoreApplication::translate("WriteScreener", "Undo", nullptr));
    actionRedo->setText(QCoreApplication::translate("WriteScreener", "Redo", nullptr));
    actionPolice->setText(QCoreApplication::translate("WriteScreener", "Police", nullptr));
    actionactionAlignCenter->setText(QCoreApplication::translate("WriteScreener", "actionAlignCenter", nullptr));
    actionactionAlignLeft->setText(QCoreApplication::translate("WriteScreener", "actionAlignLeft", nullptr));
    actionactionAlignRight->setText(QCoreApplication::translate("WriteScreener", "actionAlignRight", nullptr));
    actionactionAlignJustify->setText(QCoreApplication::translate("WriteScreener", "actionAlignJustify", nullptr));
    actionactionUppercase->setText(QCoreApplication::translate("WriteScreener", "actionUppercase", nullptr));
    actionactionLowercase->setText(QCoreApplication::translate("WriteScreener", "actionLowercase", nullptr));
    actionactionBold->setText(QCoreApplication::translate("WriteScreener", "actionBold", nullptr));
    actionactionItalic->setText(QCoreApplication::translate("WriteScreener", "actionItalic", nullptr));
    actionColor->setText(QCoreApplication::translate("WriteScreener", "Color", nullptr));
    actionAbout->setText(QCoreApplication::translate("WriteScreener", "About", nullptr));
    labelTitle->setText(QCoreApplication::translate("WriteScreener", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">Title</span></p></body></html>", nullptr));
    labelWriter->setText(QCoreApplication::translate("WriteScreener", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">Writer</span></p></body></html>", nullptr));
    labelDirector->setText(QCoreApplication::translate("WriteScreener", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">Director</span></p></body></html>", nullptr));
    labelProducer->setText(QCoreApplication::translate("WriteScreener", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">Producer</span></p></body></html>", nullptr));
    tabWidget->setTabText(tabWidget->indexOf(tabProjectInfos), QString());

    textScriptEdit->setHtml(QCoreApplication::translate("WriteScreener", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
    "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
    "p, li { white-space: pre-wrap; }\n"
    "</style></head><body style=\" font-family:'Courier New'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
    "<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));

    tabWidget->setTabText(tabWidget->indexOf(tabScriptEdit), QString());
    menuFile->setTitle(QCoreApplication::translate("WriteScreener", "File", nullptr));
    menuEdit->setTitle(QCoreApplication::translate("WriteScreener", "Edit", nullptr));
    menuHelp->setTitle(QCoreApplication::translate("WriteScreener", "Help", nullptr));
    toolBar->setWindowTitle(QCoreApplication::translate("WriteScreener", "toolBar", nullptr));
}

void MainWindow2::on_actionNew_triggered()
{
    currentFile.clear();
    textScriptEdit->setText(QString());
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
    textScriptEdit->setText(text);
    file.close();
}

void MainWindow2::on_actionSave_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, "Save Script", "", "Text File (*.txt)");
    QFile file(filename);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file : " + file.errorString());
        return;
    }
    currentFile = filename;
    setWindowTitle(filename);
    QTextStream out(&file);
    QString text = textScriptEdit->toPlainText();
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

    textScriptEdit->print(&printer);
}

void MainWindow2::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow2::on_actionCopy_triggered()
{
    textScriptEdit->copy();
}

void MainWindow2::on_actionPaste_triggered()
{
    textScriptEdit->paste();
}

void MainWindow2::on_actionCut_triggered()
{
    textScriptEdit->cut();
}

void MainWindow2::on_actionUndo_triggered()
{
    textScriptEdit->undo();
}

void MainWindow2::on_actionRedo_triggered()
{
    textScriptEdit->redo();
}

void MainWindow2::on_actionPolice_triggered()
{
    bool selected;
    QFont font = QFontDialog::getFont(&selected, this);
    if (selected) {
        // A font is selected
        QTextCursor cursor = textScriptEdit->textCursor();
        QTextCharFormat formatChar = cursor.charFormat();
        formatChar.setFont(font);
        cursor.setCharFormat(formatChar);
    }
}

void MainWindow2::on_actionactionAlignCenter_triggered()
{
    textScriptEdit->setAlignment(Qt::AlignCenter);
}

void MainWindow2::on_actionactionAlignLeft_triggered()
{
    textScriptEdit->setAlignment(Qt::AlignLeft);
}

void MainWindow2::on_actionactionAlignRight_triggered()
{
    textScriptEdit->setAlignment(Qt::AlignRight);
}

void MainWindow2::on_actionactionAlignJustify_triggered()
{
    textScriptEdit->setAlignment(Qt::AlignJustify);
}

void MainWindow2::on_actionactionUppercase_triggered()
{
    QTextCursor cursor = textScriptEdit->textCursor();
    if (cursor.selectionEnd() - cursor.selectionStart() == 0) {
        // Passer toute la ligne en majuscule
        cursor.select(QTextCursor::LineUnderCursor);
    }
    cursor.insertText(cursor.selectedText().toUpper());
}

void MainWindow2::on_actionactionLowercase_triggered()
{
    QTextCursor cursor = textScriptEdit->textCursor();
    if (cursor.selectionEnd() - cursor.selectionStart() == 0) {
        // Passer toute la ligne en majuscule
        cursor.select(QTextCursor::LineUnderCursor);
    }
    cursor.insertText(cursor.selectedText().toLower());
}

void MainWindow2::on_actionactionBold_triggered()
{
    QTextCursor cursor = textScriptEdit->textCursor();
    QTextCharFormat formatChar = cursor.charFormat();
    formatChar.setFontWeight(QFont::Bold);
    cursor.setCharFormat(formatChar);
}

void MainWindow2::on_actionactionItalic_triggered()
{
    QTextCursor cursor = textScriptEdit->textCursor();
    QTextCharFormat formatChar = cursor.charFormat();
    formatChar.setFontItalic(1);
    cursor.setCharFormat(formatChar);
}

void MainWindow2::on_actionColor_triggered()
{
    QColor color = QColorDialog::getColor(Qt::black, this);
    textScriptEdit->setTextColor(color);
}

void MainWindow2::on_actionAbout_triggered()
{
    About *win = new About(this);
    win->show();
}

