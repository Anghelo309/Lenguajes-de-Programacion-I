#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	// ==================== DECLARACIÓN DE VARIABLES ====================
	int noches=0;
	int hues=0;
	int tipohabitacion=0;
	int plan=0;
	double costoCategoria=0.0;
	double descuento=0.0;
	double Multahues=0.0;
	double plancom=0.0;
	double totalPagar=0.0;
	double totalfinal=0.0;

	// ==================== ENTRADA DE DATOS ====================
	cout<<"TARIFICADOR DE RESERVAS DE HOTEL"<<endl;

	// --- Entrada: noches de estadía ---
	cout<<"Ingrese el numero de noches de estadia: ";
	cin>>noches;

	// ==================== VALIDACIONES ====================
	// --- Validación: noches mayor a 0 ---
	if(noches<=0){
		cout<<"ERROR, el numero de noches debe ser un valor positivo"<<endl;
		return 1;
	}

	// --- Entrada: huéspedes ---
	cout<<"Ingrese el numero de huespedes: ";
	cin>>hues;

	// --- Validación: huéspedes al menos 1 ---
	if(hues<1){
		cout<<"ERROR, el numero de huespedes debe ser al menos 1"<<endl;
		return 1;
	}

	// --- Entrada: plan de alimentación ---
	cout<<"Plan de alimentacion (1 = Solo desayuno, 2 = Pensión Completa: Almuerzo y Cena): "<<endl;
	cin>>plan;

	// --- Validación: plan 1 o 2 ---
	if(plan!=1 && plan!=2){
		cout<<"ERROR: plan de alimentacion no valido"<<endl;
		return 1;
	}

	// --- Entrada: tipo de habitación ---
	cout<<"Seleccione el tipo de habitación"<<endl;
	cout<<"1: Habitación Estándar (S/.50.00 por noche)"<<endl;
	cout<<"2: Habitación Doble (S/.80.00 por noche)"<<endl;
	cout<<"3: Suite Ejecutiva (S/.140.00 por noche)"<<endl;
	cout<<"OPCION: ";
	cin>>tipohabitacion;

	// ==================== TARIFA BASE (switch-case) ====================
	switch(tipohabitacion){
		case 1:
			costoCategoria=50.00;
			break;
		case 2:
			costoCategoria=80.00;
			break;
		case 3:
			costoCategoria=140.00;
			break;
		default:
			cout<<"ERROR: tipo de habitacion no valida"<<endl;
			return 1;
	}

	// ==================== RECARGO POR HUÉSPEDES ADICIONALES ====================
	if(tipohabitacion==1 && hues>1){
		Multahues=(hues-1)*15;
	}
	if(tipohabitacion==2 && hues>2){
		Multahues=(hues-2)*15;
	}
	if(tipohabitacion==3 && hues>3){
		Multahues=(hues-3)*15;
	}

	// ==================== COSTO DE ALIMENTACIÓN ====================
	if(plan==2){
		plancom=25*hues;
	}
	else if(plan==1){
		plancom=0;
	}

	// ==================== CÁLCULO DEL TOTAL ====================
	// --- Total acumulado (por noche × noches) ---
	totalPagar=((costoCategoria+plancom)+Multahues)*noches;

	// --- Descuento por estadía larga (> 5 noches) ---
	if(noches>5){
		descuento=totalPagar*0.12;
	}

	// --- Total final ---
	totalfinal=totalPagar-descuento;

	// ==================== SALIDA: DESGLOSE ====================
	cout<<fixed<<setprecision(2);
	cout<<"--------------- Desglose ---------------"<<endl;

	// --- Tipo de habitación ---
	if(tipohabitacion==1){
		cout<<"Tipo de habitacion : Habitación Estándar "<<endl;
	}
	if(tipohabitacion==2){
		cout<<"Tipo de habitacion : Habitación Doble "<<endl;
	}
	if(tipohabitacion==3){
		cout<<"Tipo de habitacion : Suite Ejecutiva "<<endl;
	}

	// --- Subtotal de alojamiento ---
	cout<<"Subtotal de alojamiento: S/."<<costoCategoria*noches<<endl;

	// --- Recargo por huéspedes adicionales (si aplica) ---
	if(tipohabitacion==1 && hues>1){
		cout<<"Recargo por huéspedes adicionales: S/."<<Multahues*noches<<endl;
	}
	if(tipohabitacion==2 && hues>2){
		cout<<"Recargo por huéspedes adicionales: S/."<<Multahues*noches<<endl;
	}
	if(tipohabitacion==3 && hues>3){
		cout<<"Recargo por huéspedes adicionales: S/."<<Multahues*noches<<endl;
	}

	// --- Costo de alimentación ---
	cout<<"Costo de alimentación: S/."<<plancom*noches<<endl;

	// --- Descuento y monto total ---
	if(noches>5){
		cout<<"descuento por estadía larga: S/."<<descuento<<endl;
		cout<<"Monto total a pagar: S/."<<totalfinal<<endl;
	}
	else{
		cout<<"Monto total a pagar: S/."<<totalPagar<<endl;
	}

	return 0;
}