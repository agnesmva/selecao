/*
5) Escreva um programa que inverta os caracteres de um string. 


IMPORTANTE: 

	a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código; 

	b) Evite usar funções prontas, como, por exemplo, reverse; 
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char p[30], inv[30];
    int i, j = 0;

    printf("\nInsira uma palavra com até 30 letras: ");
    fflush(stdin);
    scanf("%s", &p);
    for (int i = strlen(p)-1; i >= 0; i--)
    {
        inv[j] = p[i];
        j++;
    }
    inv[j]='\0'; // finalizar o string

    printf("\nPalavra: %s\n", p);
    printf("\nInvertida: %s\n", inv);
    
    return 0;
}
