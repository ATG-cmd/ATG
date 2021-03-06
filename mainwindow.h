#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <tanque.h>
#include <QComboBox>
#include <QDateTime>
#include <sonda.h>
#include <QTimer>
#include <QValidator>
#include <QLineEdit>
#include <QEvent>
#include "dialog.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QPluginLoader>
#include <QSerialPort>
#include <QSerialPortInfo>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

protected:
  // bool event(QEvent * event) override;
   bool eventFilter(QObject *obj, QEvent *event) override;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int ProGaugeCount= 0;
    Tanque *Tconf;
    Tanque *tanques[8];
    Tanque *Maximizado;
    Sonda  *Sondas[8];
    QTimer *Time1;
    QTimer *Time2;
    QTimer *Time3;
    int N =-1;
    int S=0;
    QString Series[8];
    int frame = 0;
     QSqlDatabase DB;
     QSerialPort *puertoserie;
     QString portname;
     int G;
     QString ProGaugeId[8];
     int IDSerie;
     bool Maxi=false;
     int ProGaugeCount1 = 0;
     int ProGaugeCountCMD = 0;
     int indiceM = 0;
     bool RX= false;
     int intento = 0;


private slots:

    void on_Btn_Home_clicked();

    void on_pushButton_clicked();

    void on_Btb_Sonda_clicked();

    void on_Btn_Tanque_clicked();

   void ConCombocol(QComboBox *combo);

   void Horizontal();

   void Vertical();

   void Rectangular();

   void ocultar();

   void Modificar_TextoTank();

   void on_Btn_Guardar_clicked();

   void Actualizar_Time();

   void on_Btn_Config_clicked();

   void on_pushButton_3_clicked();

   void on_Btn_user_clicked();

   void Leer_datos();

   void inicbuff1();

   void addcbuff1(char c);

   void Guardar_Sonda();

   void Guardar_Tanque();

   void Estados();

   void Enviar_qry(QString qry);

   void Protocolo(QString Cad);
   
   void Descargar();

   void Geometrytank();

   void on_pushButton_2_clicked();

   void Tanque_Maximisado();

   void on_Regresar_clicked();

   void consultaBD();

   void offlineSonda(QString offsonda);

   void SendCMD();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
