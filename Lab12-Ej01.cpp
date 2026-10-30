/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

void leerPeso(double &peso);
void calcularCosto(double peso, double &costo);
void mostrarResultadoCosto(double peso, double costo);

int main()
{
    double peso, costo;
    
    leerPeso(peso);
    calcularCosto(peso, costo);
    mostrarResultadoCosto(peso, costo);
    
    
    return 0;
}

void leerPeso(double &peso) {
    cout << "Ingrese el peso de la carta en gramos (g): ";
    cin >> peso;
}

void calcularCosto(double peso, double &costo) {
    if (peso <= 0) {
        costo = -1.0; // Peso invalido
    } else if (peso > 0 && peso < 50) {
        costo = 1.50;
    } else if (peso == 50) {
        costo = -2.0; // Tarifa no definida para 50g
    } else if (peso > 50 && peso <= 100) {
        costo = 4.00;
    } else if (peso > 100 && peso <= 200) {
        costo = 6.00;
    } else if (peso > 200 && peso <= 350) {
        costo = 10.50;
    } else if (peso > 350 && peso <= 500) {
        costo = 15.00;
    } else {
        costo = -3.0; // P > 500g
    }
}

void mostrarResultadoCosto(double peso, double costo) {
    cout << fixed << setprecision(2);
    if (costo == -1.0) {
        cout << "Mensaje: Peso no valido (P <= 0 g)." << endl;
    } else if (costo == -2.0) {
        cout << "Mensaje: Tarifa no definida para 50 g." << endl;
    } else if (costo == -3.0) {
        cout << "Mensaje: NO PUEDE ENVIAR COMO CARTA (Peso > 500 g)." << endl;
    } else {
        cout << "El costo de envio para " << peso << " g es: Bs " << costo << endl;
    }
}