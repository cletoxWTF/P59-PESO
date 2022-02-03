#include "principal.h"

#include <QApplication>


// ICONO APP: <a href="https://www.flaticon.es/iconos-gratis/perdida-de-peso" title="pérdida de peso iconos">Pérdida de peso iconos creados por Freepik - Flaticon</a>
// ICONO GUARDAR: <a href="https://www.flaticon.es/iconos-gratis/salvar" title="salvar iconos">Salvar iconos creados por Good Ware - Flaticon</a>
// ICONO CALCULAR <a href="https://www.flaticon.es/iconos-gratis/calculadora" title="calculadora iconos">Calculadora iconos creados por BZZRINCANTATION - Flaticon</a>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Principal w;
    w.show();
    return a.exec();
}
