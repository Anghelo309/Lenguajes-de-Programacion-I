#include<iostream>
using namespace std;

int main(){
	double suma=0, nota=0;
	int n;

	cout<<"PROMEDIO DE NOTAS"<<endl;
	cout<<"Leer n notas"<<endl;
	cin>>n;

	if(n<=0){
		cout<<"ERROR, la cantidad de notas debe ser un valor positivo"<<endl;
		return 1;
	}

	for(int i=1; i<=n; i++){
		cout<<"Ingrese la nota "<<i<<": "<<endl;
		cin>>nota;
		suma=suma+nota;
	}

	cout<<"La suma de notas es: "<<suma<<endl;
	cout<<"El promedio de notas es: "<<suma/n<<endl;

	return 0;
}