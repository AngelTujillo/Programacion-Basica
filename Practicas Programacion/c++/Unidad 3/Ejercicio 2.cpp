#include "iostream"
using namespace std;

int main(){
	
	float SalI;
	
	cout << "Porfavor ingrese su salario: ";
	cin >> SalI;
	
	float Aumento = SalI*(.15);
	float SalF = SalI+Aumento;
	
	if (SalI < 400000){
		
		cout << "Su aumento fue de: " << Aumento << endl;
		cout << "Su salario es: " << SalF << endl;
		
	}
	
	else {
		
		cout << "Su salario es el mismo: " << SalI;
	}
	return(0);
}
