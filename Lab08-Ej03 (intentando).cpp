/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Utilizamos "void" cuando no devolvemos un valor...un número? Hm...
#include <iostream>
using namespace std;

double ventasdiarias(double v);

int main()
{
    int dias = 0;
    double v;
    
    do {
        cout << "Ingrese las ventas diarias obtenidas: "; // creo que es perfecto porque ¿cómo podria hacer que repita varias veces si es que pone negativo esa venta si...ni siquiera aún ha puesto un valor?... Puse do while porque te permite poner el valor primero y luego recién ve si cumple la condición, y ya funciona como creo un while donde dejará de repetir si no cumple la condición (aunque creo que lo correcto sería decir es que no lee la condicion al principio y luego ya lo lee) ...Bueno aún no analicé al 100% o probé porque no usaría "while" o "for" 
        cin >> ventas;
    } while (ventas < 0);

    for (int i=0; i<=v ; i=i+1 ) { // lo que pensaba poner es
        
    
        
    dias = dias + 1;
    }



>1000 alta
>2000 excelente


    return 0;
}

double ventasdiarias(double v) {
    
}