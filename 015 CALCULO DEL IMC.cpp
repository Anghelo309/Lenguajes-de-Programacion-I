#include<iostream>
#include<math.h>
using namespace std;
int main(){
  float peso,estatura,IMC;
  int opcionrango;
  cout <<"Calculo el Indice de masa corporal"<<endl;
  cout<<"Ingese su peso(kg): "<<endl;cin>>peso;
  cout<<"Ingrese su talla(m): "<<endl;cin>>estatura;
  
  if(peso<=0||estatura<=0)
    cout<<"\n Error el peso y estatura deben de ser mayor a a  cero \n"<<endl;
    
  else{
    IMC=peso/pow(estatura,2);
    if(IMC<10.5)
        opcionrango=1;
    else if(IMC>=10.50 && IMC<=24.9)
        opcionrango=2;
    else if(IMC>=25.00 && IMC<=29.9)
        opcionrango=3;
    else if(IMC>=30.00 && IMC<=34.9)
        opcionrango=4;
    else
        opcionrango=5;

    cout<<"Su Idice de masa corporal calculado es :"<<IMC<<"kg/m2"<<endl;
    cout<<"\n Diagnostico";

    switch(opcionrango){
    case 1:
        cout<<"Bajo peso"<<endl;break;
    case 2:
        cout<<"Peso normal"<<endl;break;
    case 3:
        cout<<"Sobrepeso"<<endl;break;
    case 4:
        cout<<"Obesidad grado 1"<<endl;break;
    case 5:
        cout<<"Obesidad grado 2"<<endl;break;
    default:
        cout<<"No pudo clasificar el IMC"<<endl;break;}
  }

    return 0;
}
