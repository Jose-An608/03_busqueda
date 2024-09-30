#include <iostream>
using namespace std;

int datosOrdenados(int [], int, int);
int datosDesordenados(int [], int, int);

int main(){
	int m=8, n, dato, p, q;
	int arr[] = {1,2,3,4,5,6,7,8};
	int arr2[] = {4,2,1,5,3,2,6,9};
		
	cout << "Arreglo 1 (ordenado): " << endl;
	for(int i = 0; i<8; i++){
		cout << arr[i] << " ";
	}
	
	cout << endl << endl;
	
	cout << "Arreglo 2 (desordenado): " << endl;
	for(int i = 0; i<8; i++){
		cout << arr2[i] << " ";
	}
	
	cout << endl << endl;
	
	cout << "Menu: " << endl;
	cout << "1. Busqueda para datos ordenados " << endl;
	cout << "2. Busqueda para datos desordenados " << endl;
	cin >> n;
	
	cout << endl;
	
	cout << "Digite el numero que quiere buscar: " << endl;
	cin >> dato;
	
	
	cout << endl;
	
	switch(n){
		
		case 1:
			p = datosOrdenados(arr, m, dato);
			 if (p >= 0){
			 
                cout << "El numero se encuentra en la posicion " << p+1 << " del primer arreglo. " << endl;
            }else{
			
                cout << "El numero no se encuentra en el arreglo." << endl;
			}
            
			break;
		
		case 2: 
			q = datosDesordenados(arr2,m, dato);
			if(q>=0){
				cout << "El numero se encuentra en la posicion " << q+1 << " del segundo arreglo. " << endl;
			}else{
				cout << "El numero no se encuentra en el arreglo. " << endl;
				
			}
			break;
		
		default:
			cout << "Saliendo..." << endl;
	}

	return 0;
}

int datosOrdenados(int arr[], int m , int dato){
	int i = 0, pos;
	
	while((i <= m-1) && (arr[i]<dato)){
		i++;
	}
	
	if ((i>m-1) || (arr[i] > dato)){
		return pos = -i;

	}else{
		return pos = i;

	}
}

int datosDesordenados(int arr2[], int m, int dato){
	int pos = 0, i=0;
	
	while((i<=m) && (arr2[i] != dato)){
		i++;
	}
	
	if (i<=m){
		return pos = i;
	}else{
		return pos = -1;
	}
	
}
