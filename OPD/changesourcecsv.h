#ifndef CHANGESOURCECSV_H
#define CHANGESOURCECSV_H

#include <QDialog>

namespace Ui {
class changeSourceCSV;
}

class changeSourceCSV : public QDialog{
    Q_OBJECT

public:
    explicit changeSourceCSV(QWidget *parent = 0);
    ~changeSourceCSV();

private slots:
    void pushButton_clicked();

private:
    Ui::changeSourceCSV *ui;
signals:
    void pathDataBase(const QString &str);
private slots:
    void OKclicked();
};

#endif // CHANGESOURCECSV_H
