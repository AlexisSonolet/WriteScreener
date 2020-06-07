#include "../headers/openproject.h"
#include "ui_openproject.h"

OpenProject::OpenProject(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::OpenProject)
{
    ui->setupUi(this);
}

OpenProject::~OpenProject()
{
    delete ui;
}

