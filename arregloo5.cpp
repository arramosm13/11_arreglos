#include <iostream>
#include <string>
using namespace std;
int main() {
    int nFP, nPG, mn=0;
    cout << "Ingrese el numero de estudiantes que hay en la clase de Fundamentos de Programacion: "; cin >> nFP;
    cout << "Ingrese los nombres de cada estudiante de la clase de Fundamentos de Programacion:\n"; 
	string funda[nFP];
    for(int i = 0; i < nFP; ++i) {
        cin >> funda[i];
    }
    cout << "Ingrese el numero de estudiantes que hay en la clase de Programacion Grafica: "; cin >> nPG;
    cout << "Ingrese los nombres de cada estudiante de la clase de Programacion Grafica:\n";  
	string progra[nPG];
    for(int i = 0; i < nPG; ++i) {
        cin >> progra[i];
    }

    cout << "Estudiantes con mismo nombre en ambas asignaturas:\n";
    for(int i = 0; i < nFP; ++i) {
        for(int j = 0; j < nPG; ++j) {
            if(funda[i] == progra[j]) {
                cout << funda[i] << "\n";
                ++mn;
                break; 
            }
        }
    }
    cout << "Total de estudiantes con mismo nombre: " <<mn << "\n";
    return 0;
}
