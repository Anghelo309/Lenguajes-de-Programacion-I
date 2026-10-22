#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"ingresa un numero"<<endl;cin>>num;
	if(num>0)
	cout<<"El numero ingresado es POSITIVO"<<endl;
	else if(num<0)
	cout<<"El numero ingresado es NEGATIVO"<<endl;
	else
	cout<<"El numero ingresado es NEUTRO"<<endl;
	return 0;
}