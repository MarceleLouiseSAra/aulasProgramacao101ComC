#include<stdio.h>
#include<stdlib.h>

int main(){

    int exercicio = 0;

    printf("Qual exercício você deseja exibir?: ");
    scanf("%d", &exercicio);
    printf("O exercício %d será exibido abaixo:\n", exercicio);

    switch (exercicio) {
        case 1:

            printf("1. Faça um programa que leia 3 valores inteiros e imprima o maior deles.\n");

            int x, y, z;

            printf("Insira um valor inteiro para x: \n");
            scanf("%d", &x);

            printf("Insira umvalor inteiro para y: \n");
            scanf("%d", &y);

            printf("Insira umvalor inteiro para z: \n");
            scanf("%d", &z);

            if ((x>=y)&&(x>=z)) {
                printf("Entre %d, %d e %d, o maior valor é %d", x, y, z, x);  
            }
            
            if ((y>=x)&&(y>=z)) {
                printf("Entre %d, %d e %d, o maior valor é %d", x, y, z, y);    
            }

            if ((z>=x)&&(z>=y)) {
                printf("Entre %d, %d e %d, o maior valor é %d", x, y, z, z);
            }

            break;

        case 2:

            printf("2. Faça um programa que lê três números inteiros e uma operação (outro número inteiro entre 1 e 3). As operações são as seguintes:\n"
                    "a. Maior: mostra o maior dos três números;\n"
                    "b. Menor: mostra o menor dos três números;\n"
                    "c. Média: calcula a média dos três números, com duas casas decimais.\n");

            int a, b, c, operacao;
            float media;

            printf("Insira um valor inteiro para a: \n");
            scanf("%d", &a);

            printf("Insira um valor inteiro para b: \n");
            scanf("%d", &b);

            printf("Insira um valor inteiro para c: \n");
            scanf("%d", &c);

            printf("Qual operação você deseja realizar?: \n");
            scanf("%d", &operacao);

            switch(operacao){
                case 1: 
                    printf("Entre %d, %d e %d, o maior valor é ", a, b, c);

                    if (a>=b&&a>=c) {
                        printf("%d\n", a);
                    }

                    if (b>=a&&b>=c) {
                        printf("%d\n", b);
                    }

                    if (c>=a&&c>=b) {
                        printf("%d\n", c);
                    }
                    
                    break;

                case 2:
                    printf("Entre %d, %d e %d, o menor valor é ", a, b, c);

                    if (a<=b&&a<=c) {
                        printf("%d\n", a);
                    }

                    if (b<=a&&b<=c) {
                        printf("%d\n", b);
                    }

                    if (c<=a&&c<=b) {
                        printf("%d\n", c);
                    }; 
                    
                    break;

                case 3:

                    printf("A média de %d, %d e %d é ", a, b, c);

                    media = ((a+b+c)/3.00);
                    printf("%.2f\n", media); 
                    
                    break;
            }

            break;

        case 3:

            printf("Faça um programa que mostre uma contagem na tela de 233 a 457,"
                   "só que contando de 3 em 3 quando estiver entre 300 e 400 e de 5 em 5 quando não estiver." 
                   "Utilize do {} while ().\n");

            int i;

            for (i=233; i<=300; i+=5) {
                printf("%d\n", i);
            }

            for( i=303; i<=400; i+=3) {
                printf("%d\n", i);
            }

            for (i=402; i<=457; i+=5) {
                printf("%d\n", i);
            }

            break;
        
        case 4:

            printf("Faça um programa que pegue um número do teclado e calcule a soma de todos os números de 1 até ele." 
                   "Use laço for(). Por exemplo, se o usuário fornece a entrada “7”," 
                   "o programa deve imprimir 28, pois 1+2+3+4+5+6+7=28.\n");

            int n = 0, soma = 0, aux = 1;
            printf("Forneça um número inteiro e positivo: \n");
            scanf("%d", &n);

            printf("A soma é ");

            for (int i = n; i >= 1; i--) {
                soma += i;

                printf("%d", aux);
                aux++;

                if (i > 1) {
                    printf(" + ");
                } else {
                    printf(" = ");
                }
            }

            printf("%d\n", soma);

            break;

        default:
            printf("Este não é um exercício válido.\n");
            break;
    }

    return 0;
}