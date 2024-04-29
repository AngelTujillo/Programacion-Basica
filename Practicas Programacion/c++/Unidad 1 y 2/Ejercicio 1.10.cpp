#include "iostream"
using namespace std;

int main(){
	cout << "Bienvenido al programa que te da la area y perimetro de una figura de 4 lados" <<"\n";
	
	float base, altura;
	
	cout << "ingrese los datos de su figura"<< endl;
	cout << "Base = ";
	cin >> base;
	cout << "Altura = ";
	cin >> altura;
	
	cout << "Su area es: " << (base*altura)<<endl;
	cout << "Su perimetro es: " << (base+altura)*2<<endl;
	
	return (0);
}
