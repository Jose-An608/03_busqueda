/*1. Se tiene un polinomio almacenado en un arreglo. Se pide leer un monomio 
y buscar si forma parte del polinomio. Usa búsqueda secuencial*/

#include <iostream>
using namespace std;

struct monomio{
	float coef;
	float exp;
	
};

int busquedaPol(int , monomio [], monomio);

int main(){
	int m;
	
	cout << "Digite la cantidad de terminos: " << endl;
	cin >> m;
	
	cout << endl;
	
	monomio arr[m];
	
	for (int i = 0; i<m; i++){
		
		cout << "Termino " << i+1 << " del polinomio: " << endl;
		
		cout << "Digite el coficiente: " << endl;
		cin >> arr[i].coef;
		
		cout << "Digite el exponente: " << endl;
		cin >> arr[i].exp;
		
		cout << endl;
	}
	
	cout << "El polinomio o monomio es: " << endl;
	
	for (int i = 0; i<m; i++){
		cout<< arr[i].coef <<"x"<<"^"<<arr[i].exp<< " ";
	}
	
	cout << endl;
	
	monomio mon_bus;
	
	cout << "Digite el monomio(coeficiente y exponente) que quiere buscar: " << endl;
	cin >> mon_bus.coef >> mon_bus.exp;
	
	int in = busquedaPol(m, arr, mon_bus);
	
	if (in >= 0){
		cout << "El monomio se encuentra en la posicion " << in+1 << " del arreglo. " << endl;
	}else{
		cout << "El monomio no se encuentra en el arreglo. " << endl;
	}
	
	return 0;
}

int busquedaPol(int m, monomio arr[], monomio mon_bus){
	int pos = 0, i=0;
	
	for(int i = 0; i<m; i++){
		if (arr[i].coef == mon_bus.coef && arr[i].exp == mon_bus.exp){
			return i;
		}
	}
	return -1;
}

