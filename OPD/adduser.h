#ifndef ADDUSER_H
#define ADDUSER_H
#include <QFile>
#include <QDialog>
#include "winemployees.h"

namespace Ui{
class addUser;
}

class addUser : public QDialog{
    Q_OBJECT

public:
    explicit addUser(QWidget *parent = 0);
    void translate(winEmployees ui);
    ~addUser();

private:
    Ui::addUser *ui;
private slots:
    void OKclicked();
};

#endif // ADDUSER_H
