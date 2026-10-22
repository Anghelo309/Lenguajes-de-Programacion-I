#include<iostream>
using namespace std;

int main(){
	double monto,saldoTotal=0;
	char res;

	do{
		cout<<"ingrese el monto que desea ingresar (S/.1, S/.2, S/.5, S/.10, S/.20) : S/.";
		cin>>monto;

		if(monto!=1 && monto!=2 && monto!=5 && monto!=10 && monto!=20){
			cout<<"El valor ingresado no es correcto"<<endl;
			break;
		}
		saldoTotal=saldoTotal+monto;
		cout<<"Saldo actual : S/."<<saldoTotal<<endl;

		cout<<"Desea ingresar mas dinero? (S = si, N = no): "<<endl;
		cin>>res;
	}while(res=='S' || res=='s');

	cout<<"Saldo total = "<<saldoTotal<<endl;

	return 0;
}