#include "iostream"
using namespace std;

int main()
{
	float Numero;
	
	cout << "Escriba el numero al que desea encontrar su cuadrado y su cubo"<< "\n";
	cin >> Numero;
	
	cout << "sus resultados son: ";
	cout << "Cuadrado = " << (Numero*Numero) << endl;
	cout << "Cubo = " << (Numero*Numero*Numero) << endl;
}
