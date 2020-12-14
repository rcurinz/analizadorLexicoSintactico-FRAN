#ifndef ADVERTENCIA_ABRIR_H
#define ADVERTENCIA_ABRIR_H

#include <QDialog>

namespace Ui {
class advertencia_abrir;
}

class advertencia_abrir : public QDialog
{
    Q_OBJECT

public:
    explicit advertencia_abrir(QWidget *parent = nullptr);
    ~advertencia_abrir();

private slots:
    void on_pushButton_clicked();

private:
    Ui::advertencia_abrir *ui;
};

#endif // ADVERTENCIA_ABRIR_H
