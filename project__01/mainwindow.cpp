#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "acerca_de.h"
#include <QTextStream>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QDialogButtonBox>
#include <QProcess>
#include <QDesktopServices>
#include <cstdlib>
#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <cstring>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_5_clicked()
{
    acerca_de acerca_de;
    acerca_de.setModal(true);
    acerca_de.exec();
}

//Boton de abrir
void MainWindow::on_pushButton_clicked()
{            

    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "ADVERTENCIA", "Perdera el progreso en caso de abrir un nuevo archivo, se recomienda guardar el archivo previamente",
                                    QMessageBox::Ok|QMessageBox::Cancel);
      if (reply == QMessageBox::Ok) {

                  QString fileName = QFileDialog::getOpenFileName(this, tr("Abrir"), "",
                                                                      tr("Todos los archivos (*.*);;Archivo de texto (*.txt);;Archivo C++ (*.cpp *.h)"));
                          if ( fileName.isEmpty() )
                            return;

                          QFile file( fileName );
                          if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
                             return;
                             ui->textEdit->clear();
                            }
                          QTextStream in( &file );
                          while (!in.atEnd()) {
                             QString line = in.readLine();
                             ui->textEdit->append( line );
                          }
      }


}

//Boton de guardar
void MainWindow::on_pushButton_2_clicked()

{
    QString textboxValue = ui->textEdit->toPlainText();
    if (textboxValue != ""){
        QString nomeFile = QFileDialog::getSaveFileName(this, tr("Guardar como"), "",
                                                            tr("Archivo de texto (*.txt);;Archivo C++ (*.cpp *.h)"));
            if (nomeFile != "") {
                QFile file(nomeFile);

                if (file.open(QIODevice::ReadWrite)) {
                    QTextStream stream(&file);
                    stream << ui->textEdit->toPlainText();
                    file.flush();
                    file.close();
                }
                else {
                    QMessageBox::critical(this, tr("Error"), tr("No se pudo guardar el archivo"));
                    return;
                }
            }
    }

    else {
        QMessageBox messagebox;
        messagebox.setWindowTitle("Error");
        messagebox.setText("No existe codigo a guardar");
        messagebox.exec();
    }

}

//Boton de Analizar
void MainWindow::on_pushButton_3_clicked()
{
    QString textboxValue = ui->textEdit->toPlainText();
    if (textboxValue !=""){
        ui->textBrowser->setText("Se ha ejecutado la parte lexica y sintactica");
        //QProcess *process = new QProcess(this);
        //QString program = "C:/a.exe";
        //QString folder = "C:\\Users\\jigen\\Documents\\analizador\\a.exe";
        //process->start("\"C:\\Users\\jigen\\Documents\\analizador\\a.exe\"");

        //QProcess::startDetached((program));
        //ui->textBrowser_2->setText(file);
        //QProcess::startDetached("C:/a.exe");

        //QString program("cmd.exe");
        //QStringList parameters, ruta;
        //ruta <<"cd " << QCoreApplication::applicationDirPath() << "test/a.exe";
        //parameters << "cd ";//  << ruta << "/test/a.exe";
        //QProcess::startDetached(program, parameters);


        //QDir::setCurrent("C:\\Users\\jigen\\Documents\\project__01");

        //std::system(ruta);
        //QProcess process;;
        //QString ruta = QCoreApplication::applicationDirPath();
        //QString exe = "/test/a.bat";
        //QString path = ruta.append(exe);
        //process.start("/test/a.bat");

         //QObject *parent;

        //QString program = "C:\\Users\\Synner\\Downloads\\ui_intento_de_analizador\\build-project__01-Desktop_Qt_6_0_0_MinGW_64_bit-Debug\debug\\test\\a.exe";
        //QStringList arguments;
        //arguments << "-style" << "fusion";

        //QProcess myProcess;
        //system(program);
        //ShellExecute(NULL, NULL, "a.exe", "a", NULL, SW_SHOWNORMAL);
        //QProcess *process = new QProcess(this);
        //QString file("C:\\Users\\Synner\\Downloads\\ui_intento_de_analizador\\build-project__01-Desktop_Qt_6_0_0_MinGW_64_bit-Debug\debug\\test\\a.exe");
        //process->execute(file);
        //QString ruta = QCoreApplication::applicationDirPath();
        //char cmd[200];
        //strcpy(cmd,"test/a.bat");
        //system(cmd);
        //QProcess process;
        //QDir::currentPath;
        //std::string rutas = ruta.toUtf8().constData();
        QFile file(QCoreApplication::applicationDirPath()+"/entrada.mp");

        if (file.open(QIODevice::WriteOnly)) {
            QTextStream stream(&file);
            stream << ui->textEdit->toPlainText();
            file.flush();
            file.close();
        }
        system("C:/Users/Synner/Downloads/cambios_ui/build-project__01-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/debug/a.bat");
}
    else{
        ui->textBrowser->setText("No hay codigo para analizar");
    }
}

void MainWindow::on_pushButton_4_clicked(){
    using namespace std;
    //ui->textBrowser->setText(" line" );
    /*
    QFile file("C:/Users/Synner/Downloads/ui_intento_de_analizador/build-project__01-Desktop_Qt_6_0_0_MinGW_64_bit-Debug/debug/test/tokens_lexico.txt");
    cout << &file;
    QTextStream in( &file );
    while (!in.atEnd()) {
       QString line = in.readLine();
       ui->textBrowser->setText( line );
    }*/
    QFile inputFile(QCoreApplication::applicationDirPath()+ "/tokens_lexico.txt");
    if (inputFile.open(QIODevice::ReadOnly))
    {
          QTextStream in(&inputFile);
          while (!in.atEnd())
          {
             QString line = in.readAll();
             ui->textBrowser_2->setText( line );
          }
          inputFile.close();
    }
}

void MainWindow::on_pushButton_6_clicked(){
    QFile inputFile(QCoreApplication::applicationDirPath()+ "/sintactico_errores.txt");
    if (inputFile.open(QIODevice::ReadOnly))
    {
          QTextStream in(&inputFile);
          while (!in.atEnd())
          {
             QString line = in.readAll();
             ui->textBrowser->setText( line );
          }
          inputFile.close();
    } else {
        ui->textBrowser->setText("No se han encontrado errores sintacticos");
    }

}

void MainWindow::on_pushButton_7_clicked()
{
    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "ADVERTENCIA", "Perdera el progreso en caso de abrir un nuevo archivo, se recomienda guardar el archivo previamente",
                                    QMessageBox::Ok|QMessageBox::Cancel);
      if (reply == QMessageBox::Ok) {

                  QString fileName = QFileDialog::getOpenFileName(this, tr("Abrir"), "",
                                                                      tr("Todos los archivos (*.*);;Archivo de texto (*.txt);;Archivo C++ (*.cpp *.h)"));
                          if ( fileName.isEmpty() )
                            return;

                          QFile file( fileName );
                          if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
                             return;
                             ui->textEdit->clear();
                            }
                          QTextStream in( &file );
                          while (!in.atEnd()) {
                             QString line = in.readLine();
                             ui->textEdit->append( line );
                          }
      }

}
