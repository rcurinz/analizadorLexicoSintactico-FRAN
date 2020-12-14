#ifndef ACERCA_DE_H
#define ACERCA_DE_H

#include <QDialog>

namespace Ui {
class acerca_de;
}

class acerca_de : public QDialog
{
    Q_OBJECT

public:
    explicit acerca_de(QWidget *parent = nullptr);
    ~acerca_de();

private slots:
    void on_pushButton_clicked();

private:
    Ui::acerca_de *ui;
};

#endif // ACERCA_DE_H
