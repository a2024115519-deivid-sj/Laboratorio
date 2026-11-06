/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int estudiante(int cant_estudiante);
float notas(float calificacion);



int main()
{
    
    

    return 0;
}


void Reporte() {
    int x = estudiante(cant_estudiante);
    
}

int estudiante(int cant_estudiante) {
    
    do {
        cout << "Coloque la cantidad de estudiantes que serán analizados (1-30): ";
        cin >> cant_estudiante;
    } while (cant_estudiante < 1 || cant_estudiante > 30);
    
}

float notas(float calificacion) {

    do {
        cout << "Ingrese la nota (0-100): ";
        cin >> calificacion;
    } while (calificacion < 0 || calificacion > 100);
}

void mostrarnumeroestudiante() {
    
    for (int i=0; i < 30; i++) {
        
    }
} /* o sea, claro la nota que pusiste primero, ese pues es del 1er estudiante y asi el que sigue es del 2do y así. Le entiendo que pide
eso la orden: 2. Mostrar: Presentar las notas indicando el número de estudiante (1, 2, 3, …). */
