#include "iostream"
#include "math.h"
using namespace std;

int main(){
	
	cout << "En este programa podras obtener la distancia entre 2 puntos del plano cartesiano" << endl;
	
	float x1, x2, y1, y2;
	
	cout << "ingresa el valor de x1" << endl;
	cin >> x1;
	
	cout << "ingresa el valor de x2" << endl;
	cin >> x2;
	
	cout << "ingresa el valor de y1" << endl;
	cin >> y1;
	
	cout << "ingresa el valor de y2" << endl;
	cin >> y2;
	
	float Part1 = pow(x1-x2,2);
	float Part2 = pow(y1-y2,2);
	
	cout << "La distancia entre puntos es: " << pow(Part1+Part2,.5);
	
	return (0);
	
	
}
