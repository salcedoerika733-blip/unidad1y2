#include <iostream>
using namespace std;
int main ()
{
	int A, B;
	float RES;
	
	cout << "ingresa el vaolor para A: ";
	cin >> A;
	
	cout << "ingresa el valor de B: ";
	cin >> B;
	
	RES= (A+B) * (A+B)/3.0;
	
	cout << "eL resultado es: " << RES << endl;
	
	return 0;
	
}