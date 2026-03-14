#include <iostream>
using namespace std;
int main()
{
	float GAL, LITROS, TOTAL;
	const float PRECIO= 8.20;
	const float CONVERSION=3.785;
	
	cout << "Ingresa los galones surtidos";
	cin >> GAL;
	
	//Convertir a litros
	LITROS= GAL* CONVERSION;
	
	//Calcular total a pagar
	TOTAL= LITROS*PRECIO;
	
	cout << "Total a pagar: $" << TOTAL << endl; 
	
	return 0;
}