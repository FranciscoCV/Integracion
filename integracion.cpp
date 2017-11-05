#include "integracion.h"
#include "ui_integracion.h"

Integracion::Integracion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Integracion)
{
    ui->setupUi(this);
    //Connections
    connect(ui->Calcular,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
}

Integracion::~Integracion()
{
    delete ui;
}
void Integracion::metodo(){
    //Declaration of variables to print results
    QString temp, temp1;
    //Variables in program
    double B[11];
    double H=ui->h->value();
    double integral=0, integralF0=0, integralFn=0;
    int i;
    //The data of the spingboxes are saved in a vector in order to implement the formula
    B[5]=ui->FX->value();
    B[1]=ui->FXme1->value();
    B[2]=ui->FXme2->value();
    B[3]=ui->FXme3->value();
    B[4]=ui->FXme4->value();
    B[0]=ui->FXme5->value();
    B[6]=ui->FXma1->value();
    B[7]=ui->FXma2->value();
    B[8]=ui->FXma3->value();
    B[9]=ui->FXma4->value();
    B[10]=ui->FXma5->value();
    //The formula is evaluated in the initial part and in the final part
    integralF0=(H/2)*B[0];
    integralFn=(H/2)*B[10];

    //The function is evaluated at its intermediate points
    for(i=1;i<10;i++){
        integral=integral+((H)*B[i]);
    }
    //The result of the initial point plus the final point with the intermediate points is added
    integral=integral+integralF0+integralFn;
    //The result is presented on the screen
    temp.append("Integral=").append(temp1.setNum(integral));
    ui->texto->setText(temp);
}
void Integracion::borrar(){
    ui->X->setValue(0.0);
    ui->Xme1->setValue(0.0);
    ui->Xme2->setValue(0.0);
    ui->Xme3->setValue(0.0);
    ui->Xme4->setValue(0.0);
    ui->Xme5->setValue(0.0);
    ui->Xma1->setValue(0.0);
    ui->Xma2->setValue(0.0);
    ui->Xma3->setValue(0.0);
    ui->Xma4->setValue(0.0);
    ui->Xma5->setValue(0.0);
    ui->FXme1->setValue(0.0);
    ui->FXme2->setValue(0.0);
    ui->FXme3->setValue(0.0);
    ui->FXme4->setValue(0.0);
    ui->FXme5->setValue(0.0);
    ui->FXma1->setValue(0.0);
    ui->FXma2->setValue(0.0);
    ui->FXma3->setValue(0.0);
    ui->FXma4->setValue(0.0);
    ui->FXma5->setValue(0.0);
    ui->FX->setValue(0.0);
    ui->h->setValue(0.0);
     ui->texto->clear();
}
