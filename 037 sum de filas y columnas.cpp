#include<iostream>
using namespace std;

int main(){
	int filas, columnas;

	cout<<"Ingrese el numero de filas: ";
	cin>>filas;
	cout<<"Ingrese el numero de columnas: ";
	cin>>columnas;

	int matriz[50][50];
	int suma_col[50]={0};

	cout<<"Ingreso de elementos";
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Elemento ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
			suma_col[j]+=matriz[i][j];
		}
	}

	cout<<"Matriz y suma por filas"<<endl;
	for(int i=0; i<filas; i++){
		int suma_fila=0;
		for(int j=0; j<columnas; j++){
			cout<<matriz[i][j]<<"\t";
			suma_fila+=matriz[i][j];
		}
		cout<<"| Suma fila: "<<suma_fila<<endl;
	}

	cout<<"Suma de cada columna:\n";
	for(int j=0; j<columnas; j++){
		cout<<suma_col[j]<<"\t";
	}
	cout<<endl;

	return 0;
}