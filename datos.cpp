#include "datos.h"

Datos::Datos(QObject *parent) : QObject(parent)
{

}

Datos::Datos(float altura, float peso, QObject *parent) : QObject(parent),
    m_altura(altura),
    m_peso(peso)
{}

float Datos::altura() const
{
    return m_altura;
}

float Datos::peso() const
{
    return m_peso;
}
