#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int exemplo = 0;

    printf("Qual exemplo você deseja exibir?: ");
    scanf("%d", &exemplo);
    printf("O exemplo %d será exibido abaixo:\n", exemplo);

    int array0[5];
    int array1[] = {1, 2, 3, 4, 5};

    int numeroDeLinhas = 3, numeroDeColunas = 3;

    switch (exemplo) {
        case 1:

            printf("A primeira posição do array guarda o número: %d\n", array1[0]);

            printf("O tamanho deste array é: %ld\n", sizeof(array1)/sizeof(array1[0]));
            
            break;

        case 2:

            for (int i = 0; i < sizeof(array0)/sizeof(array0[0]); i++) {
                array1[i] = i;
            }

            for (int i = 0; i < sizeof(array0)/sizeof(array0[0]); i++) {
                printf("%d ", array1[i]);
            }

            printf("\n");

            break;

        case 3:

            int entrada = 0;

            for (int i = 0; i < sizeof(array0)/sizeof(array0[0]); i++) {
                scanf("%d", &entrada);
                array1[i] = entrada;
            }

            for (int i = 0; i < sizeof(array0)/sizeof(array0[0]); i++) {
                printf("%d ", array1[i]);
            }

            printf("\n");

            break;

        case 4:

            char str[5] = "Olá!";

            printf("Sentinela: %d\n", str[5]);

            break;

        case 5:

            char str2[20] = "Oi de novo!";

            for (int i = 0; i < sizeof(str2)/sizeof(str2[0]); i++) {
                printf("%c", str2[i]);
            }

            printf("\n");

            break;

        case 6:

            char str3[10] = "maçã", str4[10] = "uva";

            for (int i = 0; i < sizeof(str3)/sizeof(str3[0]); i++) {
                printf("%c", str3[i]);
            }

            printf("\n");

            for (int i = 0; i < sizeof(str4)/sizeof(str4[0]); i++) {
                printf("%c", str4[i]);
            }

            printf("\n");

            for (int i = 0; i < sizeof(str3)/sizeof(str3[0]); i++) {
                str4[i] = str3[i];
            }

            for (int i = 0; i < sizeof(str4)/sizeof(str4[0]); i++) {
                printf("%c", str4[i]);
            }

            printf("\n");

            break;

        case 7:

            char str5[10] = "laranja", str6[10] = "limão";

            for (int i = 0; i < sizeof(str5)/sizeof(str5[0]); i++) {
                printf("%c", str5[i]);
            }

            printf("\n");

            for (int i = 0; i < sizeof(str6)/sizeof(str6[0]); i++) {
                printf("%c", str6[i]);
            }

            printf("\n");

            strcpy(str5, str6);

            for (int i = 0; i < sizeof(str6)/sizeof(str6[0]); i++) {
                printf("%c", str6[i]);
            }

            printf("\n");

            break;

        case 8:

            char str7[20];

            int c;
            while ((c = getchar()) != '\n' && c != EOF);  

            fgets(str7, sizeof(str7), stdin);

            str7[strcspn(str7, "\n")] = '\0';

            printf("A string fornecida foi: \"%s\"\n", str7);

            break;

        case 9:

            char str8[20] = "morango";

            fputs(str8, stdout);

            printf("\n");

            break;

        case 10:

            char str9[20] = "oi!";
            char str10[20] = "olá!";
            char str11[20] = "oi!";

            if (strcmp(str9, str10) == 0) {
                fputs(str9, stdout);
                printf(" == ");
                fputs(str10, stdout);
                printf("\n");
            } else if (strcmp(str9, str11) == 0) {
                fputs(str9, stdout);
                printf(" == ");
                fputs(str11, stdout);
                printf("\n");
            }

            break;

        case 11:
            
            char texto[20] = "aaaaaaaaaaaaaaa";
            printf("%li\n", strlen(texto));

            break;

        case 12:

            int matriz1[][3] = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
            };

            for (int i = 0; i < numeroDeLinhas; i++) {
                printf("{ ");
                for (int j = 0; j < numeroDeColunas; j++) {
                    printf("%d ", matriz1[i][j]);
                }
                printf("}\n");
            }

            break;

        case 13:

            int matriz2[3][3], elemento = 0;

            for (int i = 0; i < numeroDeLinhas; i++) {
                for (int j = 0; j < numeroDeColunas; j++) {
                    scanf("%d", &elemento);
                    matriz2[i][j] = elemento;
                }
            }

            break;

        default:
            printf("Este não é um exemplo válido.\n");
            break;

    }

    // int n;

    // scanf("%d", &n);
    // int array2[n];

    // scanf("%d", &n);
    // array2[n];

    return 0;
}