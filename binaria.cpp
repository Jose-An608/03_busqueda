//busqueda binaria

#include <iostream>
using namespace std;

int datosOrdenados(int [], int, int);

int main(){
	int m=8, dato, p;
	int arr[] = {5,6,7,8,9,10,11,12};
		
	cout << "Arreglo (ordenado): " << endl;
	for(int i = 0; i<8; i++){
		cout << arr[i] << " ";
	}
	
	cout << endl << endl;
		
	cout << "Digite el numero que quiere buscar: " << endl;
	cin >> dato;
	
	cout << endl;
	
	p = datosOrdenados(arr, m, dato);
	
	if (p >= 0){
		cout << "El numero se encuentra en la posicion " << p+1 << " del primer arreglo. " << endl;
    }else{
		cout << "El numero no se encuentra en el arreglo." << endl;
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


