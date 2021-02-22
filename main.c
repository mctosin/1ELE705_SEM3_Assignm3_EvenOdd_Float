#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv) {

	float a[1000];
	int i, Q_elem_a;

	for (i = 1; i < argc; i++) {
		a[i - 1] = atof(argv[i]);
		fprintf(stderr, "%.3f ", a[i - 1]);
	}
	fprintf(stderr, "\n");
	for (i = 1; i < argc; i++) {
		a[i - 1] = atof(argv[i]);
		fprintf(stderr, "%.2f ", a[i - 1]);
	}
	fprintf(stderr, "\n");
	Q_elem_a = argc - 1;

	// Não modifique o código acima

	// A representação em números em ponto flutuante utilizada
	// pelo computador é a IEEE754. Nesta os números são aproximações
	// e, portanto, não é possível aplicar a definição de paridade 
	// (par ou ímpar) para esta representação
	// Assim, em um computador, a paridade pode ser definida 
	// apenas para números inteiros
	// No entanto, neste assignment você irá criar um algoritmo para
	// identificar se um número float e par ou ímpar, seguindo algumas
	// regras aqui definidas.
	// O objetivo aqui é entender as limitações da representação em 
	// ponto flutuante.
	// Para esta pseudo-paridade você deve considerar o arredondamento 
	// para duas casas decimais para o número float em análise.
	// Veja que mesmo arredondando o número para duas casas decimais 
	// o número ainda é uma aproximação do valor real. Imprima o número
	// sem limitar a quantidade de casas decimais e veja por si mesmo.
	// Você deve aplicar seu algoritmo para identificar se os elementos
	// do vetor a[] são pares ou ímpares. Uma string de zeros e uns deve
	// ser impressa, onde cada número desta corresponde à paridade do 
	// seu respectivo número no vetor a[]
	// Ex. para a[] sendo { 1.347, 2.22, 1.559 } a saida deve ser:
	// "1 0 0"
	// onde '1' corresponde a um número ímpar e '0' a um número par
	// Na string estes números são separados por espaços simples e no
	// seu final deve ser colocado um '\n' (pula linha). NÃO HÁ
	// espaço entre o último número e o pula linha.


	
	// Crie a saída para o teste automático abaixo

	

	// Não modifique o código abaixo

	return 0;
}

