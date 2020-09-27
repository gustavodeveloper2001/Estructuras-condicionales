/* Realice un programa que lea un valor entero y determine
si se trata de un numero par o  impar */

//librerias
#include<iostream>
using namespace std;

int main() {
	
	//declaracion de la variable entera
	cout << "\nDijite un numero: ";
	int number_user;
	cin >> number_user;
	
	//condicional si es par o impar
	if (number_user % 2 == 0)
	{
		//es par
		cout << "\n\nEl numero " << number_user << " es PAR" << "\n\n\n" << endl;
	}
	else
	{
		//numero impar
		cout << "\n\nEl numero " << number_user << " es IMPAR" << "\n\n\n" << endl;
	}
	
	
	system("pause");
	return 0;
}
