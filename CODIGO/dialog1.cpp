#include "dialog1.h"
#include "ui_dialog1.h"

#include <QFileDialog>
#include <QDir>
#include <QFile>
#include <QFileDialog>
#include <time.h>

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
}

Dialog1::~Dialog1()
{
    delete ui;
}

//Seleccionamos el directorio donde estan las imagenes
void Dialog1::on_pushButton_2_clicked()
{
    rutaOrigen = QFileDialog::getExistingDirectory(nullptr, ("select input directory"), QDir::homePath());
    original.load(rutaOrigen);

}

//Seleccionamos el directorio donde queremos guardar las imagenes modificadas
void Dialog1::on_pushButton_3_clicked()
{
    rutaDestino = QFileDialog::getExistingDirectory(nullptr, ("select input directory"), QDir::homePath());
    modificada.save(rutaDestino);
}


void Dialog1::on_pushButton_clicked()
{
   //Selecciona todas las imagenes de la ruta selecciona
    QStringList fotos = QDir (rutaOrigen).entryList();

    clock_t inicio, fin;

    int tam = 5;
    double tiempos[tam];
    double sumaTiempos = 0;
    double media = 0;

    for(int bu = 0; bu < tam; bu++){

        //iniciamos el tiempo
        inicio = clock();
     foreach (QString name, fotos){
        //Seleccionamos el nombre de la imagen
        QString nombre = name;
        nombre = QDir (rutaOrigen).absoluteFilePath(name);

        //Cambiamos el nombre a las imagenes modificadas
        original.load(nombre);
        modificada.load(nombre);

        //Modificamos el color
        for(int i = 0; i < original.width(); i++){  //ancho de la imagen
            for(int j = 0; j < original.height(); j++){ //alto de la imagen
                QRgb pix = original.pixel(i,j);
                int rojo = qRed(pix);
                QRgb value = qRgb(rojo, 0, 0);
                modificada.setPixel(i, j, value);
            }
        }
        //Cambiamos el nombre con la imagen modificada
        QPixmap a = QPixmap::fromImage(modificada);
        a.save("Modificada.jpg", ".jpg",-1);
    }
        //Finalizamos los tiempos
        fin = clock();
        tiempos[bu] = (double)(fin - inicio)/CLOCKS_PER_SEC;
        sumaTiempos = sumaTiempos + tiempos[bu];
        media = sumaTiempos / tam;
    }

    //Mostramos los tiempos
    ui->tiempo1->setText(QString::number(tiempos[0]) + " segundos");
    ui->tiempo2->setText(QString::number(tiempos[1]) + " segundos");
    ui->tiempo3->setText(QString::number(tiempos[2]) + " segundos");
    ui->tiempo4->setText(QString::number(tiempos[3]) + " segundos");
    ui->tiempo5->setText(QString::number(tiempos[4]) + " segundos") ;
    ui->media->setText(QString::number(media) + " segundos");

}
