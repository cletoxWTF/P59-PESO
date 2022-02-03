#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
    lienzo = QPixmap(2000,2000);
    this->dibujarRect();
    ui->outCuadro->setPixmap(lienzo);
}

Principal::~Principal()
{
    delete ui;
}

void Principal::dibujarRect()
{
    // RELLENAR EL CUADRO PRINCIPAL DE UN COLOR
    lienzo.fill(Qt::white);

    // CREAR AL PINTOR
    QPainter painter(&lienzo);

    // CREAR UN PINCEL PARA LOS BORDES
    QPen pincel;
    pincel.setWidth(5);
    pincel.setColor(Qt::black);
    pincel.setJoinStyle(Qt::MiterJoin);

    // ASIGNAR EL PINCEL AL PINTOR
    painter.setPen(pincel);

    // DIBUJAR LA BARRA DE MEDIDA
    painter.drawRect(40,50,500,100);

    /* CREAR PINCELES PARA LOS COLORES
     * EN ALGUNOS CASOS SE CREAN COLORES CON EL RGB PORQUE NO ESTAN EN LA BIBLIOTECA
     * ADEMAS SE DESIGNA EL ANCHO A LOS PINCELES Y EL COLOR QUE LLEVARAN
     * TAMBIEN SE CREARAN LOS RECTANGULOS PARA LA BARRA
     */

    QPen pincelRjo;
    pincelRjo.setWidth(5);
    pincelRjo.setColor(Qt::red);
    painter.setPen(pincelRjo);
    painter.setBrush(Qt::red);
    painter.drawRect(45,55,490,90);

    QColor naranja(255,128,0);
    QPen pincelNrj;
    pincelNrj.setWidth(5);
    pincelNrj.setColor(naranja);
    painter.setPen(pincelNrj);
    painter.setBrush(naranja);
    painter.drawRect(45,55,390,90);

    QPen pincelAmr;
    pincelAmr.setWidth(5);
    pincelAmr.setColor(Qt::yellow);
    painter.setPen(pincelAmr);
    painter.setBrush(Qt::yellow);
    painter.drawRect(45,55,290,90);

    QPen pincelVrd;
    pincelVrd.setWidth(5);
    pincelVrd.setColor(Qt::green);
    painter.setPen(pincelVrd);
    painter.setBrush(Qt::green);
    painter.drawRect(45,55,190,90);

    QPen pincelAzl;
    pincelAzl.setWidth(5);
    pincelAzl.setColor(Qt::blue);
    painter.setPen(pincelAzl);
    painter.setBrush(Qt::blue);
    painter.drawRect(45,55,70,90);

    QColor celeste(126,192,238);
    QPen pincelCel;
    pincelCel.setWidth(5);
    pincelCel.setColor(celeste);
    painter.setPen(pincelCel);
    painter.setBrush(celeste);
    painter.drawRect(45,55,30,90);

}

void Principal::IMC()
{
    // CREAR AL PINTOR
    QPainter painter2(&lienzo);
    // CREAR UN PINCEL PARA LA DIVISION
    QPen pincel;
    pincel.setWidth(5);
    pincel.setColor(Qt::black);
    painter2.setPen(pincel);

    // CREACION DE VARIABLES
    double altura = ui->inAltura->value();
    double peso = ui->inPeso->value();
    double IMC;

    // CALCULO DEL IMC
    IMC = peso /(qPow(altura,2));

    //PROYECCION DEL RESULTADO EN EL DISPLAY DEL IMC
    ui->outIMC->display(IMC);
    ui->outPesoAct->display(IMC);

    // VALOR ENTERO PARA CONSEGUIR LOS PIXELES
    int valor = IMC*10;

    // DIBUJA LA SUBDIVISION
    painter2.drawLine(valor,40,valor,110);

}

void Principal::guardarInf()
{
    /*
    // ABRIR CUADRO DE DIALOGO PARA SELECCIONAR UBICACION Y NOMBRE DEL ARCHIVO
    QString nombreArchivo = QFileDialog::getSaveFileName(this,
                                                         "Guardar Archivo",
                                                         QDir::home().absolutePath(),
                                                         "Archivos de Texto(*.slr)");

    // CREAR UN OBJETO QFILE
    QFile archivo(nombreArchivo);

    //ABRIRLO PARA ESCRITURA
    if(archivo.open(QFile::WriteOnly|QFile::Truncate)){

        // CREAR UN 'STREAM' DE TEXTO
        QTextStream salida(&archivo);

        // ENVIAR LOS DATOS DEL RESULTADO A LA SALIDA
        salida <<ui->outPesoAct;

    }

    // CERRAR ARCHIVO
    archivo.close();
    */
}



void Principal::on_btnCalcular_released()
{
     IMC();
}

void Principal::on_btnGuardarImg_clicked()
{
    guardarInf();
}

