#include "iostream"
#include "string"

using namespace std;

int main()
{
 //Mensaje de bienvenida
cout << "Hola! este prtograma 1.6 Escribe los datos en orden inverso"<< "\n";

//se declaran los numeros que se sumaran (pueden ser decimales)
 int A,B,C,D;
 
 //se pide el primer numero
 cout<< "Por favor ingrese el primer valor A"<< "\n";
 
 //se asigna el primer valor a A
 cin>> A;
 
 //se pide el segundo numero
 cout<< "pot favor ingrese el segundo valor B" <<"\n";
 
 //se asigna el segundo valor a B
 cin >> B;
 
 //se pide el tercer numero
 cout << "por favor ingrese el tercer valor C: " << "\n";
 
 //se asigna el segundo valor a C
 cin >> C;
 
 //se pide el tercer numero 
 cout << "por favor ingrese el tercer valor D: " << "\n";
 
 //se asigna el segundo valor a D
 cin >> D;
 
 //se muestra el resultado
 cout << D << "," << C << "," << B << "," << A;
  
  return 0;
  }