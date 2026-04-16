#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    int opcao;
    int atributo1_carta1, atributo1_carta2;
    int atributo2_carta1, atributo2_carta2;
    int atributo3_carta1, atributo3_carta2;   
    // Cadastro das Cartas:
    
    //carta 1 Brasil
    char pais1[] = "Brasil";
    int populacao1 = 25000;
    int area1 = 50000;
    int pib1 = 20000;

    //Carta 2 = Argentina
    char pais2[] = "Argentina";
    int populacao2 = 1500;
    int area2 = 2000;
    int pib2 = 3000;

    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:

    printf("#### Jogo Super Trunfo ####\n\n");
    printf("Escolha um atributo:\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.pib\n");
    printf("Opção:");
    scanf( "%d", &opcao);
    // Desenvolva a lógica de comparação entre duas cartas.

    switch (opcao)
    {
    case 1:
        atributo1_carta1 = populacao1; atributo1_carta2 = populacao2;
        printf("Você escolheu População.\n");
        if (populacao1 > populacao2) {
         printf("Pais1 tem maior população.\n");
     } else {
         printf("Pais2 tem maior população.\n");
     }
        break;
    case 2:
        atributo2_carta1 = area1; atributo2_carta2 = area2;
        printf("Você escolheu área.\n");
        if (area1 > area2) {
        printf("Area1 maior que area2./n");
    } else{
        printf("Area2, maior que area1.");
    }
        break;
    case 3:
        atributo3_carta1 = pib1; atributo3_carta2 = pib2;
        printf("Você escolheu pib.\n");
        if (pib1 > pib2){
        printf("Pib1 > pib2.\n");
    } else{
        printf("Pib2 maior quer pib1");

    }     

    default:
        printf("Opção errada.\n");
        break;
    }
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    

    

       

    

    // Exibição dos Resultados:

    if(atributo1_carta1 > atributo1_carta2){
        printf("Brasil ganhou.\n");
    }else{
        printf("Argentina ganhou.\n");
    }



    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
