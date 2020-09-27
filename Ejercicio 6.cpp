/*Escribe un programa que lea de la entrada estandar un caracter e indique
en la salida estandar si el caracter es una vocal minuscula, es una vocal mayuscula
o no es una vocal*/

#include<iostream>
using namespace std;

int main() {
	
	//declarar el caracter
	cout << "\nUsuario, dijite una letra: ";
	char letra_usuario;
	cin >> letra_usuario;
	
	//condicional de casos vocales
	switch (letra_usuario)
	{
		//vocal minuscula
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout << "\n\nUsuario, la letra '" << letra_usuario << "' es una vocal minuscula\n" << endl;
			break;
			
		//vocales matusculas
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout << "\n\nUsuario, la letra '" << letra_usuario << "' es una vocal MAYUSCULA\n" << endl;
			break;
			
		default:
			cout << "\n\nERROR. La letra '" << letra_usuario << "' no es ninguna vocal\n" << endl;
	}
	
	
	system("pause");
	return 0;
}
