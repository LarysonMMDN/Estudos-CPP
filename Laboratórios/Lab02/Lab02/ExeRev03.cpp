#include "Main.h"

/* Curso de C++
 * Aula - 02
 * Exercicio de Revisão: 03
 */

/* Pergunta 01: O programe exibe corretamente os acentos?
 * Resposta 01: Não, na saída os caracteres sai bugada e errada.
 * 
 * Pergunta 02: E o nome lido pelo o teclado pode conter acentos?
 * Resposta 02: Não, na saída os caracteres lida pelo o teclado 
 * tambem sai bugada e errada.
 */

int main() {
	// exibindo uma frase que contém acentos
	cout << "Acentuação é possível?" << endl;

	// leia una palavra que contém acentos
	char palavra[40];
	cin >> palavra;

	// Exibindo o que foi lido
	cout << palavra << endl;
}