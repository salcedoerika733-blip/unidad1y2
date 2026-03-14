#include <iostream>
#include <cmath> //Para usar sqrt y pow
using namespace std;

int main ()
{
	//Declara variables
	float X1, Y1, X2, Y2;
	float D;
	
	//Leer coordenadas
	cout << "ingresa X1: " ;
	cin >> X1;
	cout << "ingresa Y1: ";
	cin >> Y1;
	cout << "ingresa X2: ";
	cin >> X2;
	cout << "ingresa Y2: ";
	cin >> Y2;
	
	//Calcular distancia 
	D = sqrt (pow(X1-X2, 2)+ pow (Y1-Y2, 2));
	
	//Mostrar resultado 
	cout << "La distancia entre los puntos es: " << D << endl;
	
	return 0;
}