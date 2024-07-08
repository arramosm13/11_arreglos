#include <iostream>
using namespace std;

void arrMultiplos(int arreglo[], int a, int b);

void arrResultados(int arreglo[], int x);

int main() {
  int tm, nr;
  cout << "Ingrese el tamano que desea para el arreglo: "; cin >> tm;
  cout << "Ingrese el numero deseado para obtener sus multiplos: "; cin >> nr;
  int arr[tm];
  arrMultiplos(arr, tm, nr);
  cout << "El arreglo con multiplos de " << nr << " son: \n";
  arrResultados(arr, tm);
  return 0;
}

void arrMultiplos(int arreglo[], int a, int b) {
  for (int i = 0; i < a; i++) {
    arreglo[i] = b * (i + 1);
  }
}

void arrResultados(int arreglo[], int x) {
  for (int i = 0; i < x; i++) {
    cout << arreglo[i] << " "<<endl;
  }
}
