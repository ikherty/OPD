#ifndef WINEMPLOYEES_H
#define WINEMPLOYEES_H

#include <QMainWindow>

namespace Ui {
class winEmployees;
}

class winEmployees : public QMainWindow
{
    Q_OBJECT

public:
    explicit winEmployees(QWidget *parent = 0);
    ~winEmployees();

private slots:
    void on_action_triggered();

private:
    Ui::winEmployees *ui;
};

#endif // WINEMPLOYEES_H
