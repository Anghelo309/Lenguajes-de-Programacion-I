#include<iostream>
using namespace std;

int main(){
	int n;
	long long a=0,b=1,c;
	int i=1;

	cout<<"Ingrese la cantidad de terminos: ";
	cin>>n;

	if(n>0){
		do{
			if(i==1){
				cout<<a<<" ";
			}else if(i==2){
				cout<<b<<" ";
			}else{
				c=a+b;
				a=b;
				b=c;
				cout<<c<<" ";
			}
			i++;
		}while(i<=n);
	}else{
		cout<<"Por favor, ingrese un numero mayor a 0."<<endl;
	}

	return 0;
}