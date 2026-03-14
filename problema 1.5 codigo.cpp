#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float RADIO, ALTU;
	float  VOL, AREA;
	const float PI= 3.1416;
	
	cout << "ingresa el radio del cilindro: ";
	cin >> RADIO;
	
	cout << "ingresa la altura del cilindro: ";
	cin >> ALTU;
	
	//Calcular volumen 
	VOL = PI*pow(RADIO, 2)*ALTU;
	
	//Calcular area total
	AREA= 2*PI*RADIO*ALTU;
	
	cout << "El volumen es: " << VOL << endl;
	
	cout << "El area total es: " << AREA << endl;
	
	return 0;
}