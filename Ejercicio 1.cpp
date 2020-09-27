/* Escriba un programa que lea dos numeros y determine cual de ellos es el mayor */

#include<iostream>
using namespace std;

int main() {
	
	//declaraion de variables
	cout << "\nDijite el primer numero: ";
	int primer_numero;
	cin >> primer_numero;
	
	cout << "\nDijite el seungo numero: ";
	int segundo_numero;
	cin >> segundo_numero;
	
	//estructura condicional
	if (primer_numero != segundo_numero) {
		
		//si se cumple, imprimira esto
		cout << "\n\nYa que son diferentes, podemos proceder...\n\n" << endl;
		
		//se procede a la condicional
		if (primer_numero > segundo_numero) {
			cout << "\nEl numer mayor es el primer numero y es: " << primer_numero << "\n\n\n" << endl;
		}
		else {
			cout << "\nEl numero mayor es el segundo numero y es: " << segundo_numero << "\n\n\n" << endl;
		}
	}
	else{
		cout << "\n\nLos numeros son iguales\n\n\n" << endl;
	}
	
	
	system("pause");
	return 0;
}
