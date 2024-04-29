#include "iostream"
#include "math.h"
using namespace std;

int main(){
	
	cout << "con este programa podras obtener el area de un triangulo por medio de sus lados" << endl;
	
	float l1, l2, l3, S;
	
	cout << "ingrese su la medida de su primer lado: ";
	cin >> l1;
	
	cout << "ingrese su la medida de su segundo lado: ";
	cin >> l2; 
	
	cout << "ingrese su la medida de su tercer lado: ";
	cin >> l3;
	
	S = (l1+l2+l3)/2;
	
	cout << "El area de su triangulo es: " << endl;
	
	float formula = (S*(S-l1)*(S-l2)*(S-l3));
	
	cout << pow(formula,.5);
	return (0);
}
