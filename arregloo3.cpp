#include <iostream>
using namespace std;

int main() {
   
    float TMedia, TMin[7], TMax[7];
    int diaMTemp = 0, In = 0, Tx;
    
    for (int i = 0; i < 7; ++i) {
    cout << "Ingrese la temperatura minima del dia " << i + 1 << ": "; cin>> TMin[i];
    cout << "Ingrese la temperatura maxima del dia " << i + 1 << ": "; cin>> TMax[i];
    }
    cout << "\nLa temperatura media de cada dia es:\n";
    for (int i = 0; i < 7; ++i) {
    TMedia = (TMin[i] + TMax[i]) / 2;
    cout << "Dia " << i + 1 << ": " << TMedia<< "C" << endl;
    
    if (TMin[i] < TMin[diaMTemp]) {
            diaMTemp = i;
    }
    }
    cout << "La menor temperatura minima fue el dia " << diaMTemp + 1 << " con " << TMin[diaMTemp] << "C\n";
    	
    do{
		cout << "Ingrese una temperatura para buscar dias que coincidan con esa temperatura maxima: "; cin >> Tx;
   
    	for (int i = 0; i < 7; ++i) {
        if (TMax[i] == Tx) {
            cout << "El dia " << i + 1 << " tiene una temperatura maxima de " << Tx << "C.\n";
            In = 1; 
        }   
    	}
   		 if (In == 0) {
        cout << "No hay ni un dia que coincida con una temperatura maxima de " << Tx << "C.\n";
    	}
	} while (Tx > 0);
	cout<<"Ingrese una temperatura positiva."<<endl;

    return 0;
}
   
