// Segundo.cpp - erros de sintaxe
#include <iostream>

using namespace std;
 
int main() {
	int cenouras;  // declara uma variável inteira chamada
	cenouras = 25; // atribui um valor a uma variável

	cout << "Eu tenho " << cenouras << " cenouras." << endl; 
	cenouras = cenouras - 1;  // decrementa a variavel
	cout << "Agora eu tenho " << cenouras << " cenouras." << endl;

	return 0;
}