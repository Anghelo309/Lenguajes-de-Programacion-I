#include<iostream>
using namespace std;

int main(){
	int i=1,nTabla;
	char respuesta;

	cout<<"Tablas de multiplicar "<<endl;
	cout<<"De que numero desea la tabla de multiplicar "<<endl;
	cin>>nTabla;

	do{
		cout<<"Tabla del "<<nTabla<<endl;

		for(int i=1; i<=10; i++){
			cout<<nTabla<<" x "<<i<<" = "<<(nTabla*i)<<endl;
		}

		cout<<"Desea imprimir el siguiente numero? (s/n): "<<endl;
		cin>>respuesta;

		nTabla+=1;
	}while(respuesta=='S' || respuesta=='s');

	return 0;
}