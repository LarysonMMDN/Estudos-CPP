#include "Main.h"

/* Curso de C++
 * Aula - 02
 * Exercicio de Revis�o: 03
 */

/* Pergunta 01: O programe exibe corretamente os acentos?
 * Resposta 01: N�o, na sa�da os caracteres sai bugada e errada.
 * 
 * Pergunta 02: E o nome lido pelo o teclado pode conter acentos?
 * Resposta 02: N�o, na sa�da os caracteres lida pelo o teclado 
 * tambem sai bugada e errada.
 */

int main() {
	// exibindo uma frase que cont�m acentos
	cout << "Acentua��o � poss�vel?" << endl;

	// leia una palavra que cont�m acentos
	char palavra[40];
	cin >> palavra;

	// Exibindo o que foi lido
	cout << palavra << endl;
}