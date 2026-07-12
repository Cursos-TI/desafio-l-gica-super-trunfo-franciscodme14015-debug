#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    // Definição das variáveis para armazenar as propriedades das cidades
char paisA, paisB;
int populacaoA, populacaoB, pontosTuristicoA, pontosTuristicoB, atributoA, atributoB;
float areaA, areaB, pibA, pibB, densidadeA, densidadeB;
densidadeA = areaA /populacaoA; // calculo da densidade da cidade B
densidadeB = areaB /populacaoB; ///calculo da densidade da cidade B
int cidadeVencedoraA =0; ///variavel pra armezenar vitoriAS de cada atributos ganho
 int cidadeVencedoraB =0;//variavel pra armezenar vitoriAS de cada atributos ganho usando incrementacao


printf("vamos comcear o jogo com o cadastro da carta A \n");
printf("digite o nome do pais da sua carta \n"); // solicitando nome do pais
    scanf("%s", &paisA);// capturando entrada do nome do pais
printf("digite o numero da sua populacao da sua carta \n?"); // solicitando o numero da populacao
    scanf("%d", &populacaoA);// capturando a populacao da carta 
printf("digite a area da sua carta \n"); ///solicitando a area
    scanf("%f", &areaA); // capturando o tamanho da area digitado pelo usuario
printf("digite o pib da sua carta \n"); //solicitando o pib da cidade
    scanf("%f", &pibA); //capturando o pib da cidade
printf("digite a quandidade de pontos turistico da sua carta \n"); //solicitando a quandidades de pontos turistico da cidade
    scanf("%d", &pontosTuristicoA); //caprturando a informcao sobre pontos turistico da cidade

       // Cadastro da Carta B
printf("vamos continuar com cadastro da carta B \n");
printf("digite o nome do pais da sua carta \n"); // solicitando nome do pais
    scanf("%s", &paisB);// capturando entrada do nome do pais
printf("digite o numero da sua populacao da sua carta \n?"); // solicitando o numero da populacao
    scanf("%d", &populacaoB);// capturando a populacao da carta 
printf("digite a area da sua carta \n"); ///solicitando a area
    scanf("%f", &areaB); // capturando o tamanho da area digitado pelo usuario
printf("digite o pib da sua carta \n"); //solicitando o pib da cidade
    scanf("%f", &pibB); //capturando o pib da cidade
printf("digite a quandidade de pontos turistico da sua carta \n"); //solicitando a quandidades de pontos turistico da cidade
    scanf("%d", &pontosTuristicoB); //caprturando a informcao sobre pontos turistico da cidade
// criacao do menu onde o usuario escolhe o atributo de comparacao da carta A
    printf(" vamos escolher qual atributo vc deseja usar para comparcao das cartas");
    printf("1 para pais \n");
    printf("2 para populacao \n");
    printf("3 para area \n");
    printf("4 para pib \n");
    printf("5 para pontos turisticos \n");
    scanf("%d", &atributoA);

    // criacao do menu onde o usuario escolhe o atributo de comparacao da carta b
    printf(" vamos escolher qual atributo vc deseja usar para comparcao das cartas");
    printf("1 para populacao \n");
    printf("2 para area \n");
    printf("3 para pib \n");
    printf("4 para pontos turisticos \n");
    printf("5 para densidade");
    scanf("%d", &atributoB);

    //  lógica de comparação entre duas cartas atributo por atributo
    if (populacaoA > populacaoB)
    {
        cidadeVencedoraA ++;
        printf("a carta A tem maior populacao \n");
    }
    else{
        cidadeVencedoraB ++;
        printf("carta B tem maior populacao \n");
    } if (areaA > areaB)
    {
        cidadeVencedoraA ++;
        printf("carta A tem maior area \n");
    }else{
        cidadeVencedoraB ++;
        printf("a carta B tem maior area \n");

    } if (pibA > pibB)
    {
        cidadeVencedoraA ++;
        printf("a carta A tem maior pib \n");
    }else{
        cidadeVencedoraB ++;
        printf("a carta B tem maior pib \n");
    }if (pontosTuristicoA > pontosTuristicoB)
    {
        cidadeVencedoraA ++;
        printf("a carta A tem mais pontos turisticos \n");
    }else{
        cidadeVencedoraB++;
        printf("a carta B tem mais posntos turisticos \n");
    }
    if (densidadeA < densidadeB)
    {
        cidadeVencedoraA ++;
        printf("a carta A venceu por ter menor densidade \n");
    } else{
        cidadeVencedoraB ++;
        printf("a carta b venceu por ter menor densidade \n");
    }
    // menu com switch onde o usuario escolhe qual atributo usar
    switch (atributoA)
    {
case 1:
        if (populacaoA > populacaoB)
    {
        printf("a carta A tem maior populacao \n");
    }
    else{
        printf("carta B tem maior populacao \n");
    }
    break;
case 2:
    if (areaA > areaB)
    {
        printf("carta A tem maior area \n");
    }else{
        printf("a carta B tem maior area \n");

    }break;
case 3:
    if (pibA > pibB)
    {
        printf("a carta A tem maior pib \n");
    }else{
        printf("a carta B tem maior pib \n");
    }
    break;
case 4:
if (pontosTuristicoA > pontosTuristicoB)
    {
        printf("a carta A tem mais pontos turisticos \n");
    }else{
        printf("a carta B tem mais posntos turisticos \n");
    }
    break;
default:
        printf("digite uma opcao correspondente a uma das alternativas acima");
break;
    }
   // menu interativo onde o usuario escolhe qual atributo da sua carta usar 
 switch (atributoB)
    {
case 1:
        if (populacaoB > populacaoA)
    {
        printf("a carta A tem maior populacao \n");
    }
    else{
        printf("carta B tem maior populacao \n");
    }
    break;
case 2:
    if (areaB > areaA)
    {
        printf("carta A tem maior area \n");
    }else{
        printf("a carta B tem maior area \n");

    }
        break;
case 3:
    if (pibB > pibA)
    {
        printf("a carta A tem maior pib \n");
    }else{
        printf("a carta B tem maior pib \n");
    }
    break;
case 4:
if (pontosTuristicoB > pontosTuristicoA)
    {
        printf("a carta A tem mais pontos turisticos \n");
    }else{
        printf("a carta B tem mais pontos turisticos \n");
    }
    break;
default:
        printf("digite uma opcao correspondente a uma das alternativas acima");
break;
    
    }
    // criando codigo que adiciona cada vitoria de um atributo usando incrementacao e decrementacao
//populacao
printf("atributos que a carta A ganhou: %d \n", cidadeVencedoraA);
printf("atributos que a carta B ganhou: %d \n", cidadeVencedoraB);
if(cidadeVencedoraA>cidadeVencedoraB){
    printf("a carta A venceu por ter %d, ou seja mais atributos que carta B", cidadeVencedoraA);
}
else{
    printf("a carta A venceu por ter %d, ou seja mais atributos que carta B", cidadeVencedoraB);
}


    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);



























































    return 0;
}
