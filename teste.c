# include <stdio.h>

int main (){

    int opcao;
    int opcao2;

    printf("Selecione uma opção!");
    printf("1. Opção\n");
    printf("2. Opção 2\n");
    printf("3. Opção 3\n");
    scanf("%d" , &opcao);

    switch (opcao){
    case 1:
        printf("Selecione outra opção:\n");
        printf("1. Opção 2\n");
        printf("2. Opção 3\n");
        break;
    
    default:
        break;
    }




    return 0;
}