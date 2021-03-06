#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QGroupBox>
#include <QLineEdit>
#include <QValidator>
#include <QLabel>
#include <QEvent>
#include <QKeyEvent>
#include <QMessageBox>
#include <QDebug>

#define btnX 50
#define btnY 35
#define btnXesp 5
#define btnYesp 5

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);

    ~Dialog();
    int getTypekeyboar() const;
    void setTypekeyboar(int value);

    bool getShift() const;
    void setShift(bool value);

    QString getDatos() const;
    void setDatos(const QString &value);
    void validador(int index, int bottom, int top,int dec);
    void maskarator(int index,QString mask);



    void set_etiqueta(QString lb);


//protected:
//    bool eventFilter(QObject *obj, QEvent *event) override;

    bool getIsvalidator() const;
    void setIsvalidator(bool value);

    int getVal_index() const;
    void setVal_index(int value);

public slots:
    void btn_setText();
    void btn_setNum();
    void btn_char();
    void btn_SHIFT();
    void btn_ENTER();
    void btn_num();
    void btn_exit();
    void btn_SPACE();
    void btn_bks();

    void data_out();
private slots:

private:
    Ui::Dialog *ui;
    QPushButton *btn[38];
    QGroupBox *grupo;
    QLineEdit *line;
    int typekeyboar = 1;
    bool shift = false;
    QString datos;
    QString rango;

    QString  mask;
    QLabel *label;

    bool isvalidator = true;
    int val_index;
    QValidator *v_int;
    QValidator *v_dou;
};

#endif // DIALOG_H
