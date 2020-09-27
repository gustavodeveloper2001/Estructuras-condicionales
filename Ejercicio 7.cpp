/*escriba un programa que solicite una edad(un entero) e indique en la salida
estandar si la edad introducida esta en el rango [18 - 25]*/

#include<iostream>
using namespace std;

int main() {
	
	//declaracion de l variable edad
	cout << "\n\nIntroduce tu edad: ";
	int edad;
	cin >> edad;
	
	//condicional del rango
	if (edad >= 18 && edad <= 25)
	{
		cout << "\n\n\nLa edad introducida si esta dentro del rango [18 - 25]\n\n" << endl;
	}
	else
	{
		cout << "\n\n\nLa edad introducida no se encuentra dentro del rango [18 - 25]\n\n" << endl;
	}
	
	
	system("pause");
	return 0;
}
