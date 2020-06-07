#ifndef OPENPROJECT_H
#define OPENPROJECT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class OpenProject; }
QT_END_NAMESPACE

class OpenProject : public QMainWindow
{
    Q_OBJECT

public:
    OpenProject(QWidget *parent = nullptr);
    ~OpenProject();

private:
    Ui::OpenProject *ui;
};
#endif // OPENPROJECT_H
