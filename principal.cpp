#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
    lienzo = QPixmap(1000,1000);
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

    QPainter painter(&lienzo);
     // CREAR UN PINCEL PARA LOS BORDES
    QPen pincel;
    pincel.setWidth(5);
    pincel.setColor(Qt::black);
    pincel.setJoinStyle(Qt::MiterJoin);
    //pincel.setJoinStyle(Qt::MiterJoin);

    // ASIGNAR EL PINCEL AL PINTOR
    painter.setPen(pincel);

    // DIBUJAR LA BARRA DE MEDIDA
    painter.drawRect(50,50,400,100);
}


