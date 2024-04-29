#include "iostream"
#include "string"
#include "math.h"

using namespace std;

int main()
{

cout << "Programa 1.8 Promedio de calificaciones" << "\n";

int matricula;
float a, b, c, d, e;

cout << "introduzca su matricula: " ;
cin >> matricula;

cout << "introduza su primera calificacion: ";
cin >> a;

cout << "introduza su segunda calificacion: ";
cin >> b;

cout << "introduza su tercera calificacion: ";
cin >> c;

cout << "introduza su cuarta calificacion: ";
cin >> d;

cout << "introduza su quinta calificacion: ";
cin >> e;

cout << "su matricula es: " << matricula << endl;
cout << "tu promedio es: " << (a+b+c+d+e)/5 << endl;

cin.get();cin.get();

return 0;
}
	
