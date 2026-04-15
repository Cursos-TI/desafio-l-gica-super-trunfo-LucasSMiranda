#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char pais1[20] = "Brasil";
    char pais2[20] = "Argentina";
        
    // Cadastro das Cartas:
    
    //carta 1 Brasil
    int populacao1 = 25000;
    int area1 = 50000;
    int pib1 = 20000;

    //Carta 2 = Argentina
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
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    if (populacao1 > populacao2) {
         printf("Pais1 tem maior população.\n");
     } else {
         printf("Pais2 tem maior população.\n");
     }

    if (area1 > area2) {
        printf("Area1 maior que area2./n");
    } else{
        printf("Area2, maior que area1.");
    }

    if (pib1 > pib2){
        printf("Pib1 > pib2.\n");
    } else{
        printf("Pib2 maior quer pib1");

    }        

    

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
