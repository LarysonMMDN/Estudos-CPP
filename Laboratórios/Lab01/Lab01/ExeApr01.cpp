#include "Main.h"

/* Curso de C++
 * Aula - 01
 * Exercicio de Aprendizagem: 01
 */

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");

	float n1{}, n2{}, n3{}, media{};

	cout << "Calculando a média" << endl;
	cout << "------------------" << endl;
	cout << endl;
	cout << "Nota 1: ";
	cin >> n1;
	cout << "Nota 2: ";
	cin >> n2;
	cout << "Nota 3: ";
	cin >> n3;
	cout << endl;
	media = (n1 + n2 + n3) / 3;
	cout << "As média da notas: " << media << endl;
}
