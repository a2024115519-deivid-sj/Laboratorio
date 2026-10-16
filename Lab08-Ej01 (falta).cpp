/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

double promedio(double p);

int main()
{
    double cantidad,notas,promedio;
    
    do {
        cout << "¿Cuántos parciales ha tenido?";
        cin >> cantidad;
    } while (cantidad > 0 && cantidad <= 3);
    
    for (int i=0; i<=cantidad; i=i+1) { //llegará a i=3 pero solo quiero que pregunte 3 veces o la cantidad de evaluaciones que ha hecho...creo que algo ahi anda mal
        cout << "Ingrese su nota de los parciales que ha tenido: ";
        cin >> notas;
        
    }
    
    prom = promedio (valor);
    
    cout <<"El promedio de su notas es: " << prom;
    
    return 0;
}

double promedio(double p) {
    double e;
    p = notas/e; // e = cantidadevaluaciones
    return p;
}