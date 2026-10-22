#include<iostream>
using namespace std;

int main(){
	int i=1;
	char respuesta;

	do{
		cout<<"Numero: "<<i<<endl;
		i=i+1;
		cout<<"Desea imprimir el siguiente numero? (s/n): ";
		cin>>respuesta;
	}while(respuesta=='S' || respuesta=='s');

	return 0;
}