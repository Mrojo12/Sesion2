#include <iostream>

using namespace std;

int cuadPorValor(int a)
{
	return a = a * a;
}

void cuadPorInd(int* a)
{
	*a = (*a) * (*a);
}

void cuadPorRef(int& a)
{
	a = a * a;
}

int main(int argc, char **argv)
{
	int a = 5, b = 6, c = 7;

	cuadPorValor(a);
	cuadPorInd(&b); // & le dices a donde debe apuntar el puntero
	cuadPorRef(c); // le pasamos directamente el valor de la dirección de memoria 

	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

	return 0;
}

