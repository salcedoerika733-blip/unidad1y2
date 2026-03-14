#include <iostream>
using namespace std;

int main()
{
	string NOM;
	float PES, LON;
	float PESO_KG, LONG_M;
	
	cout << "Ingresa el nombre del dinosaurio: ";
	getline(cin, NOM);
	
	cout << "Ingresa el peso en libras: ";
	cin >> PES;
	
	cout << "Ingresa la longitud en pies: ";
	cin >> LON;
	
	//Conversiones
	PESO_KG = PES* 1000;
	LONG_M= LON* 0.3047;
	
	cout << "\nNombre: " << NOM << endl;
	cout << "Peso en kilogramos: " << PESO_KG << endl;
	cout << "Longitud en metros: " << LONG_M << endl;
	
	return 0;
}