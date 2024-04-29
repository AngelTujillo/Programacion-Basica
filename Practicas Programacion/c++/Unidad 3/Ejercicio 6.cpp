#include "iostream"
using namespace std;

int main(){
	
	int a,b,c;
	
	cout << "Por favor ingrese el primer numero: " << endl;
	cout << "Ingrese el numero 1: ";
	cin >> a;
	
	cout << "Ingrese el numero 2: ";
	cin >> b;
	
	cout << "ingrese el numero 3: ";
	cin >> c;
	
	if (a>b){
		
		if (a>c){
			if (b>c){
			cout << a << "," << b << ","<< c;
				}
			else { 
			cout << a << ","<< c << "," << b;
			}
			
		}
		else {
		cout << c << ","  << a << "," << b;
			}
	}
	
	else{
		
		if (b>c){
			if (a>c){
				cout << b << "," << a << "," << c;
			}
			else{
				cout << b << "," << c << "," << a;
			}
		}
		else {
			cout << c << "," << b << "," << a;
		}
	}

}
