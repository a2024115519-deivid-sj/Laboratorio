/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void leerCoeficientes(double &a, double &b, double &c);
double calcularDiscriminante(double a, double b, double c);
void calcularRaices(double a, double b, double discriminante, double &x1, double &x2);
void mostrarResultadoCuadratica(double a, double discriminante, double x1, double x2);

int main()
{
    double a, b, c;
    leerCoeficientes(a, b, c);
    double disc = calcularDiscriminante(a, b, c);
    double x1 = 0, x2 = 0;

    if (a != 0 && disc >= 0) {
        calcularRaices(a, b, disc, x1, x2);
    }
    mostrarResultadoCuadratica(a, disc, x1, x2);
    
    
    return 0;
}

void leerCoeficientes(double &a, double &b, double &c) {
    cout << "Ingrese el coeficiente a: ";
    cin >> a;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;
}

double calcularDiscriminante(double a, double b, double c) {
    return (b * b) - (4.0 * a * c);
}

void calcularRaices(double a, double b, double discriminante, double &x1, double &x2) {
    if (discriminante == 0) {
        x1 = -b / (2.0 * a);
        x2 = x1;
    } else {
        x1 = (-b + sqrt(discriminante)) / (2.0 * a);
        x2 = (-b - sqrt(discriminante)) / (2.0 * a);
    }
}

void mostrarResultadoCuadratica(double a, double discriminante, double x1, double x2) {
    if (a == 0) {
        cout << "Error: La ecuacion no es cuadratica (a = 0)." << endl;
    } else if (discriminante < 0) {
        cout << "Discriminante (Delta) = " << discriminante << endl;
        cout << "Resultado: No existen soluciones reales (raices complejas)." << endl;
    } else if (discriminante == 0) {
        cout << "Discriminante (Delta) = " << discriminante << endl;
        cout << "Resultado: Existe una unica solucion real doble: x = " << x1 << endl;
    } else {
        cout << "Discriminante (Delta) = " << discriminante << endl;
        cout << "Resultado: Existen dos soluciones reales distintas:" << endl;
        cout << "  x1 = " << x1 << endl;
        cout << "  x2 = " << x2 << endl;
    }
}