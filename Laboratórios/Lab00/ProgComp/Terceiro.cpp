#include <iostream>

using namespace std;

int main() {
	int dias; // Declara uma variavel inteira
	cout << "Numeros de dias";
	cin >> dias;  // Lê um valor para a variavel

	int horas = dias * 24;
	cout << dias << " dias tem " << horas << " horas." << endl;
	system("pause");
	return 0;
}