#include<iostream>
using namespace std;

int main(){
	int n=0,i;
	double suma=0,nota;

	cout<<"Ingrese la cantidad de notas: "<<endl;
	cin>>n;

	double notas[n];

	for(i=0; i<n; i++){
		cout<<"Ingrese la nota "<<i+1<<": "<<endl;
		cin>>nota;
		notas[i]=nota;
		suma=suma+nota;
	}

	cout<<"LA LISTA DE TODAS LAS NOTAS"<<endl;
	for(i=0; i<n; i++){
		cout<<"Nota en indice ["<<i<<"]: "<<notas[i]<<endl;
	}

	cout<<"El promedio de notas es: "<<suma/n<<endl;

	return 0;
}