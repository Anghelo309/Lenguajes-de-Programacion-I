#include<iostream>
using namespace std;

int main(){
	int contador=1;
	int sumapar=0;
	int sumaimpar=0;
	int suma=0;

	while(contador<=10){
		cout<<"Numero: "<<contador<<endl;
		if(contador%2!=0)
			sumaimpar=sumaimpar+contador;
		if(contador%2==0)
			sumapar=sumapar+contador;
		suma=suma+contador;
		contador=contador+1;
	}

	cout<<"La suma total  de los numeros pares es: "<<sumapar<<endl;
	cout<<"La suma total  de los numeros impares es: "<<sumaimpar<<endl;
	cout<<"La suma total  de los numeros es: "<<suma<<endl;

	return 0;
}