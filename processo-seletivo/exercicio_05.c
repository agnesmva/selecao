/*
5) Escreva um programa que inverta os caracteres de um string. 


IMPORTANTE: 

	a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código; 

	b) Evite usar funções prontas, como, por exemplo, reverse; 
*/
#include <stdio.h>
int main()
{
    char p[7];
    printf("\nInsira uma palavra com até 7 letras: ");
    fflush(stdin);
    scanf("%s", & p);
    for (int i = 7; i >= 0; i--)
    {
        printf("\nAqui está a palavra invertida: %c\n", p[i]);
    }
    
    return 0;
}
