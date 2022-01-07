#include <iostream>
#include "area.h"


float base;
float altura;
float resultado;

using namespace std;

int main()
{
	cout << "Ingrese la base del triangulo: ";
	cin >> base;
	cout << "Ingrese la altura del triangulo: ";
	cin >> altura;
	resultado=area(base,altura); // Formula para calcular el area del triangulo.
	cout << "El area de su triangulo es: " << resultado << endl;
	cin.ignore();
	cin.get(); // Detenemos el programa con la funcion system("pause");
}
