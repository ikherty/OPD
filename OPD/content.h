#ifndef CONTENT_H
#define CONTENT_H

#include <QDialog>

namespace Ui {
class content;
}

class content : public QDialog
{
    Q_OBJECT

public:
    explicit content(QWidget *parent = 0);
    ~content();

private:
    Ui::content *ui;
};

#endif // CONTENT_H
