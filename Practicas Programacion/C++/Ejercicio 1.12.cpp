#include "iostream"
 using namespace std;
 
 int main(){
 	
 	cout << "En este programa se convertiran los datos de los dinosaurios dados en toneladas y pies, en kilogramos y metros" << endl;
 	
 	char Nombre[50];
 	float pesoT, longP;
 	
 	
 	cout << "Escriba el nombre del dinosaurio: ";
 	cin.get(Nombre,50);
 	
 	cout << "Ingrese el peso del dinosaurio en toneladas: ";
 	cin >> pesoT;
 	
 	cout << "ingrese la longitud de su dinosaurio en pies: ";
 	cin >> longP;
 	
 	cout << "El peso de tu dinosaurio en kilogramos es: " << pesoT*1000 << endl;
 	cout << "la longitud de tu dinosaurio en metros es: " << longP*.3048 << endl;
 	
 	return (0);
 	
 	
 	
 }
