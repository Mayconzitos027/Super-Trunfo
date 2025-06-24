#include <stdio.h>
#include <string.h>

int main()
{
    // Sistema para cadastramento de cartas com informações das cidades para o jogo Super Trunfo

    // Variáveis para Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    int pontos_turisticos1;
    float area1;
    float PIB1;

    // Variáveis para Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    int pontos_turisticos2;
    float area2;
    float PIB2;

    // Boa-vindas ao usuário
    printf(" * * * Olá, Jogador! Vamos cadastrar as informações de duas cartas do Super Trunfo. * * *\n\n");

    // Leitura da Carta 1
    printf("--- Carta 1 ---\n");
    printf("Digite uma letra (de 'A' a 'H') para representar o Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (um número entre 01 e 04): ");
    scanf("%s", codigo1);
    getchar();

    printf("Digite o nome da cidade escolhida: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto (PIB) da cidade? ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turíticos dessa cidade? ");
    scanf("%d", &pontos_turisticos1);

    // Fim da primeira Carta

    printf("\n \nParabéns!! Voce terminou sua primiera carta Super Trunfo!");

    printf("\n \nAgora vamos para a segunda carta.\n \n");

    // Leitura da Carta 2
    printf("--- Carta 2 ---\n");
    printf("Digite uma letra (de 'A' a 'H') para representar o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta, um número entre 01 e 04: ");
    scanf("%s", codigo2);
    getchar();

    printf("Digite o nome da cidade escolhida: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto (PIB) da cidade? ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turíticos dessa cidade? ");
    scanf("%d", &pontos_turisticos2);

    // Fim da segunda Carta

    printf("\n \nParabéns!! Aqui estão suas cartas Super Trunfo! \n \n");
    
    // Exibição da Carta1
    printf("\n--- Informações da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Números de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibição da Carta 2
    printf("\n--- Informações da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Números de Pontos Turísticos: %d\n", pontos_turisticos2);

    printf("\n* * * Agora você ja está preparado para começar a jogar Super Trunfo. Junte sua galera e Divirta-se!!! * * *\n \n");
    return 0;
}