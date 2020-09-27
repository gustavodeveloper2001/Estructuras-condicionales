/* Comprobar si un numero diitado por el usuario es positivo o negativo y neutro */

#include<iostream>
using namespace std;

int main() {
	
	//declaracion de la variable
	cout << "\nDijite un numero: ";
	int numero_usuario;
	cin >> numero_usuario;
	
	if (numero_usuario > 0)
	{
		//numero positivo mayor que 0
		cout << "\n\nEl numero que dijitaste es positivo\n\n\n" << endl;
	}
	else
	{
		if (numero_usuario < 0)
		{
			//numero negativo menor que 0
			cout << "\n\nEl numero que dijitaste es negativo\n\n\n" << endl;
		}
		else
		{
			//numero neutro == 0
			cout << "\n\nEl numero que dijitaste es neutro\n\n\n" << endl;
		}
	}
	
	
	
	system("pause");
	return 0;
}
