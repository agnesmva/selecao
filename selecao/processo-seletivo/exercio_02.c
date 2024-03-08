/*
Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado 
pertence ou não a sequência. 
*/
#include <stdio.h>
int isFibonacci(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }

    int a = 0, b = 1, nextTerm;

    while (nextTerm <= num) {
        nextTerm = a + b;
        if (nextTerm == num) {
            return 1;
        }
        a = b;
        b = nextTerm;
    }

    return 0;
}
int main()
{
    int numdigitado, num1 = 0, num2 = 1, proximo;
    printf("Digite um número: ");
    scanf("%d",& numdigitado);
    for (int i = 1; i <= numdigitado; ++i) 
    {
        proximo = num1 + num2;
        num1 = num2;
        num2 = proximo;
    }
    if (isFibonacci(numdigitado)) {
        printf("\n%d faz parte da sequência de Fibonacci.\n", numdigitado);
    } else {
        printf("\n%d não faz parte da sequência de Fibonacci.\n", numdigitado);
    }

    return 0;
}