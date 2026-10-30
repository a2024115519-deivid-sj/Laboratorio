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

void leerNumero(int &N);
void descomponerNumero(int N, int &u, int &d, int &c, int &m);
void mostrarDigitos(int u, int d, int c, int m);

int main() {
    int N, u, d, c, m;
    
    leerNumero(N);
    if (N >= 1 && N < 10000) {
        descomponerNumero(N, u, d, c, m);
        mostrarDigitos(u, d, c, m);
    }

    return 0;
}

void leerNumero(int &N) {
    do {
    cout << "Ingrese un numero entero positivo N (1 <= N < 10000): ";
    cin >> N;
    } while (N < 1 && N >= 10000);
}

void descomponerNumero(int N, int &u, int &d, int &c, int &m) {
    m = N / 1000;          // Unidades de mil
    c = (N % 1000) / 100;  // Centenas
    d = (N % 100) / 10;    // Decenas
    u = N % 10;            // Unidades
}

void mostrarDigitos(int u, int d, int c, int m) {
    cout << "Descomposicion del numero:" << endl;
    cout << "  Unidades de mil (m) : " << m << endl;
    cout << "  Centenas        (c) : " << c << endl;
    cout << "  Decenas         (d) : " << d << endl;
    cout << "  Unidades        (u) : " << u << endl;
}
