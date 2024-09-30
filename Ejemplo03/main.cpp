#include <iostream>

using namespace std;

void machaca1(int x, int* y)
{
	*y = x;
	return;
}

void machaca2(int x, int& y)
{
	// Da igual el valor de x, ya que es una copia, no cogemos el valor real
	// El valor de y es el real, es el que le pasamos, si lo modificamos se modifica el valor real
	y = x;
	return;
}

int main(int argc, char **argv)
{
	int a, b;

	cout << "Escribe do datos enteros: " << endl;
	cin >> a >> b;

	int copia = b;
	cout << "Antes machaca1 a = " << a << ", b = " << b << endl;
	machaca1(a, &b); // & le pasamos la dirección de memoria
	cout << "Despues machaca1 a = " << a << ", b = " << b << endl;

	b = copia;
	cout << "Antes machaca2 a = " << a << ", b = " << b << endl;
	machaca2(a, b);
	cout << "Despues machaca2 a = " << a << ", b = " << b << endl;

	return 0;
}