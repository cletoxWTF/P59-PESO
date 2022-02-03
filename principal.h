#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <Qpainter>
#include <QtMath>
#include <QLCDNumber>
#include <QColor>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

private slots:
    void on_btnCalcular_released();

    void on_btnGuardarImg_clicked();

private:
    Ui::Principal *ui;
    QPixmap lienzo;
    void dibujarRect();
    void IMC();
    void guardarInf();
};
#endif // PRINCIPAL_H
