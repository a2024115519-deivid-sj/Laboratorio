/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int BuscarSubCadena(string a, string b);

int main() {
    
    string subcad = "oool";
    string cad = "hooola";
    int pos = BuscarSubCadena(subcad, cad);
    
    cout << "Buscando \"" << subcad << "\" dentro de \"" << cad << "\"... " << endl;
    cout << "Entrada : BuscarSubCadena(\"" << subcad << "\", \"" << cad << "\")" << endl;
    cout << "Salida  : " << pos << endl;
    if (pos != -1) {
        cout << "-> Subcadena encontrada a partir del indice " << pos << endl;
    } else {
        cout << "-> Subcadena NO encontrada." << endl;
    }
    cout << "---------------------------------------------------------" << endl << endl;
 
    
    return 0;
}

int BuscarSubCadena(string a, string b) {
    size_t posicion = b.find(a);
    
    if (posicion != string::npos) {
        return (int)posicion;
    }
    return -1;
}
