/*Escriba un programa que lea de la entrada estandar un caracter e indique en la 
alida estandar si el caracter es una vocal minuscula o no*/

//librerias
#include<iostream>
using namespace std;

int main() {
	
	//declarar variable
	cout << "\nIntroduce un caracter: ";
	char caracter;
	cin >> caracter;
	
	switch (caracter)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout << "\n\nLa letra '" << caracter << "' es una vocal minuscula." << "\n\n\n" << endl;
			break;
		default:
			cout << "\n\nLa letra '" << caracter << "' no es una vocal minuscula." << "\n\n\n" << endl;
	}
	
	
	
	system("pause");
	return 0;
}
