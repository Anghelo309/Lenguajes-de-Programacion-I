#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int edad;
	int tipoServicio;
	double costoServicio=0.0;
	double descuentoAdultoMayor=0.0;
	double recargoNocturno=0.0;
	int horarioNocturno=0;
	double totalPagar=0.0;

	cout<<"CALCULADORA DE TRIAJE Y COSTOS DE CONSULTA MEDICA"<<endl;
	cout<<"Ingrese su edad: ";
	cin>>edad;

	cout<<"Es horario de emergencia nocturna? (1 = Si, 0 = No): "<<endl;
	cin>>horarioNocturno;

	if(edad<=0){
		cout<<"ERROR, la edad debe ser un valor positivo"<<endl;
		return 1;
	}

	cout<<"Seleccione el tipo de servicio"<<endl;
	cout<<"1: Medicina General ($30.00)"<<endl;
	cout<<"2: Pediatria ($45.00)"<<endl;
	cout<<"3: Cardiologia ($70.00)"<<endl;
	cout<<"4: Traumatologia ($60.00)"<<endl;
	cout<<"OPCION: ";
	cin>>tipoServicio;

	switch(tipoServicio){
		case 1:
			costoServicio=30.00;
			break;
		case 2:
			costoServicio=45.00;
			break;
		case 3:
			costoServicio=70.00;
			break;
		case 4:
			costoServicio=60.00;
			break;
		default:
			cout<<"ERROR: Opcion del servicio no valida"<<endl;
			return 1;
	}

	if(tipoServicio==2 && edad>=18){
		cout<<"El paciente tiene 18 anos o mas, debe ser atendido en Medicina General."<<endl;
	}

	if(edad>=65){
		descuentoAdultoMayor=costoServicio*0.25;
	}

	if(horarioNocturno==1){
		recargoNocturno=costoServicio*0.20;
	}

	totalPagar=(costoServicio-descuentoAdultoMayor)+recargoNocturno;

	cout<<fixed<<setprecision(2);
	cout<<"Costo del servicio: $"<<costoServicio<<endl;
	cout<<"Descuento aplicado: $"<<descuentoAdultoMayor<<endl;
	cout<<"Recargo nocturno: $"<<recargoNocturno<<endl;
	cout<<"Monto final a pagar: $"<<totalPagar<<endl;

	return 0;
}