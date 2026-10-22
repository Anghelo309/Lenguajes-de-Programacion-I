#include<iostream>
using namespace std;

int main(){
	int matriz[2][3]={{14, 15, 16}, {8, 13, 20}};
	int i,j;

	cout<<"ARREGLO BIDIMENSIONAL MATRIZ"<<endl;
	cout<<"Notas del estudiante  "<<matriz[0][1]<<endl;

	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}

	return 0;
}