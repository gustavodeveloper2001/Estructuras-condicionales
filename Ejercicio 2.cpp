/* Escriba un programa que lea tres variables y determine cual de ellos es el mayor */

//
//librerias
//
#include<iostream>
using namespace std;

int main() {
	
	//
	//declaracion variables
	//
	cout << "\nIntroduzca el primer numero: ";
	int x;
	cin >> x;
	
	cout << "\nIntroduzca el segundo numero: ";
	int y;
	cin >> y;
	
	cout << "\nIntroduzca el tercer numero: ";
	int z;
	cin >> z;
	
	
	//condicionales para determinar cual es el mayor
	//determina que el mayor es x
	if ((x > y && y > z) || (x > z && z > y))
	{
		//el numero mayor es x
		cout << "\n\nEl numero mayor es: " << x << "\n\n\n" << endl;
	}
	else
	{
		//determina que el mayor es y
		if ((y > x && x > z) || (y > z && z > x)) 
		{
			//el numero mayor es y
			cout << "\n\nEl numeroo mayor es: " << y << "\n\n\n" << endl;
		} 
		else 
		{
			//determina que el mayor es z
			if ((z > x && x > y) || (z > y && y > x)) 
			{
				//el numero mayor es z
				cout << "\n\nEl numero mayor es: " << z << "\n\n\n" << endl;
			}
		}
	}	
	
	//creado por: 
	//GUSTAVO A. VASQUEZ D.
	//12/06/19	
	

	system("pause");
	return 0;
}
