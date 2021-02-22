# 1ELE705_SEM3_Assignm3_EvenOdd_Float
Na representação ponto flutuante (IEEE754) os números são aproximados. Assim não é definida pararidade para estes números, somente para inteiros. Neste problema são definidas algumas regras para a paridade e você deve construir um algoritmo para identificar a paridade de um número.

A representação em números em ponto flutuante utilizada pelo computador é a IEEE754. Nesta os números são aproximações e, portanto, não é possível aplicar a definição de paridade  (par ou ímpar) para esta representação.

Assim, em um computador, a paridade pode ser definida apenas para números inteiros.

No entanto, neste assignment você irá criar um algoritmo para identificar se um número float e par ou ímpar, seguindo algumas regras aqui definidas.
O objetivo aqui é entender as limitações da representação em ponto flutuante.

Para esta pseudo-paridade você deve considerar o arredondamento para duas casas decimais para o número float em análise.

Veja que mesmo arredondando o número para duas casas decimais o número ainda é uma aproximação do valor real. Imprima o número sem limitar a quantidade de casas decimais e veja por si mesmo.

Para o arredondamento considere que de 0..4 o dígito a esquerda será mantido e para valores de 5 a 9 será somado 1 ao dígito da esquerda.

Você deve aplicar seu algoritmo para identificar se os elementos do vetor a[] são pares ou ímpares. Uma string de zeros e uns deve ser impressa, onde cada número desta corresponde à paridade do seu respectivo número no vetor a[].

Ex. para a[] sendo { 1.347, 2.22, 1.559 } a saida deve ser:

"1 0 0"

Para o arredondamento considere que de 0..4 o dígito a esquerda será mantido e para valores de 5 a 9 será somado 1 ao dígito da esquerda, onde '1' corresponde a um número ímpar e '0' a um número par.

Na string estes números são separados por espaços simples e no seu final deve ser colocado um '\n' (pula linha). NÃO HÁ espaço entre o último número e o pula linha.
