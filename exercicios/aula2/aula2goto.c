#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char **argv){

    int n;
    
    printf("Forneça um número: \n");
    scanf("%d", &n);

  	if (n % 2 == 0) {
      
        goto par;

    } else {
      
        goto impar;

    }

    par:
        printf("%d é um número par!\n", n);
        return 0;
        
    impar:
        printf("%d é um número ímpar!\n", n);
        return 0;
}