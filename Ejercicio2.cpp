/*Se tienen los siguientes atributos de personal : DNI, nombres, día, mes y año de nacimiento. Se
 pide realizar una búsqueda binaria por fecha de nacimiento. Sugerencia: Use dos registros (personal y fecha)
  y tres funciones (uno para ordenar el arreglo por cada inserción, otro para la búsqueda y
   el último para comparar fechas). Asuma que nadie comparte la misma fecha de nacimiento*/
   
#include <iostream>
using namespace std;

struct fecha{
	int dia;
	int mes;
	int anio;
};
struct Personal{
	char dni[9];
	char nombre[20];
	fecha fecha_nacimiento;
};


void ordenacionFecha(Personal [], int );
int busquedaBinaria(Personal [], int, fecha);
int compararFechas(fecha, fecha);

int main(){
	int m, max_person=100;
	Personal personales[max_person];
	
	cout << "Cuantos personales va aniadir: " << endl;
	cin >> m;
	
	cout << endl;
			
	for(int i = 0; i<m; i++){
		
		cout << "Digite el DNI: " << endl;
		cin.ignore();
		cin.getline(personales[i].dni,9 );
		
		cout << "Digite el nombre: " << endl;
		cin.getline(personales[i].nombre, 20);
		
		cout << "Digite la fecha de nacimiento: (dia, mes, anio)" << endl;
		cin >> personales[i].fecha_nacimiento.dia >> personales[i].fecha_nacimiento.mes >> personales[i].fecha_nacimiento.anio;
		
		cin.ignore();		
		cout << endl;
				
	}
	
	cout << endl;
	
	ordenacionFecha(personales, m);

	//MOSTRANDO LOS PERSONALES ORDENADOS POR FECHA DE NACIMIENTO
	
	cout << "Los personales ordenados ascendemente: " << endl;
	
	for(int i = 0; i<m; i++){
		cout << "Personal: " << i+1 << endl;
		cout << "DNI: " << personales[i].dni << endl;
		cout << "Nombre: " << personales[i].nombre << endl;
		cout << "Fecha de nacimiento: " << personales[i].fecha_nacimiento.dia << " " << personales[i].fecha_nacimiento.mes << " " << personales[i].fecha_nacimiento.anio << endl;
		cout << "------------------------------" << endl;
	}
	
	cout << endl;
	
	fecha f_buscar;
	
	cout << "Digite la fecha de nacimiento a buscar (dia, mes, anio) " << endl;
	cin >> f_buscar.dia >> f_buscar.mes >> f_buscar.anio;
	
	int in = busquedaBinaria(personales, m, f_buscar);
	
	if (in != -1){
		cout << "El personal se encuentra en la posicion " << in + 1 << endl;
	}else{
		cout << "El personal no se encuentra " << endl;
	}

	return 0;
}

int compararFechas(fecha f1, fecha f2){
	if (f1.anio != f2.anio){
		return f1.anio - f2.anio;
	}else if(f1.mes != f2.mes){
		return f1.mes - f2.mes;
	}else{
		return f1.dia - f2.dia;
	}
}

void ordenacionFecha(Personal arr[], int m ){
	
	for(int i = 0; i<m-1; i++){
		for(int j = i+1; j<m; j++){
			if(compararFechas(arr[i].fecha_nacimiento, arr[j].fecha_nacimiento ) > 0){
				Personal temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int busquedaBinaria(Personal arr[], int m, fecha f_buscar){
	int izq = 0;
	int der = m-1;
	int n;
	
	while(izq <= der){
		n = (izq + der) / 2;
		int comparacion = compararFechas(arr[n].fecha_nacimiento, f_buscar);
		
		if (comparacion  == 0){
			return n;
		}else if(comparacion < 0){
			izq = n+1;
		}else{
			der = n-1;
		}
	}
	return -1;
}

