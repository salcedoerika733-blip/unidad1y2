#include <iostream>
using namespace std;

int main ()
{
	float PREPRO, PAGO, CAMBIO;
	
	cout << "Ingresa el precio del producto: ";
	cin >> PREPRO; 
	
	cout << "Ingresa el pago del cliente: ";
	
	cin >> PAGO;
	
	CAMBIO= PAGO- PREPRO;
	
	cout << "El cambio a entrar es: $" << CAMBIO << endl;
	
	return 0;
}