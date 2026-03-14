#include <iostream>
using namespace std;
int main ()
{
	float BASE, ALTU;
	float SUP, PER;
	
	cout << "Ingresa la base del resctangulo: ";
	cin >> BASE;
	
	cout << "Ingresa la altura del rectangulo: ";
	cin >> ALTU;
	
	//Calcular superficie 
	SUP= BASE* ALTU;
	
	//Calcular perimetro 
	PER= 2*(BASE + ALTU);
	
	cout << "La superficie es: " << SUP << endl;
	cout << "El perimetro es: " << PER << endl;
	
	return 0;
}