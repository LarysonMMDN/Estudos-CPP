#include "Main.h"

/* Curso de C++
 * Aula - 01
 * Exercicio de Aprendizagem: 03
 */

 /* Pergunta: Por que ao iniciar o programa no modo depurador ele pula 
  * especificamente para a linha "a = 1"?
  * 
  * Resposta: Porque o depurador pula declara��es que n�o executam l�gica real
  * e pula para a pr�xima linha com efeito vis�vel: a atribui��o a = 1.
  */

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");

	int a, b, c;

	a = 1;
	b = 2;
	c = 3;
}