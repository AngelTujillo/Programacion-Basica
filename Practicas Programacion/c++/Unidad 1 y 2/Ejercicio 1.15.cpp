#include "iostream"
using namespace std;

int main(){
	
	cout << "En este programa se convierten dias en segundos" << endl;
	
	int Dias;
	
	cout << "Dias que desea convertir; ";
	cin >> Dias;
	
	cout << "Los dias convertidos a segundos son" << endl;
	cout << "dias = " << Dias << endl;
	cout << "segundos = "<< Dias*24*60*60 << endl;
	
	return(0);
}
