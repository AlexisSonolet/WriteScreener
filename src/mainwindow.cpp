#include "headers/mainwindow.h"
#include "ui_mainwindow.h"
#include "headers/about.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->centralwidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    currentFile.clear();
    ui->textEdit->setText(QString());
}

void MainWindow::on_actionOpen_triggered()
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
    ui->textEdit->setText(text);
    file.close();
}

void MainWindow::on_actionSave_triggered()
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
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}

void MainWindow::on_actionPrint_triggered()
{
    QPrinter printer;
    printer.setPrinterName("Printer Name");
    QPrintDialog pDialog(&printer, this);
    if (pDialog.exec() == QDialog::Rejected) {
        QMessageBox::warning(this, "Warning", "Cannot access printer");
        return;
    }

    ui->textEdit->print(&printer);
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionPolice_triggered()
{
    bool selected;
    QFont font = QFontDialog::getFont(&selected, this);
    if (selected) {
        // A font is selected
        QTextCursor cursor = ui->textEdit->textCursor();
        QTextCharFormat formatChar = cursor.charFormat();
        formatChar.setFont(font);
        cursor.setCharFormat(formatChar);
    }
}

void MainWindow::on_actionactionAlignCenter_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignCenter);
}

void MainWindow::on_actionactionAlignLeft_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignLeft);
}

void MainWindow::on_actionactionAlignRight_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignRight);
}

void MainWindow::on_actionactionAlignJustify_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignJustify);
}

void MainWindow::on_actionactionUppercase_triggered()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    if (cursor.selectionEnd() - cursor.selectionStart() == 0) {
        // Passer toute la ligne en majuscule
        cursor.select(QTextCursor::LineUnderCursor);
    }
    cursor.insertText(cursor.selectedText().toUpper());
}

void MainWindow::on_actionactionLowercase_triggered()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    if (cursor.selectionEnd() - cursor.selectionStart() == 0) {
        // Passer toute la ligne en majuscule
        cursor.select(QTextCursor::LineUnderCursor);
    }
    cursor.insertText(cursor.selectedText().toLower());
}

void MainWindow::on_actionColor_triggered()
{
    QColor color = QColorDialog::getColor(Qt::black, this);
    ui->textEdit->setTextColor(color);
}

void MainWindow::on_actionAbout_triggered()
{
    About *win = new About(this);
    win->show();
}
