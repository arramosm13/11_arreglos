#include <iostream>
using namespace std;

int main() {
	int tm, nr, i;
	int arreglo[i];
	cout << "Ingrese el tamano que desea para el arreglo: "; cin >> tm;
	cout << "Ingrese el numero deseado para obtener sus multiplos: "; cin >> nr;
	int arr[tm];
	for (int i = 0; i < tm; i++) {
    arreglo[i] = nr * (i + 1);
	}
	cout << "El arreglo con multiplos de " << nr << " son: \n";
	for (int i = 0; i < tm; i++) {
    cout << arreglo[i] <<endl;
	}
  	return 0;
}
