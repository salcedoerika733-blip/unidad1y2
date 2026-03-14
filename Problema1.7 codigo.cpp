#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float L1, L2, L3;
	float S, Area;
	cout << "Ingresa el lado 1: "; 
	cin >> L1;
	cout << "Ingresa el lado 2: ";
	cin >> L2;
	cout << "Ingresa el lado 3: ";
	cin >> L3;
	
	//Calcular semiperimetro 
	S = (L1+L2+ L3)/ 2;
	
	//Calcular area (formula de Heron)
	Area = sqrt (S*(S-L1)*(S-L2)*(S-L3));
	
	cout << "El area del triangulo es: "
	<< Area << endl;
	
	return 0;
}