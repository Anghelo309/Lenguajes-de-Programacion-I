#include<iostream>
using namespace std;

int main(){
	int i=1,suma=0,n=0,num;

	cout<<"ingrese la cantidad de datos : ";
	cin>>n;

	do{
		cout<<"Ingrese numero :"<<i<<endl;
		cin>>num;
		suma=suma+num;
		i=i+1;
	}while(i<=n);

	cout<<"Suma total = "<<suma<<endl;
	cout<<"Promedio = "<<(float)suma/n<<endl;

	return 0;
}