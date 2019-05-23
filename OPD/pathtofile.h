#ifndef PATHTOFILE_H
#define PATHTOFILE_H

#include <QDialog>

namespace Ui {
class pathToFile;
}

class pathToFile : public QDialog
{
    Q_OBJECT

public:
    explicit pathToFile(QWidget *parent = 0);
    ~pathToFile();

private slots:
    void on_pushButton_clicked();

private:
    Ui::pathToFile *ui;
};

#endif // PATHTOFILE_H
