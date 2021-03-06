#ifndef TANQUE_H
#define TANQUE_H
#include<QString>
#include<QObject>
#include<QMainWindow>
#include <QLabel>
#include <QGroupBox>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QPlainTextEdit>

class Tanque :public QWidget
{
    Q_OBJECT

    QString NomTank;
    QString Cad;
    QString ID;
    bool TMaximizado;

    int contador=0;
    int niv;
    double VolMax;
    double ProductoAlto;
    double DesbordamientoP;
    double NecesitaProducto;
    double ProductoBajo;
    double Alarma_de_Agua;
    double Advertencia_de_Agua;
    double VolumenA;
    double VolumenCon;
    double AlturaTank;
    double LimSup;
    double Temperatura;
    double TankDiametro = 200;
    double Tankaltura;
    double Tanklargo;
    double Tankancho;
    double Capacidad;
    double TankTiempoEntrega;
    double TankMinimoEntrega;
    bool Config;


    int nivA;
    int PosX;
    int PosY;
    int PosBX;
    int posBY;
    int Tipo;
    QString C = "0.60";
    QString D="0.611";
    QString E="0.80";
    QString F="0.81";
    QString Color1 = "rgba(255, 255, 255)";
    QString Color2 = "gray";
    QString Color3=  "rgb(25, 158, 218)";
    QString Color4= "rgba(255, 0, 0, 255)";
    QString Color5= "purple";
    QString t="0.25";
    QString U ="0.254";
    QString R="100";
    QString RT="200";

private slots:

    void clickbuton();

signals:

    void Camino();


public:
    QString Radio="90";
   QGroupBox *T1;
   QWidget *layoutWidget1;
   QLabel *Volumen;
   QLabel *Altura;
   QLabel *latanq;
   QHBoxLayout *horizontalLayout_3;
   QVBoxLayout *verticalLayout_2;
   QLabel *Temp;
   QVBoxLayout *verticalLayout;
   QLabel *Lim_Sup;
   QLabel *VolVal;
   QLabel *AltVal;
   QLabel *TmpVal;
   QLabel *NivAgua;
   QLabel *LsVal;
   QLabel *NivAVal;
   QGroupBox *groupBox_4;
   QLabel *Ltemp;
   QLabel *label1;
   QPlainTextEdit *Volumen_Maximo;
   QPlainTextEdit *Producto_Alto;
   QPlainTextEdit *Desbordamiento;
   QPlainTextEdit *Necesita_producto;
   QLabel *LVolumen_Maximo;
   QLabel *LProducto_Alto;
   QLabel *LDesbordamiento;
   QLabel *LNecesita_producto;
   QPlainTextEdit *Producto_Bajo;
   QPlainTextEdit *Alarma_Alto_Nivel_Agua;
   QPlainTextEdit *Advertencia_Nivel_Agua;
   QLabel *LProducto_Bajo;
   QLabel *LAlarma_Alto_Nivel_Agua;
   QLabel *LAdvertencia_Nivel_Agua;
   QPushButton *Boton;
   QLabel *TituloTank;
   QTabWidget *Tab;
   QWidget * Tab1;
   QWidget * tab_2;

   /*
       Max_volumen  Volumen Maximo
       High_product Producto Alto
       Overfill     Desbordamiento
       Delivery_needed   Necesita producto
       Low_producto  Producto Bajo
      High_water_alarm  Alto nivel de agua
     High_water_warning Advertencia de alto nivel de agua */

    QString  styleSheetTank =
            "font: 16pt \"Broadway\";"
            "color: green;"
            // " border-width: 5px;"
            "border-style: solid;"
            "border-color: black;"
            "border-radius: "+R+ "px;"
            "background-color:"
            "qlineargradient(spread:pad,"
            "x1:0, y1:0, x2:0, y2:1,"
            "stop:0 "+ Color1 +" ,"
            "stop:"+C +" "+ Color1 + " ,"
            "stop:"+D+" "+ Color2 + " ,"
            "stop: "+E+" "+ Color2 + " ,"
            "stop: "+F+" "+ Color3 + " ,"
            "stop:1 "+" "+ Color3 +" );";

    double ProGaugeMeasureA = 3.2 * 100;        //  Valores en metros, se convierten en centimetros
    double ProGaugeMeasureB = 9.94718 * 100;    //  Valores en metros, se convierten en centimetros
    double ProGaugeMeasureC = 3.2 * 100;        //  Valores en metros, se convierten en centimetros

    double ProGaugeVolumen = 0;
    double ProGaugeNivel = 0;
    double ProGaugeTemperatura = 0;
    double ProGaugeAgua = 0;
    double ProGaugeCapacidad = 40001.0;
    double ProGaugeLongitud = 0;
    double ProGaugeDiametro = 3200;
    int    ProGaugeTankPorcent = 0;
    int Protocolo;

    QRect *Q;
    double Xp= 1366;
    double yp= 768;
    double pi = 3.1416;
    explicit Tanque(QWidget *parent,bool config);
    void funcionActivacionTimer();
    QString Value(double c ,double a);
    //  double volumen(double alturaAgua,double AlturaCombustible, int tipo);
    QString Temp1(double T);

    int Niv();
    int NivA();

    void SetVolumen(double c, double a);
    double GetVolumen();

    double SetAltura(double height);
    double GetAltura();

    void SetLimSup(double L);
    double GetLimSup();

    void SetTemperatura(double T);
    double GetTemperatura();

    void SetNivAgua();
    void GetNivAgua();

    void Setgeometry(int x, int y,int XTG,int YTG);
    void color(QString Ct1,bool A);
    QString GetColor();
    void SetnameTank(const QString &SNT);
    QString GetNameTank();
    void inicbuff1();
    double volumen(int Tipo,double height);

    void Delate();

    void SetVolMax(double vol);
    double GetVolMax();

    void SetProducto_Alto(double producto_alto);
    double GetProducto_Alto();

    void SetDesvordamiento(double desboramiento);
    double GetDesbordamiento();


    void SetNecesitaProducto(double necesita_producto);
    double GetNecesitaProducto();

    void SetProductoBajo(double producto_bajo);
    double GetProducto();


    void SetAlarma_de_Agua(double alarma_agua);
    double GetAlarma_de_Agua();

    void SetAdvertencua_de_Agua(double advetencia_agua);
    double GetAdvertencia_de_Agua();

    void SetTankDiametro(double Diametro);
    double GetTankDiametro();

    void SetTankAltura(double Altura);
    double GetTanqueAltura();

    void SetTankLargo(double Largo);
    double GetTankLargo();

   void SetTankAncho(double Ancho);
   double GetTankAncho();


   QString getID() const;
   void setID(const QString &value);

   double getTankTiempoEntrega() const;
   void setTankTiempoEntrega(double value);

   double getTankMinimoEntrega() const;
   void setTankMinimoEntrega(double value);

   int getTipo() const;
   void setTipo(int value);
   int getProtocolo() const;
   void setProtocolo(int value);
   QString getA() const;
   void setA(const QString &value);
   bool getTMaximizado() const;
   void setTMaximizado(bool value);

   double  Volume(double a, double x, double h0, double R);


   void offline();
};

#endif // TANQUE_H
