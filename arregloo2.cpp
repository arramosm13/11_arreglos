#include <iostream>
using namespace std;
int main() {
    int n, Pares = 0, Impares = 0;
    int arre[n], arrePares[n], arreImpares[n];    
    cout << "Ingrese el numero de elementos que desea en el arreglo: "; cin >> n;    
    cout << "Ingrese los numeros del arreglo:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arre[i];
    }
    for (int x = 0; x < n; ++x) {
        if (arre[x] % 2 != 0) {
            arreImpares[Impares++] = arre[x];
        } else {
            arrePares[Pares++] = arre[x];
        }
    }
    cout << "El arreglo de los numeros pares son:\n";
	for (int i = 0; i < Pares; ++i) {    
		cout << arrePares[i] <<endl;
    }
    cout << "El arreglo de los numeros impares son:\n";
    for (int j = 0; j < Impares; ++j) {
        cout << arreImpares[j] <<endl;
    }
    return 0;
}
