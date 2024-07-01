#include<iostream>

using namespace std;
int main (){

	int n, p=0, s=0, c=0, i;
	float arreglo[30];
	
	cout<<"Elementos del arreglo (max 30): "; cin>>n;

	for(i=0;i<n;i++){
		cout<<"ingrese los numeros #:"<<i+1<<endl; cin>>arreglo[i];
		if (arreglo[i]==0){
			c = c + 1;
		} else {
			s = s + arreglo[i];
		}
		
	}
	p=(c/n)*100;
	cout<<"La sumatoria es: "<<s<<endl;
	cout<<"El porcentaje es: "<<p<<endl;
	return 0;
	}
