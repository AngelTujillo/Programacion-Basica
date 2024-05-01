#include "iostream"
using namespace std;

int main(){
	
	int Entero;
	cout << "Escriba su numero: ";
	cin >> Entero;
	
	if (Entero%2==0){
		
		cout << "Su numero es par" << endl;
	
	}
	else {
		
		if (Entero%3 == 0){
			
			cout << "Su numero es impar divisible entre 3 " << endl;
		}
		
		else {
			
			cout << "su numero es impar no divisible entre 3" << endl;
		}
	}
	system("pause");
	return (0);
}
