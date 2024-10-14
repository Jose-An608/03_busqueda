/*1. Se tiene un polinomio almacenado en un arreglo. Se pide leer un monomio 
y buscar si forma parte del polinomio. Usa búsqueda secuencial*/

#include <iostream>
using namespace std;

struct monomio{
	int expo;
	int coef;
	
};

int buscar(int, int, int, monomio [] );

int main(){
	monomio arr[]= {{3,4}, {8,5},{7,2} };
	int m, n;
	monomio buscado;
	
	cout << "Digite el exponente a buscar: " << endl;
	cin >> m;
	
	cout << "Digite el coeficiente a buscar: " << endl;
	cin >> n;
	
	int p = buscar(m, n, 3,arr);
	
	if (p!=-1){
		cout << "El monomio se encuentra en la ubicacion " << p +1 << " del polinomio ";
	}else{
		cout << "el monomio no se encuentra " << endl;
		
	}
	
	return 0;
}

int buscar(int x, int y , int z , monomio arr[]){
	
	int i = 0;
	
	while(i < z){
		if(arr[i].expo == x && arr[i].coef == y){
			return i;
		}
		i++;
	}
	return -1;
	
}

