#include "tanque.h"
#include <QTimer>
#include <QObject>
#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>
#include <QtDebug>
#include <QtMath>
#include <QToolButton>
#include <QTabWidget>


QString Tanque::getID() const { return ID; }

void Tanque::setID(const QString &value) { ID = value; }

double Tanque::getTankTiempoEntrega() const { return TankTiempoEntrega; }

void Tanque::setTankTiempoEntrega(double value) { TankTiempoEntrega = value; }

double Tanque::getTankMinimoEntrega() const { return TankMinimoEntrega; }

void Tanque::setTankMinimoEntrega(double value) { TankMinimoEntrega = value; }

int Tanque::getTipo() const { return Tipo; }

void Tanque::setTipo(int value) { Tipo = value; }

int Tanque::getProtocolo() const { return Protocolo; }

void Tanque::setProtocolo(int value) { Protocolo = value; }

bool Tanque::getTMaximizado() const { return TMaximizado; }

void Tanque::setTMaximizado(bool value) { TMaximizado = value; }




void Tanque::offline()
{
     latanq->setStyleSheet("background-color:lightgray;");
     latanq->setText("Sin Conexion");

}

void Tanque::clickbuton(){ setTMaximizado(true); emit Camino(); }

Tanque::Tanque(QWidget *parent,bool config) : QWidget(parent)
{
    Config = config;

 if(config){

     T1 = new QGroupBox(parent);
     Boton = new QPushButton (T1);
    // TituloTank = new QLabel(Boton);
     layoutWidget1 = new QWidget(Boton);
     Volumen = new QLabel(layoutWidget1);
     Altura = new QLabel(layoutWidget1);
     groupBox_4 = new QGroupBox(Boton);
     Ltemp = new QLabel(groupBox_4);
     latanq = new QLabel(groupBox_4);


      QFont font3;
      font3.setPointSize(18);
      QFont font2;
      font3.setPointSize(15);
      QFont font1;
      font2.setPointSize(15);

      T1->setObjectName(QString::fromUtf8("T1"));
      T1->setEnabled(true);
      T1->setGeometry(QRect(0,20, 561, 300));
      T1->setFont(font3);
      T1->setTitle("Tanque");
      T1->setFlat(true);

      Boton->setGeometry(0,0,560,299);
      Boton->setStyleSheet("QPushButton{background-color: rgb(240, 240, 240);border: 3px solid white; border-radius: 15px; padding: 5px;  }" );

      connect(Boton, SIGNAL (clicked()),this, SLOT(clickbuton()));

      layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
      layoutWidget1->setGeometry(QRect(310, 20, 231, 253));

     horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
     verticalLayout_2 = new QVBoxLayout();
     Temp = new QLabel(layoutWidget1);
     verticalLayout = new QVBoxLayout();
     Lim_Sup = new QLabel(layoutWidget1);
     VolVal = new QLabel(layoutWidget1);
     AltVal = new QLabel(layoutWidget1);
     TmpVal = new QLabel(layoutWidget1);
     NivAgua = new QLabel(layoutWidget1);
     LsVal = new QLabel(layoutWidget1);
     NivAVal = new QLabel(layoutWidget1);

     horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
     horizontalLayout_3->setContentsMargins(0, 0, 0, 0);

     verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

     Volumen->setObjectName(QString::fromUtf8("Volumen"));
     Volumen->setEnabled(true);
     Volumen->setFont(font2);
     Volumen->setText("Volumen");
     Volumen->setStyleSheet("QLabel{ background-color: rgb(230, 230, 230); }");

     verticalLayout_2->addWidget(Volumen);

     Altura->setObjectName(QString::fromUtf8("Altura"));
     Altura->setFont(font2);
     Altura->setText("Altura");
     Altura->setStyleSheet("QLabel{ background-color: rgb(210, 210, 210); }");

     verticalLayout_2->addWidget(Altura);

     Lim_Sup->setObjectName(QString::fromUtf8("Lim_Sup"));
     Lim_Sup->setFont(font2);
     Lim_Sup->setText("Limite Superior");
     Lim_Sup->setStyleSheet("QLabel{ background-color: rgb(230, 230, 230); }");

     verticalLayout_2->addWidget(Lim_Sup);

     Temp->setObjectName(QString::fromUtf8("Temp"));
     Temp->setFont(font2);
     Temp->setText("Temperatura");
     verticalLayout_2->addWidget(Temp);
     Temp->setStyleSheet("QLabel{ background-color: rgb(210, 210, 210); }");

     NivAgua->setObjectName(QString::fromUtf8("NivAgua"));
     NivAgua->setFont(font2);
     NivAgua->setText("Nivel del Agua");
     NivAgua->setStyleSheet("QLabel{ background-color: rgb(230, 230, 230); }");

     verticalLayout_2->addWidget(NivAgua);

     horizontalLayout_3->addLayout(verticalLayout_2);
     verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

     VolVal->setObjectName(QString::fromUtf8("VolVal"));
     VolVal->setFont(font2);
     VolVal->setText("000");
     VolVal->setStyleSheet("QLabel{ background-color: rgb(230, 230, 230); }");

     verticalLayout->addWidget(VolVal);
     AltVal->setObjectName(QString::fromUtf8("AltVal"));
     AltVal->setFont(font2);
     AltVal->setText("0000");
     AltVal->setStyleSheet("QLabel{ background-color: rgb(210, 210, 210); }");

     verticalLayout->addWidget(AltVal);

     LsVal->setObjectName(QString::fromUtf8("LsVal"));
     LsVal->setFont(font2);
     LsVal->setText("000");
     LsVal->setStyleSheet("QLabel{ background-color: rgb(230, 230, 230); }");

     verticalLayout->addWidget(LsVal);
     TmpVal->setObjectName(QString::fromUtf8("TmpVal"));
     TmpVal->setFont(font2);
     TmpVal->setText("000");
     TmpVal->setStyleSheet("QLabel{ background-color: rgb(210, 210, 210); }");

     verticalLayout->addWidget(TmpVal);
     NivAVal->setObjectName(QString::fromUtf8("NivAVal"));
     NivAVal->setFont(font2);
     NivAVal->setText("000");
     NivAVal->setStyleSheet("QLabel{ background-color: rgb(230, 230, 230); }");

     verticalLayout->addWidget(NivAVal);
     horizontalLayout_3->addLayout(verticalLayout);

 }
 else
 {

     T1 = new QGroupBox(parent);
    // Tab = new QTabWidget(Tab);
     layoutWidget1 = new QWidget(T1);
     Volumen = new QLabel(layoutWidget1);
     Altura = new QLabel(layoutWidget1);
     groupBox_4 = new QGroupBox(T1);
  //   Ltemp = new QLabel(groupBox_4);
     latanq = new QLabel(groupBox_4);

      QFont font3;
      font3.setPointSize(18);
      QFont font2;
      font3.setPointSize(15);
      QFont font1;
      font2.setPointSize(15);

      T1->setObjectName(QString::fromUtf8("T1"));
      T1->setEnabled(true);
      T1->setGeometry(QRect(0,40, 561, 281));
      T1->setFont(font3);
      T1->setTitle("Tanque");

      T1->setFlat(true);
      T1->setChecked(false);

      layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
      layoutWidget1->setGeometry(QRect(0, 5, 231, 253));
      QFont font4;
      font4.setPointSize(25);

 }

     groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
     groupBox_4->setGeometry(QRect(10, 20, 200, 180));
     groupBox_4->setStyleSheet(QString::fromUtf8("border: 0px"));

     latanq->setObjectName(QString::fromUtf8("latanq"));
     latanq->setEnabled(true);
     latanq->setGeometry(QRect(40, 30, 201, 201));

    styleSheetTank =
            "font: 16pt \"Broadway\";"
            "color: black;"
            // " border-width: 5px;"
            "border: 8px solid;"
            "border-color: rgb(165, 165, 165);"
            "border-style: solid;"
            "border-radius: 130px;"
            "background-color:"
            "qlineargradient(spread:pad,"
            "x1:0, y1:0, x2:0, y2:1,"
            "stop:0 "+ Color1 +" ,"
            "stop:"+C +" "+ Color1 + " ,"
            "stop:"+D+" "+ Color2 + " ,"
            "stop: "+E+" "+ Color2 + " ,"
            "stop: "+F+" "+ Color3 + " ,"
            "stop:1 "+" "+ Color3 +" );";

     latanq->setStyleSheet(styleSheetTank);

     latanq->setAlignment(Qt::AlignCenter);
     latanq->setText("Sin Conexion");
     QFont A;
     A.setPointSize(35);
     latanq->setFont(A);

     latanq->raise();


 }


 double Tanque::SetAltura(double height)
 {
     double r=0;
     double h=0;
     double res=0;
     //double K= 0;
     double ho= 0;
     double a = 0;
     double angle = 0;
     double tana = 0;
     double frombase = 500;
     double from= 0;
     double level = height;
     double x = 0;
     double h1;
     double fullL = 0;
     double d = 0;
     double v = 0;
     bool Sup =true;


    AltVal->setText(QString::number(height,'f',2));
     AlturaTank = height;


     switch(Tipo)
     {
         case 0:
          qDebug() << "Cilindro vertical";
             r = TankDiametro / 2;
             h = height;
            // res = (pi * (r * r) * h) / 1000;
             Capacidad = (pi*((TankDiametro/2)*(TankDiametro/2)*Tankaltura))/1000000;
           res = (pi * (r * r) * h) / 1000000;
             VolVal->setText(QString::number(res,'f',2) +" Lt");
             break;
         case 1:
         qDebug() << "Cilindro Horizontal";
             r = TankDiametro / 2;
             Tankaltura = TankDiametro;
             h = height;
             qDebug () << "Radio:" << r;
             qDebug() << "Altura" << Tankaltura;
             qDebug() << "Diametro:" << TankDiametro;
             qDebug() << "Largo:" << Tanklargo;
            Capacidad = ((((r * r) * (qAcos((r -Tankaltura ) / r ))) - ((r - Tankaltura) * (qSqrt((TankDiametro * Tankaltura) - (Tankaltura * Tankaltura))))) * Tanklargo) / 1000000;
             //qDebug() << "Capacidad:" << Capacidad;
             res = ((((r * r) * (qAcos((r - h) / r ))) - ((r - h) * (qSqrt((TankDiametro * h) - (h * h))))) * Tanklargo) / 1000000;
//            ho = Tankaltura-h;

//           K =  1-(Tankaltura/r);

//              Capacidad = (qPow(r,3)/qTan( qRadiansToDegrees(15.0))) * (K * qAcos(K)-(1/3) *qSqrt((1-qPow(K,2)* (qPow(K,2)+2))) -(K-(Tanklargo/r)) + (1/3) *qSqrt(1-(K-qPow((Tanklargo/r),2)) * (qPow(K-(Tanklargo/r),2)+2)));
              d = TankDiametro;
             a = angle / 180 * M_PI;
             tana = qTan(a);
             from =  Sup ? frombase : Tanklargo - frombase;
             ho = level - tana * from;
             x = Tanklargo;
                            if (ho < 0) {
                                x += ho / tana;
                                ho = 0;
                            }
              h1 = tana * x + ho;

                            if (h1 > d) {
                                  fullL = (h1 - d) / tana;
                             if (fullL == -0.00) {
                                  fullL = 0;
                                                }
                                  x -= fullL;
                                  h1 = d;
                                            }

            if (a != 0.00) {
                    double v1 = Volume(a, x, ho, r);
                    double v2 = Volume(a, 0, ho, r);
                    v = v1 - v2 + fullL * M_PI * r * r;
                       }
            else {
                    double theta = 2 * qAcos((r - ho) / r);
                    v = r * r / 2 * (theta - qSin(theta)) * x;
                      }
             
           qDebug () <<  "Volumen con Formula de pagina" << v/ 1000000;
           qDebug () << "Volumen con Formula del jefe" << res;


             VolVal->setText(QString::number(res,'f',2)+" Lt");
            // qDebug() << (ProGaugeCapacidad / (((r * r) * (qAcos((r - h) / r ))) - ((r - h) * (qSqrt((ProGaugeDiametro * h) - (h * h)))))) * 1000000;
             break;
         case 2:

          qDebug() << "Rctangular";
             h = height;
             Capacidad = Tanklargo *Tankancho *Tankaltura /1000000;
             res = Tanklargo * Tankancho * h / 1000000;
              VolVal->setText(QString::number(res,'f',2)+" Lt");
             break;
//         case 3:
//             h = tmpFuelLevel.toFloat() / 1000;
//             for(byte i = 0; i < maxPoint; i++){
//                 if(h <= pointLevel[i]){
//                     maxPointLevel = pointLevel[i];
//                     maxPointVolume = pointVolume[i];
//                     break;
//                 }
//                 if(i == (maxPoint - 1)){
//                     maxPointLevel = pointLevel[i];
//                     maxPointVolume = pointVolume[i];
//                     h = maxPointLevel;
//                 }
//             }
//             fuelVolume = maxPointLevel > 0.0 ? strX(6, String(int((h / maxPointLevel) * maxPointVolume)), 0, '0') : "000000";
//             //Serial.println(fuelVolume);
//             break;
         return res;


           }
     SetVolumen(res,100);
 }

 double Tanque::Volume(double a, double x, double h0, double R) {

                  double u = (R - qTan(a) * x - h0) / R;

                  if (u > 1) u = 1; else if (u < -1) u = -1; //precision error

                  return -R * R * R * (u * qAcos(u) - qSqrt(1 - u * u) * (u * u + 2) / 3) / qTan(a);
              }

QString Tanque::Temp1( double T)
{
    double d=0;

    T=(109-T)/100;
    d= T+0.01;

    QString t= t.number(T);
    QString D= D.number(d);

}


void Tanque::SetVolumen(double c ,double a)
{
    VolumenA = a;
    VolumenCon=c;

    double d=0;
    double b=0;
    double CD;

    c=(Capacidad-c)/Capacidad;
    if (c<0)
        c=0;
    if (c>a)
        c=0.99-a;
    a=(Capacidad-a)/Capacidad;

    d= c+0.01;
    b=a+0.01;

     C= C.number(c);
     D= D.number(d);
     E = E.number(a);
     F= F.number(b);


    styleSheetTank =
            "font: 30pt \"Bold\";"
            "color: black;"
            // " border-width: 5px;"
            "border: 8px solid;"
            "border-color: rgb(165, 165, 165);"
            "border-style: solid;"
            "border-radius: "+R+"px;"
            "background-color:"
            "qlineargradient(spread:pad,"
            "x1:0, y1:0, x2:0, y2:1,"
            "stop:0 rgba(255, 255, 255, 255),"
            "stop:"+C+" rgba(255, 255, 255, 255),"
            "stop:"+D+"  "+Color2+","
            "stop: "+E+" "+Color2+","
            "stop: "+F+" rgb(0, 0, 255),"
            "stop:1 rgb(0, 0, 255))";

        latanq->setStyleSheet(styleSheetTank);

    CD= double (c);
    niv = int((1.001-CD) *100);
    latanq->setText(QString::number(niv)+ "%");

}

int Tanque::Niv() { return niv; }

int Tanque::NivA() { return nivA; }

double Tanque::GetVolumen() { return VolumenCon; }

double Tanque::GetAltura() { return AlturaTank; }

void Tanque::SetLimSup(double L) { LimSup= L; LsVal->setText(QString::number(LimSup));}

double Tanque::GetLimSup() { return LimSup; }

void Tanque::SetTemperatura(double T)
{
    Temperatura = T;
   TmpVal->setText(QString::number(T));

   double d=0;

   T=(109-T)/100;
   d= T+0.01;

   QString t= t.number(T);
   QString U= U.number(d);

}

void Tanque::Delate()
{
    T1->deleteLater();
    layoutWidget1->deleteLater();
    Volumen->deleteLater();
    Altura->deleteLater();
    groupBox_4->deleteLater();
    Ltemp->deleteLater();
    latanq->deleteLater();
    bool config = false;
    if (config)
    {
    horizontalLayout_3->deleteLater();
    verticalLayout_2->deleteLater();
    Temp->deleteLater();
    verticalLayout->deleteLater();
    Lim_Sup->deleteLater();
    VolVal->deleteLater();
    AltVal->deleteLater();
    TmpVal->deleteLater();
    NivAgua->deleteLater();
    LsVal->deleteLater();
    NivAVal->deleteLater();
    //BT1->deleteLater();
    }

}

void Tanque::SetVolMax(double vol) { VolMax = vol; }

double Tanque::GetVolMax() { return VolMax; }

void Tanque::SetProducto_Alto(double producto_alto) { ProductoAlto = producto_alto; }

double Tanque::GetProducto_Alto() { return ProductoAlto; }

void Tanque::SetDesvordamiento(double desboramiento) { DesbordamientoP = desboramiento;}

double Tanque::GetDesbordamiento() { return DesbordamientoP; }

void Tanque::SetNecesitaProducto(double necesita_producto) { NecesitaProducto = necesita_producto; }

double Tanque::GetNecesitaProducto() { return NecesitaProducto; }

void Tanque::SetProductoBajo(double producto_bajo) { ProductoBajo = producto_bajo; }

double Tanque::GetProducto() { return ProductoBajo; }

void Tanque::SetAlarma_de_Agua(double alarma_agua) { Alarma_de_Agua = alarma_agua; }

double Tanque::GetAlarma_de_Agua() { return Alarma_de_Agua; }

void Tanque::SetAdvertencua_de_Agua(double advetencia_agua) {Advertencia_de_Agua = advetencia_agua; }

double Tanque::GetAdvertencia_de_Agua() { return Advertencia_de_Agua; }

void Tanque::SetTankDiametro(double Diametro) { TankDiametro = Diametro; }

double Tanque::GetTankDiametro() { return TankDiametro; }

void Tanque::SetTankAltura(double Altura) { Tankaltura = Altura; }

double Tanque::GetTanqueAltura() { return Tankaltura; }

void Tanque::SetTankLargo(double Largo) { Tanklargo = Largo; }

double Tanque::GetTankLargo() { return Tanklargo; }

void Tanque::SetTankAncho(double Ancho){ Tankancho = Ancho; }

double Tanque::GetTankAncho(){ return Tankancho; }

double Tanque::GetTemperatura(){ return Temperatura;}

void Tanque::SetNivAgua() { }

void Tanque::GetNivAgua() { }

void Tanque::Setgeometry(int x, int y,int XTG,int YTG)
{
    PosX= x;
    PosY= y;
    PosBX= x+560;
    posBY= y+45;
    int x1 = (YTG*380)/500;
     int r = (250*x1)/500;
      R = QString::number(r);
     int rt= (520*x1)/1000;
      RT = QString::number(rt);

    int x2= x1+21;
    T1->setGeometry(QRect(x,y,XTG, YTG));

    if(Config)
    {
     QFont font5;
     font5.setPointSize(int(XTG*.03));
     Boton->setGeometry(QRect(0,27,XTG,int(YTG*.8)));
     latanq->setGeometry(QRect(5, 5, x1, x1));
     layoutWidget1->setGeometry(QRect(XTG/2, 20,int((XTG/2)*.95),int(YTG*.7)));
     layoutWidget1->setFont(font5);
     Volumen->setFont(font5);
     Temp->setFont(font5);
     Altura->setFont(font5);
     Lim_Sup->setFont(font5);
     VolVal->setFont(font5);
     AltVal->setFont(font5);
     TmpVal->setFont(font5);
     NivAgua->setFont(font5);
     LsVal->setFont(font5);
     NivAVal->setFont(font5);
     latanq->setFont(font5);

    latanq->setStyleSheet(
            // "font: 40pt \"Broadway\";"
             "color: black;"
             // " border-width: 5px;"
             "border-style: solid;"
             "border: 8px solid;"
             "border-color: rgb(165, 165, 165);"
             "border-radius: "+R+"px;"
             "background-color:"
             "qlineargradient(spread:pad,"
             "x1:0, y1:0, x2:0, y2:1,"
             "stop:0 rgba(255, 255, 255, 255),"
             "stop:"+C+" rgba(255, 255, 255, 255),"
             "stop:"+D+" rgb(255, 255, 0),"
             "stop: "+E+" rgb(255, 255, 0),"
             "stop: "+F+" rgb(0, 0, 255),"
             "stop:1 rgb(0, 0, 255))");
    groupBox_4->setGeometry(QRect(10, 2, x2+x2,x2+x2));

    }
    else
    {

    latanq->setGeometry(QRect(5, 5, x1, x1));

   latanq->setStyleSheet(
           // "font: 40pt \"Broadway\";"
            "color: black;"
            // " border-width: 5px;"
            "border-style: solid;"
            "border: 8px solid;"
            "border-color: rgb(165, 165, 165);"
            "border-radius: "+ R +"px;"
            "background-color:"
            "qlineargradient(spread:pad,"
            "x1:0, y1:0, x2:0, y2:1,"
            "stop:0 rgba(255, 255, 255, 255),"
            "stop:"+C+" rgba(255, 255, 255, 255),"
            "stop:"+D+" rgb(255, 255, 0),"
            "stop: "+E+" rgb(255, 255, 0),"
            "stop: "+F+" rgb(0, 0, 255),"
            "stop:1 rgb(0, 0, 255))");
   groupBox_4->setGeometry(QRect(10, 20, x2+x2,x2+x2));
                          }

}

void Tanque::color(QString Ct1,bool A)
{
    Color2 = Ct1;

    styleSheetTank =
            "font: 16pt \"Broadway\";"
            "color: green;"
            // " border-width: 5px;"
            "border-style: solid;"
            "border: 8px solid;"
            "border-color: rgb(165, 165, 165);"
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
        latanq->setStyleSheet(styleSheetTank);

}

QString Tanque::GetColor() { return Color2; }

void Tanque::SetnameTank(const QString &SNT) {T1->setTitle(SNT); NomTank = SNT; }

QString Tanque::GetNameTank(){ return NomTank; }
