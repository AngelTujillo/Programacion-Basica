#include "iostream"
using namespace std;

int main(){
	
	float Cal;
	
	cout << "Bienvenido Por favor ingresa tu calificacion: ";
	cin >> Cal;
	
	if (Cal<3){
		
		cout << "Lo sentimos estas reprobado" << endl;
		
	}
	else {
	    cout << "Estas aprobado felicidades!";
		
	}
	
	return (0);
}
