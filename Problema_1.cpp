#include <iostream>
#include <string>

using namespace std;

const int alumnos = 100;

int main() {
    int n;
    string id[alumnos];
    string nombres[alumnos];
    string apellidos[alumnos];
    double nota1[alumnos];
    double nota2[alumnos];
    double nota3[alumnos];
    double nota4[alumnos];
    double promedio[alumnos];
    
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "Estudiante " << i + 1 << endl;
        cout << "ID: ";
        cin >> id[i];
        cout << "Nombres: ";
        cin >> nombres[i];
        cout << "Apellidos: ";
        cin >> apellidos[i];
        cout << "Nota 1: ";
        cin >> nota1[i];
        cout << "Nota 2: ";
        cin >> nota2[i];
        cout << "Nota 3: ";
        cin >> nota3[i];
        cout << "Nota 4: ";
        cin >> nota4[i];
        
        promedio[i] = (nota1[i] + nota2[i] + nota3[i] + nota4[i]) / 4.0;
        
        if (promedio[i] >= 60.0) {
            cout << "El estudiante " << nombres[i] << " " << apellidos[i] << " con ID " << id[i] << " ha aprobado con un promedio de " << promedio[i] << endl;
        } else {
            cout << "El estudiante " << nombres[i] << " " << apellidos[i] << " con ID " << id[i] << " ha reprobado con un promedio de " << promedio[i] << endl;
        }
    }
    
    return 0;
}