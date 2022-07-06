#ifndef PYE_H
#define PYE_H

#include <QDialog>
#include<QTableView>
#include<QtCharts>


namespace Ui {
class pye;
}

class QTableWidget;

class pye : public QDialog
{
    Q_OBJECT

public:
    explicit pye(QWidget *parent = nullptr);
    ~pye();
    void PasarDatos(QTableWidget *d);
    void PasarDatos(QTableWidget *a,QTableWidget *b);
    void Histograma();
    void Distribucion();
    void Shell();
    long Factorial(int);
    void GraficaPastel(int);
    void GraficaBarras(int);
    void GraficaLineal(int);
    void A_con_B();
private slots:
    void on_guardar_clicked();
    void on_tabWidget_tabBarClicked(int index);
    void on_ventanas_tabBarClicked(int index);
    void on_MasZoom_clicked();

    void on_ZoomOriginal_clicked();

    void on_MenosZoom_clicked();


private:
    Ui::pye *ui;
    int f,c,x = 0;
    double **datos;
    double **b;
    QVector<double> s,aux,l;
    QVector<double> sb,auxb,lb;
    double max,min;
    bool HoV = true;
    QChart *chart = new QChart();
};

#endif // PYE_H
