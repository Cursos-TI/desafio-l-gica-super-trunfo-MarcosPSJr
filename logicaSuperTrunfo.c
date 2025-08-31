#include <stdio.h>

int main() {
    
//Declarando as variáveis
    char estado1[100],estado2[100];
    char cidade1[100],cidade2[100];
    unsigned long int populacao1,populacao2;
    int pontos_turisticos1,pontos_turisticos2;
    float area1,area2,densidade_populacional1,densidade_populacional2;
    float pib1,pib2,pibpercapita1,pibpercapita2;
    char codigo1[10],codigo2[10];
    int superpoder1,superpoder2, resultado, resultado_densidade;
    int EscolhaAtributo;
    
    

    printf("---- Bem vindo ao Super Trunfo - Cidades! ---- \n\n"); //Mensagem de boas vindas

    printf("-- Cadastro das Cartas --\n\n"); //informe de cadastro das cartas

    printf("Cadastro da primeira carta\n\n"); //Cadastrando a primeira carta


    printf("Digite o estado (Estados sem espaço, ex: Ceará): ");
    scanf("%99s",estado1); 
    //Aqui foi usado o "&99s" para limitar o uso de caracteres, no caso aqui o char[100] então o limitar é 99
    //O especificador %s no scanf, sem um limitador de largura, pode causar: 
    //Um estouro de buffer (buffer overflow) se o usuário digitar mais caracteres do que o array pode armazenar

    printf("Digite a cidade (Cidade sem espaço, ex: Fortaleza): ");
    scanf("%99s",cidade1);

    printf("Digite a população total da cidade (Inteiro sem pontos): ");
    scanf("%lu",&populacao1);

    printf("Digite a área total da cidade: ");
    scanf("%f",&area1);

    printf("Digite o PIB da cidade: (Sem pontos e abreviado, ex: 25.5 (Bilhões)): ");
    scanf("%f",&pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d",&pontos_turisticos1);

    printf("Digite o código da cidade (Ex:A01): ");
    scanf("%9s",codigo1);

    printf("Primeira carta cadastrada!\n\n"); //informe de primeira carta cadastrada

    printf("Cadastro da Segunda Carta\n\n");  //cadastrando a segunda carta


    printf("Digite o estado (Estados sem espaço, ex: Ceará: ");
    scanf("%99s",estado2);

    printf("Digite a cidade (Cidade sem espaço, ex: Fortaleza: ");
    scanf("%99s",cidade2);

    printf("Digite a população total da cidade (Inteiro sem pontos): ");
    scanf("%lu",&populacao2);

    printf("Digite a área total da cidade: ");
    scanf("%f",&area2);

    printf("Digite o PIB da cidade: (Sem pontos e abreviado, ex: 25.5 (Bilhões)): ");
    scanf("%f",&pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d",&pontos_turisticos2);

    printf("Digite o código da cidade (Ex:A01): ");
    scanf("%9s",codigo2);

    printf("Segunda carta cadastrada!\n\n"); //informe de segunda carta cadastrada

    //Operações para calcular a densidade populacional e o PIB per capita
    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;
    pibpercapita1 = (pib1 * 1000000000.0f) / populacao1;
    pibpercapita2 = (pib2 * 1000000000.0f) / populacao2;

    //Operação de soma para calcular o Super Poder das Cartas
    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1;

    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2;
    
    //imprime na tela as duas cartas cadastradas, contendo a saída de dados e resultados das operações
    printf("Carta 1\n");
    printf("Estado: %s\n",estado1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("População: %lu\n",populacao1);
    printf("Área Total: %.2fKm²\n",area1);
    printf("PIB: %.2f Bilhões\n",pib1);
    printf("Pontos Turísticos: %d\n",pontos_turisticos1);
    printf("Código: %s\n",codigo1);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade_populacional1);
    printf("PIB per Capita: %.2f Reais\n",pibpercapita1);
    printf("Super Poder : %d\n\n", superpoder1);

    printf("Carta 2\n");
    printf("Estado: %s\n",estado2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %lu\n",populacao2);
    printf("Área Total: %.2fKm²\n",area2);
    printf("PIB: %.2f Bilhões\n",pib2);
    printf("Pontos Turísticos: %d\n",pontos_turisticos2);
    printf("Código: %s\n",codigo2);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade_populacional2);
    printf("PIB per Capita: %.2f Reais\n",pibpercapita2);
    printf("Super Poder : %d\n\n", superpoder2);

    printf("=== Comparação das Cartas ===\n\n");
    printf("Escolha qual atributo comparar:\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Número de pontos turísticos\n");
    printf("5.Densidade Populacional\n");
    scanf("%d", &EscolhaAtributo);

    switch (EscolhaAtributo) {
    case 1:
        if (populacao1 > populacao2) {
            printf("--- Resultado ---\n");
            printf("Carta 1 : Cidade : %s\n", cidade1);
            printf("Carta 2 : Cidade : %s\n", cidade2);
            printf("Atributo Escolhido : População\n");
            printf("População Carta 1 : %lu\n",populacao1);
            printf("População Carta 2 : %lu\n",populacao2);
            printf("A Carta 1 Venceu!");
        } else if (populacao1 == populacao2) 
        {
           printf("--- Resultado ---\n");
           printf("Carta 1 : Cidade : %s\n", cidade1);
           printf("Carta 2 : Cidade : %s\n", cidade2);
           printf("Atributo Escolhido : População\n");
           printf("População Carta 1 : %lu\n",populacao1);
           printf("População Carta 2 : %lu\n",populacao2);
           printf("Empate!"); 
        } else {
           printf("--- Resultado ---\n");
           printf("Carta 1 : Cidade : %s\n", cidade1);
           printf("Carta 2 : Cidade : %s\n", cidade2);
           printf("Atributo Escolhido : População\n");
           printf("População Carta 1 : %lu\n",populacao1);
           printf("População Carta 2 : %lu\n",populacao2);
           printf("A Carta 2 Venceu!"); 
        }
        break;
    case 2:
        if (area1 > area2) {
            printf("--- Resultado ---\n");
            printf("Carta 1 : Cidade : %s\n", cidade1);
            printf("Carta 2 : Cidade : %s\n", cidade2);
            printf("Atributo Escolhido : Área\n");
            printf("Área Carta 1 : %2.fKm²\n",area1);
            printf("Área Carta 2 : %2.fKm²\n",area2);
            printf("A Carta 1 Venceu!");
        } else if (area1 == area2) {
            printf("--- Resultado ---\n");
            printf("Carta 1 : Cidade : %s\n", cidade1);
            printf("Carta 2 : Cidade : %s\n", cidade2);
            printf("Atributo Escolhido : Área\n");
            printf("Área Carta 1 : %2.fKm²\n",area1);
            printf("Área Carta 2 : %2.fKm²\n",area2);
            printf("Empate!");
        } else {
            printf("--- Resultado ---\n");
            printf("Carta 1 : Cidade : %s\n", cidade1);
            printf("Carta 2 : Cidade : %s\n", cidade2);
            printf("Atributo Escolhido : Área\n");
            printf("Área Carta 1 : %2.fKm²\n",area1);
            printf("Área Carta 2 : %2.fKm²\n",area2);
            printf("A Carta 2 Venceu!");
        }
        break;
    case 3:
        if (pib1 > pib2){
            printf("--- Resultado ---\n");
            printf("Carta 1 : Cidade : %s\n", cidade1);
            printf("Carta 2 : Cidade : %s\n", cidade2);
            printf("Atributo Escolhido : PIB\n");
            printf("PIB Carta 1 : %2.f Bilhões\n", pib1);
            printf("PIB Carta 2 : %2.f Bilhões\n", pib2);
            printf("A Carta 1 Venceu!");
        } else if (pib1 == pib2) {
            printf("--- Resultado ---\n");
            printf("Carta 1 : Cidade : %s\n", cidade1);
            printf("Carta 2 : Cidade : %s\n", cidade2);
            printf("Atributo Escolhido : PIB\n");
            printf("PIB Carta 1 : %2.f Bilhões\n", pib1);
            printf("PIB Carta 2 : %2.f Bilhões\n", pib2);
            printf("Empate!");
        } else {
            printf("--- Resultado ---\n");
            printf("Carta 1 : Cidade : %s\n", cidade1);
            printf("Carta 2 : Cidade : %s\n", cidade2);
            printf("Atributo Escolhido : PIB\n");
            printf("PIB Carta 1 : %2.f Bilhões\n", pib1);
            printf("PIB Carta 2 : %2.f Bilhões\n", pib2);
            printf("A Carta 2 Venceu!");
        }
        break;
    case 4:
        if (pontos_turisticos1 > pontos_turisticos2) {
           printf("--- Resultado ---\n");
           printf("Carta 1 : Cidade : %s\n", cidade1);
           printf("Carta 2 : Cidade : %s\n", cidade2);
           printf("Atributo Escolhido : Pontos Turísticos\n");
           printf("Pontos Turísticos Carta 1 : %d\n", pontos_turisticos1);
           printf("Pontos Turísticos Carta 2 : %d\n", pontos_turisticos2);
           printf("A Carta 1 Venceu!"); 
        } else if (pontos_turisticos1 == pontos_turisticos2) {
           printf("--- Resultado ---\n");
           printf("Carta 1 : Cidade : %s\n", cidade1);
           printf("Carta 2 : Cidade : %s\n", cidade2);
           printf("Atributo Escolhido : Pontos Turísticos\n");
           printf("Pontos Turísticos Carta 1 : %d\n", pontos_turisticos1);
           printf("Pontos Turísticos Carta 2 : %d\n", pontos_turisticos2);
           printf("Empate");
        } else {
           printf("--- Resultado ---\n");
           printf("Carta 1 : Cidade : %s\n", cidade1);
           printf("Carta 2 : Cidade : %s\n", cidade2);
           printf("Atributo Escolhido : Pontos Turísticos\n");
           printf("Pontos Turísticos Carta 1 : %d\n", pontos_turisticos1);
           printf("Pontos Turísticos Carta 2 : %d\n", pontos_turisticos2);
           printf("A Carta 2 Venceu!");
        }
        break;
    case 5:
       if (densidade_populacional1 > densidade_populacional2) {
           printf("--- Resultado ---\n");
           printf("Carta 1 : Cidade : %s\n", cidade1);
           printf("Carta 2 : Cidade : %s\n", cidade2);
           printf("Atributo Escolhido : Densidade Populacional\n");
           printf("Densidade Populacional Carta 1 : %.2f hab/km²\n", densidade_populacional1);
           printf("Densidade Populacional Carta 2 : %.2f hab/km²\n", densidade_populacional2);
           printf("A Carta 1 Venceu!");
       } else if (densidade_populacional1 == densidade_populacional2 ) {
           printf("--- Resultado ---\n");
           printf("Carta 1 : Cidade : %s\n", cidade1);
           printf("Carta 2 : Cidade : %s\n", cidade2);
           printf("Atributo Escolhido : Densidade Populacional\n");
           printf("Densidade Populacional Carta 1 : %.2f hab/km²\n", densidade_populacional1);
           printf("Densidade Populacional Carta 2 : %.2f hab/km²\n", densidade_populacional2);
           printf("Empate");
       } else {
           printf("--- Resultado ---\n");
           printf("Carta 1 : Cidade : %s\n", cidade1);
           printf("Carta 2 : Cidade : %s\n", cidade2);
           printf("Atributo Escolhido : Densidade Populacional\n");
           printf("Densidade Populacional Carta 1 : %.2f hab/km²\n", densidade_populacional1);
           printf("Densidade Populacional Carta 2 : %.2f hab/km²\n", densidade_populacional2);
           printf("A Carta 2 Venceu!");
       }
       break;
       default:
          printf("Opção Inválida");
    }



    return 0;
}
