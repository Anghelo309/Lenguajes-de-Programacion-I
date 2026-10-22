#include<iostream>
using namespace std;

int main(){
	int contador=1;
	int suma=0;

	while(contador<=10){
		cout<<"Numero: "<<contador<<endl;
		if(contador%2==0)
			suma=suma+contador;
		contador=contador+1;
	}

	cout<<"La suma total  de los numeros pares es: "<<suma<<endl;

	return 0;
}