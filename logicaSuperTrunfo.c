#include <stdio.h>


int main(){
    // Declara duas variáveis do tipo 'char' (caractere único) para armazenar a letra do estado para a carta 1 e 2.
    char letraEstado1, letraEstado2;
    // Declara dois arrays de 'char' (strings) para armazenar o código da carta para a carta 1 e 2.
    // Tamanho 3 para acomodar dois dígitos numéricos e o caractere nulo '\0' que marca o fim de uma string em C.
    char codCarta1[3], codCarta2[3];
    // Declara quatro arrays de 'char' (strings) para armazenar os nomes das cidades e países para a carta 1 e 2.
    // Tamanho 50 é um limite para o comprimento dos nomes, ajudando a evitar estouro de buffer (escrever além da memória alocada).
    char nomeCid1[50], nomeCid2[50], nomePais1[50], nomePais2[50];
    // Declara duas variáveis do tipo 'int' (inteiro) para armazenar a população para a carta 1 e 2.
    int populacao1, populacao2;
    // Declara duas variáveis do tipo 'float' (ponto flutuante, para números com casas decimais) para armazenar a área para a carta 1 e 2.
    float area1, area2;
    // Declara duas variáveis do tipo 'float' para armazenar o Produto Interno Bruto (PIB) para a carta 1 e 2.
    float pib1, pib2;
    // Declara duas variáveis do tipo 'int' para armazenar o número de pontos turísticos para a carta 1 e 2.
    int pontoTuristico1, pontoTuristico2;
    // Declara duas variáveis do tipo 'float' para armazenar a densidade populacional calculada para a carta 1 e 2.
    float densidadePopulacional1, densidadePopulacional2;
    // Declara duas variáveis do tipo 'float' para armazenar o inverso da densidade populacional para a carta 1 e 2.
    // (Usado na comparação, onde menor inverso significa maior densidade).
    float inversoDensidade1, inversoDensidade2;
    // Declara duas variáveis do tipo 'float' para armazenar o PIB per capita calculado para a carta 1 e 2.
    float pibPerCapita1, pibPerCapita2;
    // Declara uma variável do tipo 'int' para armazenar a escolha do usuário sobre qual atributo comparar.
    int atributoEscolhido;

    
    printf("--------------------------------\n");
    printf("--------------------------------\n");
    // Imprime uma mensagem instruindo o usuário a digitar os dados da Carta 1.
    printf("Por favor, digite abaixo os dados para cadastrar a Carta 1 \n");

    // Imprime uma mensagem solicitando a letra do estado.
    printf("Digite uma letra de A a H para representar o Estado: \n");
    // Lê um único caractere do teclado e armazena na variável letraEstado1.
    // O espaço antes de "%c" é importante para consumir quaisquer caracteres de espaço em branco (como Enter) deixados no buffer de entrada por leituras anteriores.
    scanf(" %c", &letraEstado1);

    // Imprime uma mensagem solicitando o código da carta (número).
    printf("Digite um numero de 01 a 04 para representar o codigo da carta: \n");
    // Lê uma string (sequência de caracteres terminada por espaço, tabulação ou Enter) do teclado e armazena no array codCarta1.
    scanf("%s", codCarta1);

    // Imprime uma mensagem solicitando o nome da cidade.
    printf("Digite o nome da Cidade: \n");
    // Lê uma string do teclado e armazena no array nomeCid1.
    scanf("%s", nomeCid1);

    // Imprime uma mensagem solicitando o número de habitantes.
    printf("Digite o numero de habitantes da cidade: \n");
    // Lê um número inteiro do teclado e armazena na variável populacao1.
    scanf("%d", &populacao1);

    // Imprime uma mensagem solicitando a área territorial.
    printf("Digite a area territorial da cidade: \n");
    // Lê um número de ponto flutuante do teclado e armazena na variável area1.
    scanf("%f", &area1);

    // Imprime uma mensagem solicitando o PIB.
    printf("Digite o produto interno bruto (PIB) da cidade: \n");
    // Lê um número de ponto flutuante do teclado e armazena na variável pib1.
    scanf("%f", &pib1);

    // Imprime uma mensagem solicitando a quantidade de pontos turísticos.
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    // Lê um número inteiro do teclado e armazena na variável pontoTuristico1.
    scanf("%d", &pontoTuristico1);

    // Calcula a densidade populacional. A conversão (cast) para '(float)' garante que a divisão seja feita com números decimais,
    // mesmo que populacao1 e area1 fossem inteiros (aqui area1 já é float, mas é uma boa prática).
    densidadePopulacional1 = (float) populacao1 / area1;
    // Calcula o PIB per capita. A conversão (cast) para '(float)' garante a divisão decimal.
    pibPerCapita1 =  (float) pib1 /  populacao1;
    // Calcula o inverso da densidade populacional.
    inversoDensidade1 = 1.0 / densidadePopulacional1; // Usar 1.0 garante a divisão em ponto flutuante.

    
    printf("--------------------------------\n");
    printf("--------------------------------\n");
    // Imprime uma mensagem instruindo o usuário a digitar os dados da Carta 2.
    printf("Por favor, digite abaixo os dados para cadastrar a Carta 2 \n");

    // Imprime uma mensagem solicitando a letra do estado para a Carta 2.
    printf("Digite uma letra de A a H para representar o Estado: \n");
    // Lê um único caractere para letraEstado2, consumindo espaços em branco pendentes.
    scanf(" %c", &letraEstado2);

    // Imprime uma mensagem solicitando o código da carta para a Carta 2.
    printf("Digite um numero de 01 a 04 para representar o codigo da carta: \n");
    // Lê a string do código da carta para codCarta2.
    scanf("%s", codCarta2);

    // Imprime uma mensagem solicitando o nome da cidade para a Carta 2.
    printf("Digite o nome da Cidade: \n");
    // Lê a string do nome da cidade para nomeCid2.
    scanf("%s", nomeCid2);

    // Imprime uma mensagem solicitando o número de habitantes para a Carta 2.
    printf("Digite o numero de habitantes da cidade: \n");
    // Lê o inteiro da população para populacao2.
    scanf("%d", &populacao2);

    // Imprime uma mensagem solicitando a área territorial para a Carta 2.
    printf("Digite a area territorial da cidade: \n");
    // Lê o float da área para area2.
    scanf("%f", &area2);

    // Imprime uma mensagem solicitando o PIB para a Carta 2.
    printf("Digite o produto interno bruto (PIB) da cidade: \n");
    // Lê o float do PIB para pib2.
    scanf("%f", &pib2);

    // Imprime uma mensagem solicitando a quantidade de pontos turísticos para a Carta 2.
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    // Lê o inteiro dos pontos turísticos para pontoTuristico2.
    scanf("%d", &pontoTuristico2);

    // Calcula a densidade populacional para a Carta 2.
    densidadePopulacional2 = (float) populacao2 / area2;
    // Calcula o PIB per capita para a Carta 2.
    pibPerCapita2 =  (float) pib2 /  populacao2;
    // Calcula o inverso da densidade populacional para a Carta 2.
    inversoDensidade2 = 1.0 / densidadePopulacional2;


    
    printf("---------------------------------\n");
    printf("---------------------------------\n");
    // Imprime um cabeçalho indicando que os dados da Carta 1 serão exibidos.
    printf("Dados coletados da Carta 1\n");

    // Imprime a letra do estado da Carta 1.
    printf("Estado: %c\n", letraEstado1);
    // Imprime o código completo da carta (letra + número) da Carta 1. %c para char, %s para string.
    printf("Codigo da carta: %c%s\n", letraEstado1, codCarta1);
    // Imprime o nome da cidade da Carta 1.
    printf("Nome da cidade: %s\n", nomeCid1);
    // Imprime a população da Carta 1. %d para inteiro.
    printf("Populacao: %d\n", populacao1);
    // Imprime a área territorial da Carta 1, formatada com duas casas decimais (%.2f).
    printf("Area territorial: %.2f Km\n", area1);
    // Imprime o PIB da Carta 1, formatado com duas casas decimais.
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    // Imprime o número de pontos turísticos da Carta 1.
    printf("Numero de pontos turisticos: %d\n", pontoTuristico1);
    // Imprime a densidade populacional calculada da Carta 1, formatada com duas casas decimais.
    printf("Densidade Populacional: %.2f hab/Km\n", densidadePopulacional1);
    // Imprime o PIB per capita calculado da Carta 1, formatado com duas casas decimais.
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    
    printf("---------------------------------\n");
    printf("---------------------------------\n");
    // Imprime um cabeçalho indicando que os dados da Carta 2 serão exibidos.
    printf("Dados coletados da Carta 2\n");

    // Imprime a letra do estado da Carta 2.
    printf("Estado: %c\n", letraEstado2);
    // Imprime o código completo da carta da Carta 2.
    printf("Codigo da carta: %c%s\n", letraEstado2, codCarta2);
    // Imprime o nome da cidade da Carta 2.
    printf("Nome da cidade: %s\n", nomeCid2);
    // Imprime a população da Carta 2.
    printf("Populacao: %d\n", populacao2);
    // Imprime a área territorial da Carta 2, formatada com duas casas decimais.
    printf("Area territorial: %.2f Km\n", area2);
    // Imprime o PIB da Carta 2, formatado com duas casas decimais.
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    // Imprime o número de pontos turísticos da Carta 2.
    printf("Numero de pontos turisticos: %d\n", pontoTuristico2);
    // Imprime a densidade populacional calculada da Carta 2, formatada com duas casas decimais.
    printf("Densidade Populacional: %.2f hab/Km\n", densidadePopulacional2);
    // Imprime o PIB per capita calculado da Carta 2, formatado com duas casas decimais.
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    
    printf("-------------------------------\n");
    printf("-------------------------------\n");
    // Imprime um cabeçalho para a seção de comparação.
    printf("-----Comparacao das cartas-----\n");
    // Solicita ao usuário o nome do país associado à Carta 1.
    printf("Carta 1 - Digite o nome do pais: ");
    // Lê o nome do país para nomePais1.
    scanf("%s", nomePais1);
    // Solicita ao usuário o nome do país associado à Carta 2.
    printf("Carta 2 - Digite o nome do pais: ");
    // Lê o nome do país para nomePais2.
    scanf("%s", nomePais2);
    // Imprime as instruções para escolher o atributo de comparação.
    printf("Escolha o numero que corresponde ao atributo que deseja usar para a comparacao entre a Carta 1 e a Carta 2:\n");
    // Opção 1: População.
    printf("[1] Para Populacao\n");
    // Opção 2: Área territorial.
    printf("[2] Para Area territorial\n");
    // Opção 3: PIB.
    printf("[3] Para PIB\n");
    // Opção 4: Número de pontos turísticos.
    printf("[4] Para Numero de pontos turisticos\n");
    // Opção 5: Densidade populacional (a comparação usa o inverso).
    printf("[5] Para Densidade populacional\n");
    // Lê a escolha do usuário (um número inteiro) e armazena em atributoEscolhido.
    scanf("%d", &atributoEscolhido);

    
    printf("-------------------------------\n");
    printf("-------------------------------\n");
    // Imprime um cabeçalho para a seção de resultado.
    printf("---------- Resultado ----------\n");

    // Inicia uma estrutura switch para executar código diferente com base no valor de atributoEscolhido.
    switch (atributoEscolhido) {
        // Caso o usuário tenha escolhido 1 (População).
        case 1:
            // Verifica se a população da Carta 1 é maior que a da Carta 2.
            if(populacao1 > populacao2) {
                // Imprime os nomes dos países sendo comparados.
                printf("%s X %s\n", nomePais1, nomePais2);
                // Imprime qual atributo foi usado.
                printf("Atributo escolhido: Populacao\n");
                // Imprime os valores comparados.
                printf("Valores comparados: %d X %d\n", populacao1, populacao2);
                // Declara a Carta 1 como vencedora.
                printf("Carta vencedora: Carta 1\n");
            // Senão, verifica se a população da Carta 1 é menor que a da Carta 2.
            }else if(populacao1 < populacao2) {
                // Imprime os nomes dos países.
                printf("%s X %s\n", nomePais1, nomePais2);
                // Imprime o atributo.
                printf("Atributo escolhido: Populacao\n");
                // Imprime os valores.
                printf("Valores comparados: %d X %d\n", populacao1, populacao2);
                // Declara a Carta 2 como vencedora.
                printf("Carta vencedora: Carta 2\n");
            // Senão (se não for maior nem menor, significa que são iguais).
            }else {
                // Imprime os nomes dos países.
                printf("%s X %s\n", nomePais1, nomePais2);
                // Imprime o atributo.
                printf("Atributo escolhido: Populacao\n");
                // Imprime os valores.
                printf("Valores comparados: %d X %d\n", populacao1, populacao2);
                // Declara um empate.
                printf("### Empate! ###\n");
            }
            // Sai do switch após executar o código para este case.
            break;

            // Caso o usuário tenha escolhido 2 (Área territorial).
            case 2:
                // Compara as áreas.
                if(area1 > area2) {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Area territorial\n");
                    // Usa %.2f para formatar os floats com duas casas decimais.
                    printf("Valores comparados: %.2f X %.2f\n", area1, area2);
                    printf("Carta vencedora: Carta 1\n");
                }else if(area1 < area2) {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Area territorial\n");
                    printf("Valores comparados: %.2f X %.2f\n", area1, area2);
                    printf("Carta vencedora: Carta 2\n");
                }else {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Area territorial\n");
                    printf("Valores comparados: %.2f X %.2f\n", area1, area2);
                    printf("### Empate! ###\n");
                }
            // Sai do switch.
            break;

            // Caso o usuário tenha escolhido 3 (PIB).
            case 3:
                // Compara os PIBs.
                if(pib1 > pib2) {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: PIB\n");
                    printf("Valores comparados: %.2f X %.2f\n", pib1, pib2);
                    printf("Carta vencedora: Carta 1\n");
                }else if(pib1 < pib2) {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: PIB\n");
                    printf("Valores comparados: %.2f X %.2f\n", pib1, pib2);
                    printf("Carta vencedora: Carta 2\n");
                }else {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: PIB\n");
                    printf("Valores comparados: %.2f X %.2f\n", pib1, pib2);
                    printf("### Empate! ###\n");
                }
            // Sai do switch.
            break;

            // Caso o usuário tenha escolhido 4 (Pontos Turísticos).
            case 4:
                // Compara o número de pontos turísticos.
                if(pontoTuristico1 > pontoTuristico2) {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Pontos turisticos\n");
                    printf("Valores comparados: %d X %d\n", pontoTuristico1, pontoTuristico2);
                    printf("Carta vencedora: Carta 1\n");
                }else if(pontoTuristico1 < pontoTuristico2) {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Pontos turisticos\n");
                    printf("Valores comparados: %d X %d\n", pontoTuristico1, pontoTuristico2);
                    printf("Carta vencedora: Carta 2\n");
                }else {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Pontos turisticos\n");
                    printf("Valores comparados: %d X %d\n", pontoTuristico1, pontoTuristico2);
                    printf("### Empate! ###\n");
                }
            // Sai do switch.
            break;

            // Caso o usuário tenha escolhido 5 (Densidade Populacional).
            case 5:
                // Compara o INVERSO da densidade.
                if(inversoDensidade1 < inversoDensidade2) {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Densidade Populacional\n");
                    // Imprime os valores do INVERSO da densidade para comparação.
                    printf("Valores comparados (inverso da densidade): %.2f X %.2f\n", inversoDensidade1, inversoDensidade2);
                     // (Menor inverso -> Maior densidade -> Carta 1 vence)
                    printf("Carta vencedora: Carta 1\n");
                // Senão, verifica se o inverso da densidade da Carta 1 é MAIOR que o da Carta 2.
                // (Isso significa que a densidade original da Carta 1 é MENOR que a da Carta 2).
                } else if(inversoDensidade1 > inversoDensidade2) { 
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Densidade Populacional\n");
                    printf("Valores comparados (inverso da densidade): %.2f X %.2f\n", inversoDensidade1, inversoDensidade2);
                    printf("Carta vencedora: Carta 2\n"); 
                // Senão (inversos são iguais, logo densidades são iguais).
                }else {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Densidade Populacional\n");
                    printf("Valores comparados (inverso da densidade): %.2f X %.2f\n", inversoDensidade1, inversoDensidade2);
                    printf("### Empate! ###\n");
                }
            // Sai do switch.
            break;

            // Caso o valor de atributoEscolhido não seja nenhum dos anteriores (1 a 5).
            default:
                // Imprime uma mensagem de erro indicando que a opção escolhida é inválida.
                printf("Opcao Invalida!\n");
            // Sai do switch (embora seja o último caso, é boa prática incluir o break).
            break;
    } // Fim do switch

    // Indica ao sistema operacional que o programa terminou com sucesso.
    // Um valor de retorno 0 é a convenção para sucesso.
    return 0;
}