#include <iostream>
using namespace std;

int main()
{
//Declarar variables
int MAT;
float cal1, cal2, cal3, cal4, cal5;
float PRO;

//Leer matricula y calificaciones
cout << "Ingresa la matricula del alunmo:  ";
cin >> MAT;

cout << "ingresa la calificacion 1: ";
cin >> cal1 ;
cout << "ingresa la calificacion 2: ";
cin >> cal2 ;
cout << "ingresa la cali9ficacion 3: ";
cin >> cal3 ;
cout << "ingresa la calificacion 4: ";
cin >> cal4 ;
cout << "ingresa la calificacion 5: ";
cin >> cal5 ;


//calcular promedio
PRO = (cal1+cal2+cal3+cal4+cal5) / 5;

//Mostrar resultados 
cout << "Matricula del alumno: " << MAT << endl;

cout << "Promedio de calificaciones: " << PRO << endl;

 return 0;
 
}