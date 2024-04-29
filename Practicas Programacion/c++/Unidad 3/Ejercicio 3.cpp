#include "iostream"
using namespace std;

int main(){
	
	float Cal;
	
	cout << "Bienvenido Por favor ingresa tu calificacion: ";
	cin >> Cal;
	
	if (Cal<=3){
		
		cout << "Reprobado" << endl;
		
	}
	else {
	    cout << "Aprobado";
		
	}
	
	return (0);
}
