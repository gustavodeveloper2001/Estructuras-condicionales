/*Escriba un programa que lea de la entrada estandar tres numeros.
Despues debe leer un cuarto numero e indicar si el numero coincide
con alguno de los introducidos con anterioridad*/

#include<iostream>
using namespace std;

int main() {
	
	//declaracion de las primeras 3 variables
	cout << "\nIntroduzca el primer numero: ";
	int numero1;
	cin >> numero1;
	
	cout << "\nIntroduzca el segundo numero: ";
	int numero2;
	cin >> numero2;
	
	cout << "\nIntroduzca el tercer numero: ";
	int numero3;
	cin >> numero3;
	
	//Declaracion de la cuarta variable
	cout << "\nIntroduzca el cuarto numero: ";
	int numero4;
	cin >> numero4;
	
	//condicionales que si el cuarto numero
	//coincide con alguno de los 3 anteriores
	if (numero4 == numero1)
	{
		cout << "\n\nEl primer numero y cuarto numero coinciden\n\n" << endl;
	}
	else
	{
		if(numero4 == numero2)
		{
			cout << "\n\nEl segundo numero y cuarto numero coinciden\n\n" << endl;
		}
		else
		{
			if (numero4 == numero3)
			{
				cout << "\n\nEl tercer numero y cuarto numero coinciden\n\n" << endl;
			}
			else
			{
				cout << "\n\nERROR. No coincide con ningun numero\n\n" << endl;
			}
		}
	}
	
	
	system("pause");
	return 0;
}
