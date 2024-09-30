//busqueda binaria

#include <iostream>
using namespace std;

int datosOrdenados(int [], int, int);
//int datosDesordenados(int [], int, int);

int main(){
	int m=8, n, dato, p, q;
	int arr[] = {5,6,7,8,9,10,11,12};
	int arr2[] = {8,4,222,11,0,7,5,4,3};
		
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
	}

	return 0;
}
int datosOrdenados(int arr[], int m , int dato){
	int izq, der, cen, pos,n;
	izq = 0;
	der = m-1;
	cen = 0;
	
	while((izq <= der) && (cen == 0)){
		n = (izq + der)/2;
		if(arr[n] == dato){
			cen = 1;
		}else{
			if(dato > arr[n]){
				izq = n + 1;
			}else{
				der = n - 1;
			}
		}
	}
	if(cen == 1){
		return pos = n;
		
	}else{
		return -1;
	}
}

