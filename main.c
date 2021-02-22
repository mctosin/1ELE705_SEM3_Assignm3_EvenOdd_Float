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

	// N�o modifique o c�digo acima

	// A representa��o em n�meros em ponto flutuante utilizada
	// pelo computador � a IEEE754. Nesta os n�meros s�o aproxima��es
	// e, portanto, n�o � poss�vel aplicar a defini��o de paridade 
	// (par ou �mpar) para esta representa��o
	// Assim, em um computador, a paridade pode ser definida 
	// apenas para n�meros inteiros
	// No entanto, neste assignment voc� ir� criar um algoritmo para
	// identificar se um n�mero float e par ou �mpar, seguindo algumas
	// regras aqui definidas.
	// O objetivo aqui � entender as limita��es da representa��o em 
	// ponto flutuante.
	// Para esta pseudo-paridade voc� deve considerar o arredondamento 
	// para duas casas decimais para o n�mero float em an�lise.
	// Veja que mesmo arredondando o n�mero para duas casas decimais 
	// o n�mero ainda � uma aproxima��o do valor real. Imprima o n�mero
	// sem limitar a quantidade de casas decimais e veja por si mesmo.
	// Voc� deve aplicar seu algoritmo para identificar se os elementos
	// do vetor a[] s�o pares ou �mpares. Uma string de zeros e uns deve
	// ser impressa, onde cada n�mero desta corresponde � paridade do 
	// seu respectivo n�mero no vetor a[]
	// Ex. para a[] sendo { 1.347, 2.22, 1.559 } a saida deve ser:
	// "1 0 0"
	// onde '1' corresponde a um n�mero �mpar e '0' a um n�mero par
	// Na string estes n�meros s�o separados por espa�os simples e no
	// seu final deve ser colocado um '\n' (pula linha). N�O H�
	// espa�o entre o �ltimo n�mero e o pula linha.


	
	// Crie a sa�da para o teste autom�tico abaixo

	

	// N�o modifique o c�digo abaixo

	return 0;
}

