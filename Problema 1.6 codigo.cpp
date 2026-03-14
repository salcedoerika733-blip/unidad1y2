#include <iostream>
using namespace std;

int main()
{
	int DIAS;
	int SEG;
	cout << "Ingresa el numero de dias: ";
	cin >> DIAS;
	
	SEG = DIAS*24*60*60;
	
	cout << "El numero de segundos es: "; 
	cout << SEG << endl;
	 
	 return 0;
}