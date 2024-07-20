/*Fa¸ca um programa para criptografar uma string qualquer informada pelo usu´ario, substituindo
cada letra da string pela letra do alfabeto em sua respectiva posi¸c˜ao, mas de tr´as para frente.
Por exemplo, se a string digitada for adoro programar em c a sa´ıda deve ser zwlil kiltiznzi
vn x.*/

#include <stdio.h>
#include <string.h>
#define N 26
#define MAX 255

int main()
{

    char str[MAX];

    printf("Digite uma frase: ");
    fflush(stdin);
    fgets(str, MAX, stdin);

    char strCriptografada[MAX];
    for(int i=0; str[i]!='\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){

        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){

        }
        else{
            strCriptografada[i] = str[i];
        }
    }
}