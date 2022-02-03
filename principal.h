#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <Qpainter>

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

private:
    Ui::Principal *ui;
    QPixmap lienzo;
    void dibujarRect();
};
#endif // PRINCIPAL_H
