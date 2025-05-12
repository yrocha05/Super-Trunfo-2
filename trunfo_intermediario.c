#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {


    printf(" ** SEJA BEM VINDO AO JOGO SUPER TRUNFO ** ");


    //variavel de comparação
    int comparacaoJogador;


    // Variaveis da 1 carta
    char estado [20] , sigla [5] , nome_cidade [30] ;
    int  populacao ;
    float area ;
    float pib ; 
    float pib_p1;
    float densidade1;
    int ponto_turistico;
    float s_poder1;
    float s_poder2;


    //Variaveis da 2 carta

    char estado2 [20] , sigla2 [10] , nome_cidade2 [30] ;
    int  populacao2 ;
    float area2 ;
    float pib2 ; 
    int ponto_turistico2;
    float densidade2;
    float pib_p2;

   //Questionário para cadastro da primeira carta 

    printf("Carta 01\n");
    printf("Qual é o Estado da sua Carta? \n");
    scanf("%s" , &estado);
    
    printf("Qual é a Sigla da carta? \n");
    scanf("%s" , &sigla);

    printf("Qual é o Nome da Cidade? \n");
    scanf("%s" , &nome_cidade);
    
    printf("Qual é a Populacao? \n");
    scanf("%d" , &populacao);

    printf("Qual é a área? \n");
    scanf("%f" , &area);

    printf("Qual é o PIB? \n");
    scanf("%f" , &pib);

    printf("Quantos Pontos Turisticos ? \n");
    scanf("%d" , &ponto_turistico);

    //adição avançado - Pib per capita e densidade populacional

    pib_p1 =  ( pib / populacao );
    densidade1 =  ( populacao / area ) * 1;

    //Questionário para cadastro da segunda carta 


    printf("Carta 02\n");
    printf("Qual é o Estado da sua Carta? \n");
    scanf("%s" , &estado2);
    
    printf("Qual é a Sigla da carta? \n");
    scanf("%s" , &sigla2);

    printf("Qual é o Nome da Cidade? \n");
    scanf("%s" , &nome_cidade2);
    
    printf("Qual é a Populacao? \n");
    scanf("%d" , &populacao2);

    printf("Qual é a área? \n");
    scanf("%f" , &area2);

    printf("Qual é o PIB? \n");
    scanf("%f" , &pib2);

    printf("Quantos Pontos Turisticos ? \n");
    scanf("%d" , &ponto_turistico2);

   

    //adição intermediaria - Pib per capita e densidade populacional

    pib_p2 =  ( pib2 / populacao2);
    densidade2 =  (populacao2 / area2) * 1;

    // Adição avançada

    s_poder1 = (populacao + pib + ponto_turistico + area + densidade1 );
    s_poder2 = (populacao2 + pib2 + ponto_turistico2 + area2 + densidade2 );

    // Exposição de dados das cartas

/*

 printf("Aqui estão as informações das cartas!!\n \n");


    printf("Carta 01 \n");
    printf("O Estado é : %s\n" , estado);
    printf("A Sigla é : %s\n" , sigla);
    printf("A Cidade é : %s\n" , nome_cidade);
    printf("A população é : %d\n" , populacao);
    printf("A área é : %f Km² \n" , area);
    printf("O PIB é : %f\n" , pib);
    printf("A quantidade de ponto turístico é : %d\n" , ponto_turistico);
    printf("Densidade Populacional : %.3f\n" , densidade1);
    printf("PIB per Capita : %.3f\n" , pib_p1);
    printf("Super Poder : %.3f\n" , s_poder1);

    printf("Carta 02 \n");
    printf("O Estado é : %s\n" , estado2);
    printf("A Sigla é : %s\n" , sigla2);
    printf("A Cidade é : %s\n" , nome_cidade2);
    printf("A população é : %d\n" , populacao2);
    printf("A área é : %f Km² \n" , area2);
    printf("O PIB é : %f\n" , pib2);
    printf("A quantidade de ponto turístico é : %d\n" , ponto_turistico2);
    printf("Densidade Populacional : %.3f\n" , densidade2);
    printf("PIB per Capita : %.3f\n" , pib_p2);
    printf("Super Poder : %.3f\n" , s_poder2);


*/
    // Comparação cartas 

    printf("Escolha qual atributo você quer comparar:\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos Turísticos\n");
    printf("5.Super Poder\n");
    scanf("%d", &comparacaoJogador);

    switch (comparacaoJogador){
    case 1:
        if (populacao > populacao2){
            printf("Parabéns, você Ganhou!!! \n");
            printf("Carta 1 : %d /  Carta 2 : %d" ,populacao, populacao2);
        } else if (populacao == populacao2){
            printf("Você Empatou!");
        }else {
            printf ("Infelizmente você perdeu \n");
            printf("Carta 1 : %d /  Carta 2 : %d" ,populacao, populacao2);           
        }
        break;
    case 2:
        if (area > area2){
            printf("Parabéns, você Ganhou!!! \n");
            printf("Carta 1 : %f /  Carta 2 : %f" ,area, area2);            
        } else if (area == area2){
            printf("Você Empatou!");
        }else {
            printf ("Infelizmente você perdeu \n");
            printf("Carta 1 : %f /  Carta 2 : %f" ,area, area2);            
        } 
        break;       
    case 3:
        if (pib > pib2){
            printf("Parabéns, você Ganhou!!! \n");
            printf("Carta 1 : %f /  Carta 2 : %f" ,pib, pib2);            
        } else if (pib == pib2){
            printf("Você Empatou!");
        }else {
            printf ("Infelizmente você perdeu \n");
            printf("Carta 1 : %f /  Carta 2 : %f" ,pib, pib2);            
        }
        break;
    case 4:
        if (ponto_turistico > ponto_turistico2){
            printf("Parabéns, você Ganhou!!! \n");
            printf("Carta 1 : %d /  Carta 2 : %d" ,ponto_turistico,ponto_turistico2);            
         } else if (ponto_turistico == ponto_turistico2){
            printf("Você Empatou!");
        }else {
            printf ("Infelizmente você perdeu \n");
            printf("Carta 1 : %d /  Carta 2 : %d" ,ponto_turistico,ponto_turistico2);            
        }  
        break;
    case 5:
        if (densidade1 < densidade2){
            printf("Parabéns, você Ganhou!!! \n");
            printf("Carta 1 : %.2f/  Carta 2 : %.2f" ,densidade1,densidade2);            
        } else if (densidade1 == densidade2){
            printf("Você Empatou!");
        }else {
            printf ("Infelizmente você perdeu \n");
            printf("Carta 1 : %.2f/  Carta 2 : %.2f" ,densidade1,densidade2);            
        }
        break;

    
    default:

        printf ("Opção inválida");
        break;
    }



// População
//Area
// PIB
// Pontos turisticos
// Densidade Pop - Ganha a menor
// Super Poder



return 0;
    
}