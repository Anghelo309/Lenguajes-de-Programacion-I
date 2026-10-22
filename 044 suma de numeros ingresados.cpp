#include<iostream>
using namespace std;

int main(){
	int suma=0,n=0,i=1;

	do{
		cout<<"Numero "<<i<<": ";
		cin>>n;
		suma=suma+n;
		i=i+1;
	}while(i<=10);

	cout<<"La suma total es: "<<suma<<endl;

	return 0;
}