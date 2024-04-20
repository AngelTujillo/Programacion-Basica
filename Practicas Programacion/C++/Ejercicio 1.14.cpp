#include "iostream"

using namespace std;

int main(){
	
	cout << "Este programa realizara la conversion de base y altura a area y volumen de un cilindro" << endl;
	 
	 float Radio, Altura;
	 float pi = 3.1416;
	 
	 cout << "Porfavor ingrese el Radio del cilindro: ";
	 cin >> Radio;
	 
	 cout << "ingrese la altura del cilindro: ";
	 cin >> Altura;
	 
	 cout << "El volumen del cilindro es: " << (pi*(Radio*Radio)*Altura)<< endl;
	 cout << "El area del cilidnro es: " << (2*(pi)*Radio*Altura);
	 
	 return (0);
	 
}
