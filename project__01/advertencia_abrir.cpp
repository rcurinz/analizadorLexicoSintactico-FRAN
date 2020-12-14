#include "advertencia_abrir.h"
#include "ui_advertencia_abrir.h"

advertencia_abrir::advertencia_abrir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::advertencia_abrir)
{
    ui->setupUi(this);
}

advertencia_abrir::~advertencia_abrir()
{
    delete ui;
}

void advertencia_abrir::on_pushButton_clicked()
{
    true;
}
