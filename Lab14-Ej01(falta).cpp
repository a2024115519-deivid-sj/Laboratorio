/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

void BuscarSubCadena (string x, string y);

int main()
{
    
    //Diseñar una función llamada BuscarSubCadena que busque la primera aparición
    //de una subcadena a dentro de una cadena b y devuelva su posición o -1 si no está. Tanto a como b deben ser string.
    
    string a, b;
    
    cout << "a: ";
    getline (cin, nombre);
    
    //cout << "b: ";
    //cin >> b;
    
    //variable.find(variable.substr
    
    
    cout << "Palabra: " << a;
    
    cout << "Parte o subcadena: " << a.substr(1,3) << endl;
    
    //cout << "Primera posicion de esa parte o subcadena: " << b.find(a.substr);
    
    cout << "Primera posicion de esa parte o subcadena: " << a.find("v") << endl;
    
    
    
    /*string nombre;
    
    cout << "Nombre completo: ";
    getline (cin, nombre);
    
    //cout << "Cantidad de caracteres: " << nombre.length();
    cout << "Posicion de v : " << nombre.find("v") << endl;

    cout << "Una parte de la palabra desde v hasta 3 letras pa adelante: " << nombre.substr(3,3);
    */

    return 0;
}

void BuscarSubCadena (string x, string y) {
    
}
