#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float p,t,IMC;
	cout<<"ingrese su peso(kg): "<<endl;
	cin>>p;
	cout<<"ingrese su estatura(m): "<<endl;
	cin>>t;
	if(p<0 || t<0)
		cout<<"\nLos datos no pueden tomar valores negativos\n";
	else{
	IMC=p/pow(t,2);
	if(IMC<18.5)
		cout<<"\nEl sujeto pertenece a la categoria de bajo peso\n";
	else{
		if(IMC>=18.5 && IMC<=24.9)
			cout<<"\nEl sujeto pertenece a la categoria de peso normal\n";
		else{
			if(IMC>=25.0 && IMC<=29.9)
				cout<<"\nEl sujeto pertenece a la categoria de sobrepeso\n";
			else{
				if(IMC>=30.0 && IMC<=34.9)
					cout<<"\nEl sujeto pertenece a la categoria de Obesidad grado I\n";
					else{
						if(IMC>=35.0 && IMC<=39.9)
							cout<<"\nEl sujeto pertenece a la categoria de Obesidad grado II\n";
							else
								cout<<"\nEl sujeto pertenece a la categoria de Obesidad grado III\n";
					}
			}
		}
	}
}
	return 0;
}