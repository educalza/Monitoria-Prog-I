/*Faça um programa que receba uma string de no máximo 255 caracteres e, em seguida implemente funções que:

a) Receba como parâmetro a string, calcula e retorna o total de palavras contidas na string.
b) Receba como parâmetro a string e imprime a última palavra da string.
c) Receba como parâmetro a string, calculae retorna a porcentagem de vogais em relação ao total de caracteres na string.
d) Receba como parâmetro a string e dois valores representando duas posições na string, mostre a substring (caracteres) contida entre os dois valores informados pelo usuárioo.
e) Receba como parâmetro a string e o valor de deslocamento 'n' e retorna a string por um caractere deslocado 'n' posições no alfabeto, onde 'n' é um número inteiro fornecido pelo usuário.
Por exemplo, se string = "programa em c" e n=5, então string criptografada = "uwtlwfrf jr h". 

OBS: Não usar a biblioteca <string.h>*/

#include <stdio.h>
#define N 255

int aCalculaLetra(char str[]){
    int count=0;
    while(str[count]!='\0'){
        count++;
    }
    return count;
}

void bImprimeUltimPalavraString(char str[]){
    for(int )
}

int main(){

    char str[N];

    printf("Digite a string: ");
    fgets(str, N, stdin);

    printf("Numero de letras na strin: %d\n", aCalculaLetra(str)-1);
}