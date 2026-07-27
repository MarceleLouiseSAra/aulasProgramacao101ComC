#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char **argv){

    int exercicio = 0;

    printf("Qual exercício você deseja exibir?: ");
    scanf("%d", &exercicio);
    printf("O exercício %d será exibido abaixo:\n", exercicio);

    switch (exercicio) {
        case 1:

            printf("1. Faça um programa para ler um vetor x[] de 10 elementos e gerar um outro vetor "
                   "com esses 10 elementos em ordem inversa. Por exemplo, se x[] = {3, 5, 2, 8, 4}, deve ser gerado um vetor "
                   "y[] = {4, 8, 2, 5, 3}. Os valores em x são lidos pelo teclado. Cada posição do vetor deve "
                   "ser impressa em uma linha através do “\n”.\n");

            int array[10];
            int yarra[10];

            int elemento = 0;

            for (int i = 0; i < 10; i++) {
                scanf("%d", &elemento);
                array[i] = elemento;
                yarra[i] = 0;
            }

            for (int i = 0; i < 10; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");

            int j = 0;
            for (int i = 9; i >= 0; i--) {
                yarra[j] = array[i];
                j++;
            }

            for (int i = 0; i < 10; i++) {
                printf("%d ", yarra[i]);
            }
            printf("\n");
            
            break;

        case 2:

            printf("2. Faça um programa que substitua a primeira ocorrência do caractere C1 na "
                   "string S pelo caractere C2. A entrada consiste em uma string, o caractere "
                   "C1 e o caractere C2, nessa ordem. Seu programa deve imprimir a string após a substituição.\n");

            char C1, C2, str2[20];
            scanf(" %c", &C1);
            scanf(" %c", &C2);

            int c;
            while ((c = getchar()) != '\n' && c != EOF);        

            fgets(str2, sizeof(str2), stdin);

            for (int i = 0; str2[i] != '\0'; i++) {
                if (str2[i] == C1) {
                    str2[i] = C2;
                    break;
                }
            }

            printf("%s\n", str2);

            break;

        case 3:

            bool substring = false;

            printf("Faça um programa que verifica se uma string S2 é substring de uma string S1. "
                   "Em caso positivo, seu programa deve imprimir “É substring” e, em caso negativo, "
                   "“Não é substring”. Observe que a saída deve ser exatamente o que foi solicitado "
                   "acima, com a primeira letra maiúscula e acentuação gráfica. A entrada consiste de "
                   "duas string, uma em cada linha, as quais corresponderão, respectivamente, a S1 e S2.\n");

            char str3[20], str4[20], aux[20] = "";   

            printf("Digite a primeira string: ");
            scanf(" %[^\n]", str3);

            // 2. Lê a segunda frase
            printf("Digite a segunda string: ");
            scanf(" %[^\n]", str4);

            fputs(str3, stdout);
            fputs(str4, stdout);

            for (int i = 0; str3[i] != '\0'; i++) {

                int j = 0;
        
                while (str4[j] != '\0' && str3[i + j] != '\0' && str3[i + j] == str4[j]) {
                    j++;
                }

                if (str4[j] == '\0') {
                    substring = true;
                    break;
                }
            }

            if (substring) {
                printf("É substring\n");
            } else {
                printf("Não é substring\n");
            }

            break;

        default:
            printf("Este não é um exemplo válido.\n");
            break;

    }

    return 0;
}