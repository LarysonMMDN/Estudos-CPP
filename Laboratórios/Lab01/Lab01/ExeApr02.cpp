#include "Main.h"

/* Curso de C++
 * Aula - 01
 * Exercicio de Aprendizagem: 02
 */

 /* Pergunta: Por que a variável 'b' tem o valor igual a zero no fim da execulção?
  * Resposta: Porque a variavel 'b' recebe como valor a variável 'c' que é iniciada com o valor 0.
  */

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int a, b, c = 0;

	a = 1; 
	b = 2;
	a = c;
	b = a;

	cout << "O valor de 'b' é: " << b << endl;
}