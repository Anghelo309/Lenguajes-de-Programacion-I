#include<iostream>
using namespace std;

int main(){
	double nota,n,i=1;

	cout<<"Ingrese la cantidad de notas"<<endl;
	cin>>n;

	do{
		cout<<"Ingrese la nota del Examen Parcial (0 a 20) "<<i<<" : "<<endl;
		cin>>nota;

		if(nota<0 || nota>20){
			cout<<endl<<"La nota ingresada no es correcta "<<endl;
		}
		else if(nota>=10.5){
			cout<<"Estado: Aprobado"<<endl;
		}
		else{
			cout<<"Estado: Desaprobado"<<endl;
		}
		i=i+1;
	}while(i<=n);

	return 0;
}