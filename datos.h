#ifndef DATOS_H
#define DATOS_H

#include <QObject>

class Datos : public QObject
{
    Q_OBJECT
private:
    float m_altura;
    float m_peso;
public:
    explicit Datos(QObject *parent = nullptr);
    Datos(float altura, float peso, QObject *parent = nullptr);
    float altura() const;
    float peso() const;


signals:

};

#endif // DATOS_H
