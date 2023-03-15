#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void numero(int*, int*); //stores the address

int main(void)
{
    int num1 = 0, num2 = 0, res = 0, resposta = 0;
    numero(&num1, &num2); //loads the value
    res = num1 * num2;


    do{
        printf("%d * %d = ", num1, num2);
        scanf("%d",&resposta);
        if (resposta != res){
            printf("O resultado esta errado! Tente novamente!\n");
        }
        else{
            printf("O resultado esta certo!!!\n");
            return 0;
            if (resposta == 0){
                printf("Foi introduzido o valor 0");
                return EXIT_FAILURE;
            }
        }

    }
    while(resposta != 0);

    return 0;
}

//gera os numeros random
void numero(int *a, int *b){
    srand(time(NULL));
    *a =(rand() % 9 + 1);
    *b =(rand() % 9 + 1);
    return;
}