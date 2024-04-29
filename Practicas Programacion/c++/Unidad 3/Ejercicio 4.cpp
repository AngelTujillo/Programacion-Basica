#include "iostream"
using namespace std;

int main(){
	
	float SalI;
	
	cout << "Porfavor ingrese su salario: ";
	cin >> SalI;
	
	float Aumento15 = SalI*(.15);
	float Aumento8 = SalI*(.08);
	
	if (SalI <= 400000){
		
		cout << "Su aumento fue de: " << Aumento15 << endl;
		cout << "Su salario es: " << SalI+Aumento15 << endl;
		
	}
	
	else {
		cout << "Su aumento fue de: " << Aumento8 << endl;
		cout << "Su salario es: " << SalI+Aumento8 << endl;
		
	
	}
	return(0);
}
