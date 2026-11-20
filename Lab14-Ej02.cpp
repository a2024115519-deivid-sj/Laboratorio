/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

const int CAPACIDAD_MAXIMA = 50;

int pedirCantidadPreguntas();
string limpiarYValidarPregunta(int numeroPregunta);
bool tieneEspaciosInnecesarios(string texto);
void registrarPreguntas(string preguntas[], int n);
void mostrarPreguntas(const string preguntas[], int n);


int main() {
    
    string preguntas[CAPACIDAD_MAXIMA];
    int n = pedirCantidadPreguntas();

    registrarPreguntas(preguntas, n);

    mostrarPreguntas(preguntas, n);    
 
    
    return 0;
}


int pedirCantidadPreguntas() {
    int cant;
    do {
        cout << "Ingrese la cantidad de preguntas: ";
        cin >> cant;
        if (cant < 1 || cant > CAPACIDAD_MAXIMA) {
            cout << "[Error] Ingrese una cantidad entre 1 y " << CAPACIDAD_MAXIMA << "." << endl;
        }
    } while (cant < 1 || cant > CAPACIDAD_MAXIMA);
    
    // Limpia el búfer de cin para permitir lecturas posteriores con getline
    cin.ignore();
    return cant;
}

bool tieneEspaciosInnecesarios(string texto) {
    if (texto.empty()) return false;
    
    // Verifica espacio al inicio
    if (texto.at(0) == ' ') return true;
    
    // Verifica espacio al final
    if (texto.at(texto.length() - 1) == ' ') return true;
    
    return false;
}

string limpiarYValidarPregunta(int numeroPregunta) {
    string texto;
    bool valida = false;

    do {
        cout << "Pregunta " << numeroPregunta << ": ";
        getline(cin, texto);

        // Validaciones requeridas
        if (texto.length() == 0 || texto.empty()) {
            cout << "  [Error] La pregunta no puede estar vacia. Intente de nuevo." << endl;
        } else if (tieneEspaciosInnecesarios(texto)) {
            cout << "  [Error] La pregunta contiene espacios innecesarios al inicio o al final. Intente de nuevo." << endl;
        } else {
            valida = true;
        }
    } while (!valida);

    return texto;
}

void registrarPreguntas(string preguntas[], int n) {
    cout << endl;
    for (int i = 0; i < n; i++) {
        preguntas[i] = limpiarYValidarPregunta(i + 1);
    }
}

void mostrarPreguntas(const string preguntas[], int n) {
    cout << endl << "===== PREGUNTAS REGISTRADAS =====" << endl;
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ". " << preguntas[i] << endl;
    }
    cout << "=================================" << endl;
}
