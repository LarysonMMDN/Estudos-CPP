#include "Main.h"

/* Curso de C++
 * Aula - 01
 * Exercicio de Aprendizagem: 03
 */

 /* Pergunta: Por que ao iniciar o programa no modo depurador ele pula 
  * especificamente para a linha "a = 1"?
  * 
  * Resposta: Porque o depurador pula declarações que não executam lógica real
  * e pula para a próxima linha com efeito visível: a atribuição a = 1.
  */

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");

	int a, b, c;

	a = 1;
	b = 2;
	c = 3;
}