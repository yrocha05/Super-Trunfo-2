#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {


    printf(" ** SEJA BEM VINDO AO JOGO SUPER TRUNFO ** ");

    //variavel de opção
    int opcao1Jogador1;
    int opcao2Jogador1;
    int opcao1Jogador2;
    int opcao2Jogador2;





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


    //variavel de comparação
    float resultadoJogador1;
    float resultadoJogador2;


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
    // Comparação cartas jogador 1

    printf("Escolha qual atributo você quer comparar:\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos Turísticos\n");
    printf("5.Super Poder\n");
    scanf("%d", &opcao1Jogador1);

    switch (opcao1Jogador1){
    case 1: // população



        printf("Você Selecionou População!\n");
        printf("Selecione outro atributo!\n");
        printf("2.Área\n");
        printf("3.PIB\n");
        printf("4.Pontos Turísticos\n");
        printf("5.Super Poder\n");
            scanf("%d", &opcao2Jogador1);

        switch (opcao2Jogador1)
        {
        case 2:
        printf("Você Selecionou Área!\n");

            resultadoJogador1 = populacao + area;

            break;
        case 3:
        printf("Você Selecionou PIB!\n");

            resultadoJogador1 = populacao + pib;
        
            break;
        case 4:
        printf("Você Selecionou Pontos Turísticos!\n");

            resultadoJogador1 = populacao + ponto_turistico;


            break;
        case 5:
        printf("Você Selecionou Super Poder!\n");

            resultadoJogador1 = populacao + s_poder1;

            break;       
        
        default:

        printf("Opção Inválida!\n");
            break;
        }
        
    break;

    case 2: // area



        printf("Você Selecionou Área!\n");
        printf("Selecione outro atributo!\n");
        printf("1.População\n");
        printf("3.PIB\n");
        printf("4.Pontos Turísticos\n");
        printf("5.Super Poder\n");
            scanf("%d", &opcao2Jogador1);

        switch (opcao2Jogador1)
        {
        case 1:
        printf("Você Selecionou População!\n");

            resultadoJogador1 = populacao + area;

            break;
        case 3:
        printf("Você Selecionou PIB!\n");

            resultadoJogador1 = area + pib;
        
            break;
        case 4:
        printf("Você Selecionou Pontos Turísticos!\n");

            resultadoJogador1 = area + ponto_turistico;

            break;
        case 5:
        printf("Você Selecionou Super Poder!\n");

            resultadoJogador1 = area + s_poder1;

            break;       
        
        default:

        printf("Opção Inválida!\n");
            break;
        }
        
    break;
        

    case 3: // pib



        printf("Você Selecionou PIB!\n");
        printf("Selecione outro atributo!\n");
        printf("1.População\n");
        printf("2.Área\n");
        printf("4.Pontos Turísticos\n");
        printf("5.Super Poder\n");
            scanf("%d", &opcao2Jogador1);

        switch (opcao2Jogador1)
        {
        case 2:
        printf("Você Selecionou Área!\n");

            resultadoJogador1 = pib + area;

            break;
        case 1:
        printf("Você Selecionou População!\n");

            resultadoJogador1 = populacao + pib;
        
            break;
        case 4:
        printf("Você Selecionou Pontos Turísticos!\n");

            resultadoJogador1 = pib + ponto_turistico;


            break;
        case 5:
        printf("Você Selecionou Super Poder!\n");

            resultadoJogador1 = pib + s_poder1;

            break;       
        
        default:

        printf("Opção Inválida!\n");
            break;
        }
        
    break;

    case 4: // pontos turisticos


        
        printf("Você Selecionou Pontos Turísticos!\n");
        printf("Selecione outro atributo!\n");
        printf("1.População\n");
        printf("2.Área\n");
        printf("3.PIB\n");
        printf("5.Super Poder\n");
            scanf("%d", &opcao2Jogador1);

        switch (opcao2Jogador1)
        {
        case 2:
        printf("Você Selecionou Área!\n");

            resultadoJogador1 = ponto_turistico + area;

            break;
        case 3:
        printf("Você Selecionou PIB!\n");

            resultadoJogador1 = ponto_turistico+ pib;
        
            break;
        case 1:
        printf("Você Selecionou População!\n");

            resultadoJogador1 = populacao + ponto_turistico;


            break;
        case 5:
        printf("Você Selecionou Super Poder!\n");

            resultadoJogador1 = ponto_turistico + s_poder1;

            break;       
        
        default:

        printf("Opção Inválida!\n");
            break;
        }
        

    break;

    case 5: // s poder


        printf("Você Selecionou Super Poder!\n");
        printf("Selecione outro atributo!\n");
        printf("1.População\n");
        printf("2.Área\n");
        printf("3.PIB\n");
        printf("4.Pontos Turísticos\n");
            scanf("%d", &opcao2Jogador1);

        switch (opcao2Jogador1)
        {
        case 2:
        printf("Você Selecionou Área!\n");

            resultadoJogador1 = s_poder1 + area;

            break;
        case 3:
        printf("Você Selecionou PIB!\n");

            resultadoJogador1 = s_poder1 + pib;
        
            break;
        case 4:
        printf("Você Selecionou Pontos Turísticos!\n");

            resultadoJogador1 = s_poder1 + ponto_turistico;


            break;
        case 1:
        printf("Você Selecionou População!\n");

            resultadoJogador1 = populacao + s_poder1;

            break;       
        
        default:

        printf("Opção Inválida!\n");
            break;
        }
    


    break;




    
    default:

        printf ("Opção inválida");
        break;
    }



        // Comparação cartas jogador 2

    printf("Escolha qual atributo você quer comparar:\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos Turísticos\n");
    printf("5.Super Poder\n");
    scanf("%d", &opcao1Jogador2);

    switch (opcao1Jogador2){
    case 1: // população



        printf("Você Selecionou População!\n");
        printf("Selecione outro atributo!\n");
        printf("2.Área\n");
        printf("3.PIB\n");
        printf("4.Pontos Turísticos\n");
        printf("5.Super Poder\n");
            scanf("%d", &opcao2Jogador2);

        switch (opcao2Jogador2)
        {
        case 2:
        printf("Você Selecionou Área!\n");



            resultadoJogador2 = populacao2 + area2;

            break;
        case 3:
        printf("Você Selecionou PIB!\n");



            resultadoJogador2 = populacao2 + pib2;
        
            break;
        case 4:
        printf("Você Selecionou Pontos Turísticos!\n");



            resultadoJogador2 = populacao2 + ponto_turistico2;


            break;
        case 5:
        printf("Você Selecionou Super Poder!\n");



            resultadoJogador2 = populacao2 + s_poder2;

            break;       
        
        default:

        printf("Opção Inválida!\n");
            break;
        }
        
    break;

    case 2: // area
        printf("Você Selecionou Área!\n");
        printf("Selecione outro atributo!\n");
        printf("1.População\n");
        printf("3.PIB\n");
        printf("4.Pontos Turísticos\n");
        printf("5.Super Poder\n");
            scanf("%d", &opcao2Jogador2);



        switch (opcao2Jogador2)
        {
        case 1:
        printf("Você Selecionou População!\n");
            

            resultadoJogador2 = populacao2 + area2;

            break;
        case 3:
        printf("Você Selecionou PIB!\n");



            resultadoJogador2 = area2 + pib2;
        
            break;
        case 4:
        printf("Você Selecionou Pontos Turísticos!\n");


            resultadoJogador2 = area2 + ponto_turistico2;

            break;
        case 5:
        printf("Você Selecionou Super Poder!\n");



            resultadoJogador2 = area2 + s_poder2;

            break;       
        
        default:

        printf("Opção Inválida!\n");
            break;
        }
        
    break;
        

    case 3: // pib
        printf("Você Selecionou PIB!\n");
        printf("Selecione outro atributo!\n");
        printf("1.População\n");
        printf("2.Área\n");
        printf("4.Pontos Turísticos\n");
        printf("5.Super Poder\n");
            scanf("%d", &opcao2Jogador2);



        switch (opcao2Jogador2)
        {
        case 2:
        printf("Você Selecionou Área!\n");



            resultadoJogador2 = pib2 + area2;

            break;
        case 1:
        printf("Você Selecionou População!\n");



            resultadoJogador2 = populacao2 + pib2;
        
            break;
        case 4:
        printf("Você Selecionou Pontos Turísticos!\n");



            resultadoJogador2 = pib2 + ponto_turistico2;


            break;
        case 5:
        printf("Você Selecionou Super Poder!\n");



            resultadoJogador2 = pib2 + s_poder2;

            break;       
        
        default:

        printf("Opção Inválida!\n");
            break;
        }
        
    break;

    case 4: // pontos turisticos
        printf("Você Selecionou Pontos Turísticos!\n");
        printf("Selecione outro atributo!\n");
        printf("1.População\n");
        printf("2.Área\n");
        printf("3.PIB\n");
        printf("5.Super Poder\n");
            scanf("%d", &opcao2Jogador2);



        switch (opcao2Jogador2)
        {
        case 2:
        printf("Você Selecionou Área!\n");



            resultadoJogador2 = ponto_turistico2 + area2;

            break;
        case 3:
        printf("Você Selecionou PIB!\n");



            resultadoJogador2 = ponto_turistico2 + pib2;
        
            break;
        case 1:
        printf("Você Selecionou População!\n");



            resultadoJogador2 = populacao2 + ponto_turistico2;


            break;
        case 5:
        printf("Você Selecionou Super Poder!\n");



            resultadoJogador2 = ponto_turistico2 + s_poder2;

            break;       
        
        default:

        printf("Opção Inválida!\n");
            break;
        }
        

    break;

    case 5: // s poder
        printf("Você Selecionou Super Poder!\n");
        printf("Selecione outro atributo!\n");
        printf("1.População\n");
        printf("2.Área\n");
        printf("3.PIB\n");
        printf("4.Pontos Turísticos\n");
            scanf("%d", &opcao2Jogador2);



        switch (opcao2Jogador2)
        {
        case 2:
        printf("Você Selecionou Área!\n");



            resultadoJogador2 = s_poder2 + area2;

            break;
        case 3:
        printf("Você Selecionou PIB!\n");


            resultadoJogador2 = s_poder2 + pib2;
        
            break;
        case 4:
        printf("Você Selecionou Pontos Turísticos!\n");

            resultadoJogador2 = s_poder2 + ponto_turistico2;


            break;
        case 1:
        printf("Você Selecionou População!\n");



            resultadoJogador2 = populacao2 + s_poder2;

            break;       
        
        default:

        printf("Opção Inválida!\n");
            break;
        }
    


    break;




    
    default:

        printf ("Opção inválida");
        break;
    }


    // Somatoria da Comparação carta 1


    printf("HORA DOS RESULTADOS!!!\n");
    printf("Informações da carta 01:\n");
    printf("Nome do Estado: %s\n" , estado);
    printf("O resultado da Soma: %.2f \n" , resultadoJogador1);


    // somatoria da comparação carta 2

    printf("Informações da carta 02:\n");
    printf("Nome do Estado: %s\n" , estado2);
    printf("O resultado da Soma: %.2f \n" , resultadoJogador2);


    if (resultadoJogador1 > resultadoJogador2)
    {
        printf("Carta 01 Venceu, com a somatoria de: %.2f enquanto a Carta 02 com : %.2f \n", resultadoJogador1 , resultadoJogador2);
    } else if ( resultadoJogador1 < resultadoJogador2) {
        printf("Carta 02 Venceu, com a somatoria de: %.2f enquanto a Carta 01 com : %.2f\n", resultadoJogador2 , resultadoJogador1);
    } else {
        printf("Carta 01 Empatou com a somatoria de: %.2f enquanto a Carta 02 com : %.2f\n", resultadoJogador2 , resultadoJogador1);
    }
    
    
    




// População
//Area
// PIB
// Pontos turisticos
// Densidade Pop - Ganha a menor
// Super Poder



return 0;
    
}