#include <iostream>
#include <cstring>

using namespace std;

struct Estudiante {
    int id;
    char nombres[50];
    char apellidos[50];
    float notas[4];
    float promedio;
    bool aprobado;
};

void ingresarEstudiante(Estudiante *e) {
	
    cout << "Ingrese el id del estudiante: ";
    cin >> e->id;
    cout << "Ingrese los nombres del estudiante: ";
    cin.ignore();
    cin.getline(e->nombres, 50);
    cout << "Ingrese los apellidos del estudiante: ";
    cin.getline(e->apellidos, 50);
    for (int i = 0; i < 4; i++) {
        cout << "Ingrese la nota " << i + 1 << " del estudiante: ";
        cin >> e->notas[i];
    }
    e->promedio = (e->notas[0] + e->notas[1] + e->notas[2] + e->notas[3]) / 4;
    e->aprobado = e->promedio > 60;
}

void mostrarEstudiante(Estudiante *e) {
    cout << "Id: " << e->id << endl;
    cout << "Nombres: " << e->nombres << endl;
    cout << "Apellidos: " << e->apellidos << endl;
    cout << "Notas: ";
    for (int i = 0; i < 4; i++) {
        cout << e->notas[i] << " ";
    }
    cout << endl;
    cout << "Promedio: " << e->promedio << endl;
    cout << "Estado: " << (e->aprobado ? "Aprobado" : "Reprobado") << endl;
    cout<<"____________________________________________________________________________"<<endl;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;
    Estudiante *estudiantes = new Estudiante[n];
    for (int i = 0; i < n; i++) {
    	cout<<"_______________________________________________________"<<endl;
        cout << "Ingrese la informacion del estudiante " << i + 1 << ":" << endl;
        ingresarEstudiante(&estudiantes[i]);
    }
    for (int i = 0; i < n; i++) {
        cout << "Informacion del estudiante " << i + 1 << ":" << endl;
        mostrarEstudiante(&estudiantes[i]);
    }
    delete[] estudiantes;
    return 0;
}