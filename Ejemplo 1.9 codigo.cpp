#include <iostream>
using namespace std;

int main ()
{
	int NUM;
	int CUA, CUB;
	
	cout << "ingresa un numero entero positivo: ";
	cin >> NUM;
	
	CUA= NUM* NUM;
	CUB= NUM*NUM*NUM;
	
	cout << "El cuadrado es: " << CUA << endl;
	cout << "El cubo es: " << CUB << endl;
	
	return 0;
}