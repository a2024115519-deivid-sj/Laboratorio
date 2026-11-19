/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

// Capacidad máxima del vector según el enunciado
const int CAPACIDAD_MAXIMA = 30;

// =========================================================
// 1. PROTOTIPOS
// =========================================================
int pedirCantidadEstudiantes();
void registrarCalificaciones(int notas[], int n);
void mostrarNotas(const int notas[], int n);
float calcularPromedio(const int notas[], int n);
void obtenerMayorMenor(const int notas[], int n, int &mayor, int &menor);
int contarAprobados(const int notas[], int n);
int buscarNota(const int notas[], int n, int notaBuscada);
void actualizarNota(int notas[], int n);

// =========================================================
// 2. FUNCIÓN PRINCIPAL (main)
// =========================================================
int main() {
    int notas[CAPACIDAD_MAXIMA];
    int n = 0;

    cout << "=====================================================" << endl;
    cout << "   UPSA - LABORATORIO N.º 11: VECTORES Y FUNCIONES   " << endl;
    cout << "=====================================================" << endl << endl;

    // 1. Solicitar la cantidad de estudiantes (1 a 30)
    n = pedirCantidadEstudiantes();
    cout << endl;

    // 2. Registrar notas validadas (0 a 100)
    registrarCalificaciones(notas, n);
    cout << endl;

    // 3. Mostrar las notas ingresadas
    mostrarNotas(notas, n);
    cout << endl;

    // 4. Promedio general
    float prom = calcularPromedio(notas, n);
    cout << fixed << setprecision(2);
    cout << "Promedio General: " << prom << endl;

    // 5. Mayor y menor nota (mediante parámetros por referencia &)
    int notaMayor, notaMenor;
    obtenerMayorMenor(notas, n, notaMayor, notaMenor);
    cout << "Nota Mayor: " << notaMayor << " | Nota Menor: " << notaMenor << endl;

    // 6. Conteo de aprobados y reprobados
    int aprobados = contarAprobados(notas, n);
    int reprobados = n - aprobados;
    cout << "Aprobados (>= 51): " << aprobados << " | Reprobados (< 51): " << reprobados << endl << endl;

    // 7. Búsqueda de una nota
    int notaBuscada;
    cout << "--- BUSQUEDA DE NOTA ---" << endl;
    cout << "Ingrese la nota a buscar: ";
    cin >> notaBuscada;
    int pos = buscarNota(notas, n, notaBuscada);
    if (pos != -1) {
        cout << "-> La nota " << notaBuscada << " pertenece al Estudiante " << (pos + 1) << endl;
    } else {
        cout << "-> La nota " << notaBuscada << " NO fue encontrada en el registro." << endl;
    }
    cout << endl;

    // 8. Actualizar la nota de un estudiante
    cout << "--- ACTUALIZACION DE NOTA ---" << endl;
    actualizarNota(notas, n);
    cout << endl;

    // 9. Mostrar resultados actualizados
    cout << "--- RESULTADOS ACTUALIZADOS ---" << endl;
    mostrarNotas(notas, n);
    float nuevoProm = calcularPromedio(notas, n);
    cout << "Nuevo Promedio General: " << nuevoProm << endl;

    return 0;
}

// =========================================================
// 3. DEFINICIÓN DE LAS FUNCIONES
// =========================================================

// Solicita y valida la cantidad N de estudiantes (1 a 30)
int pedirCantidadEstudiantes() {
    int cant;
    do {
        cout << "Coloque la cantidad de estudiantes que seran analizados (1-30): ";
        cin >> cant;
        if (cant < 1 || cant > 30) {
            cout << "  Error: La cantidad debe estar entre 1 y 30. Intente de nuevo." << endl;
        }
    } while (cant < 1 || cant > 30);
    return cant;
}

// Lee y valida N calificaciones (cada una entre 0 y 100)
void registrarCalificaciones(int notas[], int n) {
    cout << "--- REGISTRO DE NOTAS (0 a 100) ---" << endl;
    for (int i = 0; i < n; i++) {
        do {
            cout << "Ingrese la nota del Estudiante " << (i + 1) << ": ";
            cin >> notas[i];
            if (notas[i] < 0 || notas[i] > 100) {
                cout << "  Error: La nota debe estar entre 0 y 100. Intente de nuevo." << endl;
            }
        } while (notas[i] < 0 || notas[i] > 100);
    }
}

// Muestra las notas indicando el número de estudiante (1, 2, 3, ...)
void mostrarNotas(const int notas[], int n) {
    cout << "--- LISTADO DE NOTAS DE LOS ESTUDIANTES ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Estudiante " << (i + 1) << ": " << notas[i] << endl;
    }
}

// Calcula y devuelve el promedio general
float calcularPromedio(const int notas[], int n) {
    if (n <= 0) return 0.0f;
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += notas[i];
    }
    return (float)suma / n;
}

// Obtiene la mayor y menor nota mediante parámetros por referencia (&)
void obtenerMayorMenor(const int notas[], int n, int &mayor, int &menor) {
    if (n <= 0) return;
    mayor = notas[0];
    menor = notas[0];
    for (int i = 1; i < n; i++) {
        if (notas[i] > mayor) mayor = notas[i];
        if (notas[i] < menor) menor = notas[i];
    }
}

// Cuenta la cantidad de estudiantes aprobados (nota >= 51)
int contarAprobados(const int notas[], int n) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (notas[i] >= 51) {
            cont++;
        }
    }
    return cont;
}

// Busca una nota y devuelve el índice (0 a n-1) del primer estudiante que la tenga, o -1 si no existe
int buscarNota(const int notas[], int n, int notaBuscada) {
    for (int i = 0; i < n; i++) {
        if (notas[i] == notaBuscada) {
            return i; // Devuelve la primera posición encontrada
        }
    }
    return -1; // No encontrada
}

// Solicita el número de estudiante (1 a n), valida y actualiza su nota por una nueva nota válida
void actualizarNota(int notas[], int n) {
    int numEst;
    do {
        cout << "Ingrese el numero de estudiante a modificar (1 a " << n << "): ";
        cin >> numEst;
        if (numEst < 1 || numEst > n) {
            cout << "  Error: Estudiante fuera de rango. Intente de nuevo." << endl;
        }
    } while (numEst < 1 || numEst > n);

    int nuevaNota;
    do {
        cout << "Ingrese la nueva nota (0 a 100) para el Estudiante " << numEst << ": ";
        cin >> nuevaNota;
        if (nuevaNota < 0 || nuevaNota > 100) {
            cout << "  Error: La nota debe estar entre 0 y 100. Intente de nuevo." << endl;
        }
    } while (nuevaNota < 0 || nuevaNota > 100);

    // Reemplaza la nota en el vector (ajustando de base 1 a base 0)
    notas[numEst - 1] = nuevaNota;
    cout << "-> Nota del Estudiante " << numEst << " actualizada exitosamente a " << nuevaNota << "." << endl;
}
