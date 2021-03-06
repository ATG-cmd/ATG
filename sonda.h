#ifndef SONDA_H
#define SONDA_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

class Sonda : public QWidget
{
    Q_OBJECT
public:
    explicit Sonda(QWidget *parent = nullptr);

    int getSerie() const;
    void setSerie(int value);

    int getProtocolo() const;
    void setProtocolo(int value);

    int getBaudios() const;
    void setBaudios(int value);

    int getFlotadores() const;
    void setFlotadores(int value);

    QString getLicencia() const;
    void setLicencia(const QString &value);

    QString getUnidad_Distancia() const;
    void setUnidad_Distancia(const QString &value);

    QString getUnidad_Temperatura() const;
    void setUnidad_Temperatura(const QString &value);

    QString getUnidad_Volumen() const;
    void setUnidad_Volumen(const QString &value);

    double getAjuste_Altura() const;
    void setAjuste_Altura(double value);

signals:

public slots:

private:

    int Serie;
    int Protocolo;
    int Baudios;
    int Flotadores;
    QString Licencia;
    QString Unidad_Distancia;
    QString Unidad_Temperatura;
    QString Unidad_Volumen;
    double  Ajuste_Altura;


};

#endif // SONDA_H
