#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "pathfile.h"
//#include "content.h"
namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = 0);
    ~menu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::menu *ui;
    pathFile *PATH;
};

#endif // MENU_H
