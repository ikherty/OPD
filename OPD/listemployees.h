#ifndef LISTEMPLOYEES_H
#define LISTEMPLOYEES_H

#include <QDialog>

namespace Ui {
class listEmployees;
}

class listEmployees : public QDialog
{
    Q_OBJECT

public:
    explicit listEmployees(QWidget *parent = 0);
    ~listEmployees();

private:
    Ui::listEmployees *ui;
};

#endif // LISTEMPLOYEES_H
