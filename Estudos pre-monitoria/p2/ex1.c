/* Em um evento, existem quatro opções de inscrição em minicursos, conforme mostra a Tabela 1.
Faça um prgrama que receba inscrição de vários alunos com o número de matrícula, a opção de inscrição
(1, 2, 3, 4) e se é aluno de escola pública (S - sim ou N - Não); neste caso, aluno oriundo de escola
pública têm direito a um desconto de 50% sobre a taxa de inscrição. O programa deverá mostrar:

a) o valor a ser pago por cada aluno;
b) o total arrecadado com os minicursos; e
c) o total de alunos matriculados em cada opção de minicursos.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 0;

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);
    printf("\n");

    int Alunos[n];
    int inscricoes[n];
    char publicPrivada[n];
    for (int i = 0; i < n; i++){
        printf("Digite a matricula do aluno: ");
        scanf("%d", &Alunos[i]);

        printf("Digite a inscricao do aluno %d: ", Alunos[i]);
        scanf("%d", &inscricoes[i]);

        printf("O aluno %d eh de escola publica ou privada?(S-sim ou N-nao): ", Alunos[i]);
        setbuf(stdin, NULL);
        scanf("%c", &publicPrivada[i]);
    }

    float soma = 0;
    int i = 0;
    int escolha1 = 0, escolha2 = 0, escolha3 = 0, escolha4 = 0;
    for (int i = 0; i < n; i++){
        float preco = 0;
        switch (inscricoes[i]){
        case 1:
            preco = 50;
            escolha1++;
            break;
        case 2:
            preco = 65;
            escolha2++;
            break;
        case 3:
            preco = 80;
            escolha3++;
            break;
        case 4:
            preco = 95;
            escolha4++;
            break;
        default:
            printf("Inscricao invalida do aluno %d.\n", Alunos[i]);
            continue;
        }
        if (publicPrivada[i] == 'S'){
            preco = preco * 0.5;
        }
        printf("Aluno %d deve pagar %.2f reais.\n", Alunos[i], preco);
        soma += preco;
    }

    printf("\nTotal arrecadado: %.2f\n", soma);
    printf("Total de alunos em cada inscricao: \nEscolha1 = %d\nEscolha2 = %d\nEscolha3 = %d\nEscolha4 = %d\n", escolha1, escolha2, escolha3, escolha4);
    return 0;
}
