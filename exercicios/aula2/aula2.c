#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char **argv){

    // int if;

    bool condicao = true;

    int a = 1, b = -1;

    bool mercearia = true, temOvos = true;
    int ovosComprados = 0, litrosDeLeiteComprados = 0;

    int caso =  0;

    // _______________________________________________________

    // printf("condicao: %d\n", condicao);

    // _______________________________________________________

    // printf("a == b?: %d\n", a == b);
    // printf("a != b?: %d\n", a != b);
    // printf("a > b?: %d\n", a > b);
    // printf("a < b?: %d\n", a < b);
    // printf("a >= b?: %d\n", a >= b);
    // printf("a <= b?: %d\n", a <= b);
    // printf("a && b?: %d\n", a && b);
    // printf("a || b?: %d\n", a || b);
    // printf("!a: %d\n", !a);
    // printf("!b: %d\n", !b);

    // _______________________________________________________

    // if (a == b) {
	//     printf("%d é igual a %d!\n", a, b);
    // }

    // _______________________________________________________

    // if (a == b) {
	//     printf("%d é igual a %d!\n", a, b);

    // } else {
    //     printf("%d NÃO é igual a %d!\n", a, b);
    // }

    // _______________________________________________________

    // if (a == b) {
	//     printf("%d é igual a %d!\n", a, b);
    // }

    // if (a != b) {
    //     printf("%d NÃO é igual a %d!\n", a, b);

	//     if (a < b) {
    //         printf("%d é menor %d!\n", a, b);
    //     }

    //     if (a > b) {
    //         printf("%d é maior %d!\n", a, b);
    //     }
    // }

    // _______________________________________________________

    // if (a == b) {
    //     printf("%d é igual a %d!\n", a, b);

    // } else if (a != b) {
    //     printf("%d NÃO é igual a %d!\n", a, b);
        
    //     if (a < b) {
    //         printf("%d é menor %d!\n", a, b);

    //     } else if (a > b) {
    //         printf("%d é maior %d!\n", a, b);
    //     }
    // }

    // _______________________________________________________

    // if (mercearia) {

    //     if (temOvos) {
    //         litrosDeLeiteComprados = 6;

    //     } else {
    //         litrosDeLeiteComprados = 1;
    //     }
    // }

    // printf("Ovos comprados: %d\n", ovosComprados);
    // printf("Litros de leite comprados: %d\n", litrosDeLeiteComprados);

    // _______________________________________________________

    // if (mercearia) {

    //     litrosDeLeiteComprados = 1;

    //     if (temOvos) {
    //         ovosComprados = 6;
    //     }
    // }

    // printf("Ovos comprados: %d\n", ovosComprados);
    // printf("Litros de leite comprados: %d\n", litrosDeLeiteComprados);

    // _______________________________________________________

    // a != b ? printf("%d NÃO é igual a %d!\n", a, b) : printf("%d é igual a %d!\n", a, b);

    // _______________________________________________________

    if (a == b) {
        caso = 1;

    } else if (a > b) {

        caso = 2;

    } else {

        caso = 3;
    }

    switch (caso) {
        case 1:
            printf("%d é igual a %d!\n", a, b);
            break;

        case 2:
            printf("%d é maior %d!\n", a, b);
            break;

        case 3:
            printf("%d é menor %d!\n", a, b);
            break;
    }

    // _______________________________________________________

    return 0;
}