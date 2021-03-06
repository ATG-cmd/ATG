#include "sonda.h"

Sonda::Sonda(QWidget *parent) : QWidget(parent)
{

}

int Sonda::getSerie() const
{
    return Serie;
}

void Sonda::setSerie(int value)
{
    Serie = value;
}

int Sonda::getProtocolo() const
{
    return Protocolo;
}

void Sonda::setProtocolo(int value)
{
    Protocolo = value;
}

int Sonda::getBaudios() const
{
    return Baudios;
}

void Sonda::setBaudios(int value)
{
    Baudios = value;
}

int Sonda::getFlotadores() const
{
    return Flotadores;
}

void Sonda::setFlotadores(int value)
{
    Flotadores = value;
}

QString Sonda::getLicencia() const
{
    return Licencia;
}

void Sonda::setLicencia(const QString &value)
{
    Licencia = value;
}

QString Sonda::getUnidad_Distancia() const
{
    return Unidad_Distancia;
}

void Sonda::setUnidad_Distancia(const QString &value)
{
    Unidad_Distancia = value;
}

QString Sonda::getUnidad_Temperatura() const
{
    return Unidad_Temperatura;
}

void Sonda::setUnidad_Temperatura(const QString &value)
{
    Unidad_Temperatura = value;
}

QString Sonda::getUnidad_Volumen() const
{
    return Unidad_Volumen;
}

void Sonda::setUnidad_Volumen(const QString &value)
{
    Unidad_Volumen = value;
}

double Sonda::getAjuste_Altura() const
{
    return Ajuste_Altura;
}

void Sonda::setAjuste_Altura(double value)
{
    Ajuste_Altura = value;
}
