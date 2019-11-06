// Parametros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define WHITE "\x1b[37m"

using namespace std;

int invertir(int num);

int main()
{
	int num, resultado;

	cout << RED << "Introduce un numero: " << GREEN;
	cin >> num;
	cout << endl;
	resultado = invertir(num);
	cout << RED << "Numero original; " << GREEN << num << endl;
	cout << endl;
	cout << RED<< "Numero invertido; " << GREEN << resultado << endl << WHITE;
	cout << endl;
	system("pause");
	return 0;
}

int invertir(int num)
{
	int inverso = 0, cifra;
	while (num != 0)
	{
		cifra = num % 10;
		inverso = inverso * 10 + cifra;
		num = num / 10;
	}
	return inverso;
}