#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contador1(int numero, char nome[1000],char caractere){
    int resultado;
    for (int i = 0; nome[i] != '\0'; i++)
{
    if (caractere == nome[i])
    {
        ++numero;
    } 
}
resultado = numero;
    return(resultado);
}

int main(){

char nome[1000], caractere;
int contador = 0;
int resultado;

printf("Digite uma palavra: ");
fgets(nome, sizeof(nome), stdin);

printf("Digite o caractere que voce quer buscar: ");
scanf("%c", &caractere);

resultado = contador1(contador, nome, caractere);

printf("Quantidade de %c = %d", caractere, resultado);

return 0;
}