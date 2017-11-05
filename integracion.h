#ifndef INTEGRACION_H
#define INTEGRACION_H

#include <QMainWindow>

namespace Ui {
class Integracion;
}

class Integracion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Integracion(QWidget *parent = 0);
    ~Integracion();

private:
    Ui::Integracion *ui;
public slots:
    void metodo();  //Declaración de las funciones
    void borrar();
};

#endif // INTEGRACION_H
