#include <iostream>

using namespace std;

void machaca1(int x, int* y)
{
	*y = x;
	return;
}

void machaca2(int& x, int& y)
{
	y = x;
	return;
}

int main(int argc, char **argv)
{
	int a, b;

	cout << "Escribe do datos enteros: " << endl;
	cin >> a >> b;

	int copia;
	cout << "Antes machaca1 a = " << a << ", b = " << b << endl;
	machaca1(a, &b);
	cout << "Despues machaca1 a = " << a << ", b = " << b << endl;

	copia = b;
	cout << "Antes machaca2 a = " << a << ", b = " << b << endl;
	machaca2(a, b);
	cout << "Despues machaca2 a = " << a << ", b = " << b << endl;

	return 0;
}