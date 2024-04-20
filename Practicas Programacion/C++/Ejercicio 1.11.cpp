#include "iostream"
using namespace std;

int main(){
	
	cout << "Ingrese los datos correspondientes para obtener su cambio" << endl;
	
	float Efectivo, Precio;
	
	cout << "ingrese el precio del producto: ";
	cin >> Precio;
	
	cout << "ingrese el dinero que proporcionaron: ";
	cin >> Efectivo;
	
	if (Efectivo > Precio){
	
	cout << "su cambio es: " << Efectivo-Precio << endl;
	
	return (0);
}
  
  if (Efectivo < Precio){
  	cout << "Error, Proporcione mas dinero";
  	return (0);	
  }

}

