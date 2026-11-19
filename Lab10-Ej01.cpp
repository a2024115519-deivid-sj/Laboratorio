#include <iostream>
#include <iomanip>

using namespace std;

// Capacidad máxima definida según el enunciado
const int CAPACIDAD_MAXIMA = 100;

// =========================================================
// 1. PROTOTIPOS
// =========================================================
int pedirCantidadEstudiantes();
void registrarNotas(int notas[], int n);
void mostrarNotas(const int notas[], int n);
double calcularPromedio(const int notas[], int n);
void obtenerMayorMenor(const int notas[], int n, int &mayor, int &menor);

// =========================================================
// 2. FUNCIÓN PRINCIPAL (main)
// =========================================================
int main() {
    int notas[CAPACIDAD_MAXIMA];
    int n = 0;

    cout << "=== UPSA - LABORATORIO N.º 10: REGISTRO Y PROMEDIO DE NOTAS ===" << endl << endl;

    // a. Lectura y validación de la cantidad de estudiantes (1 <= N <= 100)
    n = pedirCantidadEstudiantes();

    // b. Lectura y validación individual de las N notas (0 <= Nota <= 100)
    registrarNotas(notas, n);

    // c. Presentación de las notas ingresadas
    mostrarNotas(notas, n);

    // d. Cálculo y presentación del promedio general
    double promedio = calcularPromedio(notas, n);
    cout << fixed << setprecision(2);
    cout << "\nPromedio general: " << promedio << endl;

    // e. Obtención y presentación de nota mayor y menor
    int mayor, menor;
    obtenerMayorMenor(notas, n, mayor, menor);
    cout << "Nota mayor: " << mayor << endl;
    cout << "Nota menor: " << menor << endl;

    return 0;
}

// =========================================================
// 3. DEFINICIÓN DE LAS FUNCIONES
// =========================================================

// Solicita y valida N entre 1 y 100 (Caso de prueba D: N=0 o N=101 solicita de nuevo)
int pedirCantidadEstudiantes() {
    int cant;
    do {
        cout << "Ingrese la cantidad de estudiantes (1-100): ";
        cin >> cant;
        if (cant < 1 || cant > 100) {
            cout << "[Error] La cantidad de estudiantes debe estar entre 1 y 100. Intente nuevamente." << endl;
        }
    } while (cant < 1 || cant > 100);
    return cant;
}

// Registra N notas validando que cada una esté entre 0 y 100 (Caso E: -5 o 120 solicita de nuevo)
void registrarNotas(int notas[], int n) {
    cout << "\n--- INGRESO DE NOTAS ---" << endl;
    for (int i = 0; i < n; i++) {
        do {
            cout << "Nota estudiante " << (i + 1) << ": ";
            cin >> notas[i];
            if (notas[i] < 0 || notas[i] > 100) {
                cout << "[Error] Nota invalida. Debe estar entre 0 y 100. Ingrese nuevamente." << endl;
            }
        } while (notas[i] < 0 || notas[i] > 100);
    }
}

// Muestra todas las notas registradas en orden de ingreso
void mostrarNotas(const int notas[], int n) {
    cout << "\nNOTAS REGISTRADAS" << endl;
    for (int i = 0; i < n; i++) {
        cout << notas[i] << (i == n - 1 ? "" : "  ");
    }
    cout << endl;
}

// Suma los elementos del vector y calcula el promedio
double calcularPromedio(const int notas[], int n) {
    if (n <= 0) return 0.0;
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += notas[i];
    }
    return (double)suma / n;
}

// Compara los elementos del vector para obtener el mayor y el menor por referencia (&)
void obtenerMayorMenor(const int notas[], int n, int &mayor, int &menor) {
    mayor = notas[0];
    menor = notas[0];
    for (int i = 1; i < n; i++) {
        if (notas[i] > mayor) mayor = notas[i];
        if (notas[i] < menor) menor = notas[i];
    }
}
