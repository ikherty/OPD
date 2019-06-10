#ifndef PERSONALSLIST_H
#define PERSONALSLIST_H

#include <QDialog>

namespace Ui {
class personalsList;
}

class personalsList : public QDialog{
    Q_OBJECT

public:
    explicit personalsList(QWidget *parent = 0);
    ~personalsList();

private:
    Ui::personalsList *ui;
};

#endif // PERSONALSLIST_H
