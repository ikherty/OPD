#ifndef CHANGESOURCECSV_H
#define CHANGESOURCECSV_H

#include <QDialog>

namespace Ui {
class changeSourceCSV;
}

class changeSourceCSV : public QDialog
{
    Q_OBJECT

public:
    explicit changeSourceCSV(QWidget *parent = 0);
    ~changeSourceCSV();

private slots:
    void on_pushButton_clicked();

private:
    Ui::changeSourceCSV *ui;
};

#endif // CHANGESOURCECSV_H
