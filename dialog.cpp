#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);


    grupo =new QGroupBox(this);
    grupo->setGeometry(10,90,600,165);
    label = new QLabel(this);
    label->setGeometry(180,10,300,20);
   // label->setText("Ingrese un numero en el rango de");
    line = new QLineEdit(this);
    line->setGeometry(180,40,220,25);
    line->setFocus();

  //  line->installEventFilter(this);


    for(int i = 0; i <= 10;i++)
   {
      btn[i] = new QPushButton(grupo);
      btn[i]->setGeometry((i *(btnX+btnXesp)),(0*(btnY+btnYesp)),btnX,btnY);
   }
    for(int i = 0; i <= 8 ;i++)
   {
      btn[i+11] = new QPushButton(grupo);
      btn[i+11]->setGeometry(20+(i *(btnX+btnXesp)),(1*(btnY+btnYesp)),btnX,btnY);
   }

      btn[20] = new QPushButton(grupo);
      btn[20]->setGeometry(20+(9 *(btnX+btnXesp)),(1*(btnY+btnYesp)),btnX+35,btnY);
    for(int i = 0; i <= 10;i++)
   {
      btn[i+21] = new QPushButton(grupo);
      btn[i+21]->setGeometry((i *(btnX+btnXesp)),(2*(btnY+btnYesp)),btnX,btnY);
   }

    btn[32] = new QPushButton(grupo);
    btn[32]->setGeometry(( 0*(btnX+btnXesp)),(3*(btnY+btnYesp)),btnX+25,btnY);
    btn[33] = new QPushButton(grupo);
    btn[33]->setGeometry(25+(1 *(btnX+btnXesp)),(3*(btnY+btnYesp)),btnX,btnY);
    btn[34] = new QPushButton(grupo);
    btn[34]->setGeometry(25+(2 *(btnX+btnXesp)),(3*(btnY+btnYesp)),5*(btnX+btnXesp),btnY);
    btn[35] = new QPushButton(grupo);
    btn[35]->setGeometry(30+(7 *(btnX+btnXesp)),(3*(btnY+btnYesp)),btnX,btnY);
    btn[36] = new QPushButton(grupo);
    btn[36]->setGeometry(30+(8 *(btnX+btnXesp)),(3*(btnY+btnYesp)),btnX,btnY);
    btn[37] = new QPushButton(grupo);
    btn[37]->setGeometry(30+(9 *(btnX+btnXesp)),(3*(btnY+btnYesp)),btnX+25,btnY);
    btn_setText();


    connect(btn[0],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[1],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[2],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[3],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[4],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[5],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[6],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[7],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[8],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[9],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[11],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[12],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[13],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[14],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[15],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[16],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[17],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[18],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[19],&QPushButton::clicked,this,&Dialog::btn_char);

    connect(btn[22],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[23],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[24],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[25],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[26],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[27],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[28],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[29],&QPushButton::clicked,this,&Dialog::btn_char);
    connect(btn[30],&QPushButton::clicked,this,&Dialog::btn_char);

    connect(btn[10],&QPushButton::clicked,this,&Dialog::btn_bks);
    connect(btn[20],&QPushButton::clicked,this,&Dialog::btn_ENTER);
    connect(btn[21],&QPushButton::clicked,this,&Dialog::btn_SHIFT);
    connect(btn[31],&QPushButton::clicked,this,&Dialog::btn_SHIFT);
    connect(btn[32],&QPushButton::clicked,this,&Dialog::btn_num);
    connect(btn[34],&QPushButton::clicked,this,&Dialog::btn_SPACE);
    connect(btn[37],&QPushButton::clicked,this,&Dialog::btn_exit);

    connect(line,&QLineEdit::returnPressed,this,&Dialog::data_out);
    //line->setInputMask("999.999;_");
    for(int i = 0; i <= 37; i++)
    {
    btn[i]->setFocusPolicy(Qt::NoFocus);
    }
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::btn_setText()
{
    btn[0]->setText(getTypekeyboar() == 1 ? "Q":"q");
    btn[1]->setText(getTypekeyboar() == 1 ? "W":"w");
    btn[2]->setText(getTypekeyboar() == 1 ? "E":"e");
    btn[3]->setText(getTypekeyboar() == 1 ? "R":"r");
    btn[4]->setText(getTypekeyboar() == 1 ? "T":"t");
    btn[5]->setText(getTypekeyboar() == 1 ? "Y":"y");
    btn[6]->setText(getTypekeyboar() == 1 ? "U":"u");
    btn[7]->setText(getTypekeyboar() == 1 ? "I":"i");
    btn[8]->setText(getTypekeyboar() == 1 ? "O":"o");
    btn[9]->setText(getTypekeyboar() == 1 ? "P":"p");
    btn[10]->setText(getTypekeyboar() == 1 ? "←":"←");
    btn[11]->setText(getTypekeyboar() == 1 ? "A":"a");
    btn[12]->setText(getTypekeyboar() == 1 ? "S":"s");
    btn[13]->setText(getTypekeyboar() == 1 ? "D":"d");
    btn[14]->setText(getTypekeyboar() == 1 ? "F":"f");
    btn[15]->setText(getTypekeyboar() == 1 ? "G":"g");
    btn[16]->setText(getTypekeyboar() == 1 ? "H":"h");
    btn[17]->setText(getTypekeyboar() == 1 ? "J":"j");
    btn[18]->setText(getTypekeyboar() == 1 ? "K":"k");
    btn[19]->setText(getTypekeyboar() == 1 ? "L":"l");
    btn[20]->setText(getTypekeyboar() == 1 ? "Enter":"Enter");
    btn[21]->setText(getTypekeyboar() == 1 ? "SHIFT":"SHIFT");
    btn[22]->setText(getTypekeyboar() == 1 ? "Z":"z");
    btn[23]->setText(getTypekeyboar() == 1 ? "X":"x");
    btn[24]->setText(getTypekeyboar() == 1 ? "C":"c");
    btn[25]->setText(getTypekeyboar() == 1 ? "V":"v");
    btn[26]->setText(getTypekeyboar() == 1 ? "B":"b");
    btn[27]->setText(getTypekeyboar() == 1 ? "N":"n");
    btn[28]->setText(getTypekeyboar() == 1 ? "M":"m");
    btn[29]->setText(getTypekeyboar() == 1 ? ",":",");
    btn[30]->setText(getTypekeyboar() == 1 ? ".":".");
    btn[31]->setText(getTypekeyboar() == 1 ? "SHIFT":"SHIFT");
    btn[32]->setText(getTypekeyboar() == 1 ? "&123":"&123");
    btn[33]->setText(getTypekeyboar() == 1 ? "@":"@");
    btn[34]->setText(getTypekeyboar() == 1 ? "SPACE":"SPACE");
    btn[35]->setText(getTypekeyboar() == 1 ? "'":"'");
    btn[36]->setText(getTypekeyboar() == 1 ? "/":"/");
    btn[37]->setText(getTypekeyboar() == 1 ? "#":"#");

}

void Dialog::btn_setNum()
{
    btn[0]->setText(getTypekeyboar() == 1 ? "1":"~");
    btn[1]->setText(getTypekeyboar() == 1 ? "2":"");
    btn[2]->setText(getTypekeyboar() == 1 ? "3":"");
    btn[3]->setText(getTypekeyboar() == 1 ? "4":"/");
    btn[4]->setText(getTypekeyboar() == 1 ? "5":"x");
    btn[5]->setText(getTypekeyboar() == 1 ? "6":"");
    btn[6]->setText(getTypekeyboar() == 1 ? "7":"{");
    btn[7]->setText(getTypekeyboar() == 1 ? "8":"}");
    btn[8]->setText(getTypekeyboar() == 1 ? "9":"$");
    btn[9]->setText(getTypekeyboar() == 1 ? "0":"");
    btn[10]->setText(getTypekeyboar() == 1 ? "←":"←");
    btn[11]->setText(getTypekeyboar() == 1 ? "@":"a");
    btn[12]->setText(getTypekeyboar() == 1 ? "#":"");
    btn[13]->setText(getTypekeyboar() == 1 ? "%":"");
    btn[14]->setText(getTypekeyboar() == 1 ? "&":"");
    btn[15]->setText(getTypekeyboar() == 1 ? "*":"");
    btn[16]->setText(getTypekeyboar() == 1 ? "-":"");
    btn[17]->setText(getTypekeyboar() == 1 ? "+":"");
    btn[18]->setText(getTypekeyboar() == 1 ? "(":"");
    btn[19]->setText(getTypekeyboar() == 1 ? ")":"");
    btn[20]->setText(getTypekeyboar() == 1 ? "Enter":"Enter");
    btn[21]->setText(getTypekeyboar() == 1 ? "1/2":"2/2");
    btn[22]->setText(getTypekeyboar() == 1 ? "!":"");
    btn[23]->setText(getTypekeyboar() == 1 ? "''":"");
    btn[24]->setText(getTypekeyboar() == 1 ? "<":"");
    btn[25]->setText(getTypekeyboar() == 1 ? ">":"");
    btn[26]->setText(getTypekeyboar() == 1 ? "'":"");
    btn[27]->setText(getTypekeyboar() == 1 ? ":":"");
    btn[28]->setText(getTypekeyboar() == 1 ? ";":"");
    btn[29]->setText(getTypekeyboar() == 1 ? "/":"");
    btn[30]->setText(getTypekeyboar() == 1 ? "?":"");
    btn[31]->setText(getTypekeyboar() == 1 ? "1/2":"2/2");
    btn[32]->setText(getTypekeyboar() == 1 ? "ABC":"ABC");
    btn[33]->setText(getTypekeyboar() == 1 ? "@":"@");
    btn[34]->setText(getTypekeyboar() == 1 ? "SPACE":"SPACE");
    btn[35]->setText(getTypekeyboar() == 1 ? ".":"");
    btn[36]->setText(getTypekeyboar() == 1 ? ":)":":(");
    btn[37]->setText(getTypekeyboar() == 1 ? "#":"#");


}

void Dialog::btn_char()
{
    QPushButton *btn = qobject_cast<QPushButton*>(sender());
    if(!btn) return;
    line->insert(btn->text());
    line->setFocus();               // revisar los efectos del setfocus
                                    // porque deja activado el el focus en el btn[0]



}

void Dialog::btn_SHIFT()
{
    if(getTypekeyboar() == 1){
        setTypekeyboar(0);}
    else{
        setTypekeyboar(1);}

   getShift() == 1 ? btn_setText():btn_setNum();
}



void Dialog::btn_num()
{
    if(getShift() == true){
        setTypekeyboar(1);
        setShift(false);
        btn_setNum();
    }
      else{
        setTypekeyboar(1);
        setShift(true);
        btn_setText();
    }
}

void Dialog::btn_exit()
{
    reject();
}

void Dialog::btn_SPACE()
{
    line->insert(" ");
}

void Dialog::btn_bks()
{
    line->backspace();
}
// SLOT QUE SE EJECUTA CON LA SEÑAL RETURN PRESSED
void Dialog::data_out()
{
    setDatos(line->text());
    accept();
}

int Dialog::getVal_index() const
{
    return val_index;
}

void Dialog::setVal_index(int value)
{
    val_index = value;
}

bool Dialog::getIsvalidator() const
{
    return isvalidator;
}

void Dialog::setIsvalidator(bool value)
{
    isvalidator = value;
}



void Dialog::set_etiqueta(QString lb)
{
    label->setText(lb);
}





QString Dialog::getDatos() const
{
    return datos;
}

void Dialog::setDatos(const QString &value)
{
    datos = value;
}

// Con esta funcion asignamos la validacion por QVALIDATOR
void Dialog::validador(int index, int bottom, int top, int dec)
{
    setIsvalidator(true);

    switch (index) {
    case 0:
        setVal_index(index);
        line->setValidator(nullptr);
        break;
    case 1:
        setVal_index(index);
        v_int = new QIntValidator(bottom,top,this);
        line->setValidator(v_int);
        break;
    case 2:
        setVal_index(index);
       v_dou = new QDoubleValidator(bottom,top,dec,this);
       line->setValidator(v_dou);
        break;
    }
}

void Dialog::maskarator(int index, QString mask)
{
    setIsvalidator(false);
    qDebug() << mask;
    switch (index) {
    case 0:                // fecha 9999 99 99
        line->setInputMask(mask);
        break;
    case 1:               // ip  000 000 000 000
        line->setInputMask(mask);
        break;
    case 2:              //  mac hh hh hh hh hh hh
        line->setInputMask(mask);

        break;
    case 3:             //  telefono 99 99 99 99 99
        line->setInputMask(mask);
        line->setEchoMode(QLineEdit::Password);
        break;
    }
}

void Dialog::btn_ENTER()
{
    qDebug() << "btn enter";
    int i = 0;
    QString datos = line->text();
    if(getIsvalidator() == true)
    {
        switch (getVal_index())
        {
        case 0:
             qDebug() << "caso 0 aceptable";
            getDatos();
            break;
        case 1:
            if(v_int->validate(datos,i) == QValidator::Acceptable)
            {
                qDebug() << "caso 1 aceptable";

                data_out();
            }
            break;
        case 2:
            if(v_dou->validate(datos,i) == QValidator::Acceptable)
            {
                qDebug() << "caso 2 aceptable";
                data_out();
            }
            break;
        }
    }
    else
    {
         qDebug() << "validando mask";

        if(line->hasAcceptableInput() != false)
        {
         qDebug() << "has acceptable input";
         data_out();
        }
        else qDebug() << line->hasAcceptableInput();
    }

}

bool Dialog::getShift() const
{
    return shift;
}

void Dialog::setShift(bool value)
{
    shift = value;
}

int Dialog::getTypekeyboar() const
{
    return typekeyboar;
}

void Dialog::setTypekeyboar(int value)
{
    typekeyboar = value;
}


