/*Fa¸ca um programa para criptografar uma string qualquer informada pelo usu´ario, substituindo
cada letra da string pela letra do alfabeto em sua respectiva posi¸c˜ao, mas de tr´as para frente.
Por exemplo, se a string digitada for adoro programar em c a sa´ıda deve ser zwlil kiltiznzi
vn x.*/

#include <stdio.h>
#define N 26
#define MAX 255

int main(){

    char alfabetoAoContrario[N];
    char alfabetoNormal[N];

    char alfabeto2 = 'z';
    char alfabeto3 = 'a';

    for (int i = 0; i < N; i++){
        alfabetoAoContrario[i] = alfabeto2;
        alfabeto2--;
        alfabetoNormal[i] = alfabeto3;
        alfabeto3++;
    }

    char str[MAX];

    printf("Digite sua frase: ");
    fgets(str, MAX, stdin);

    int count = 0;
    for (int i = 0; i < MAX; i++){
        if (str[i] == '\0'){
            break;
        }
        count++;
    }

    char straux[count];
    for (int i = 0; i < count; i++){
        int indiceDeTroca = 0;
        for (int j = 0; j < N; j++){
            if (str[i] == alfabetoNormal[j]){
                indiceDeTroca = 26-j;
                break;
            }
        }
        straux[i] = alfabetoAoContrario[indiceDeTroca];
    }

    printf("\n");
    for(int i=0; i<count; i++){
        printf("%c", straux[i]);
    }

    return 0;
}