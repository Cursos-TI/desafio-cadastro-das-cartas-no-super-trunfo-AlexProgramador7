// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    #include <stdio.h>

    int main() {
        // Definindo as variáveis de cadastro
        char estado[3] = "A";            // Estado com código de 1 letra
        char codigo[20] = "A01";         // Código da cidade
        char cidade[30] = "São Paulo";   // Nome da cidade
        double populacao = 1232500.0;    // População da cidade
        double area = 1521.11;           // Área da cidade (em km²)
        double pib = 699.28;             // PIB da cidade (em bilhões)
        int pontos_turisticos = 50;      // Número de pontos turísticos
    
        // Exibindo os dados da cidade
        printf("Desafio Super Trunfo!\n\n");
    
        printf("Estado: %s\n", estado);
        printf("Código: %s\n", codigo);
        printf("Cidade: %s\n", cidade);
        printf("População: %.1f\n", populacao);   // População sem casas decimais
        printf("Área: %.2f km²\n", area);         // Exibindo a área com duas casas decimais
        printf("PIB: %.2f bilhões\n", pib);       // PIB com duas casas decimais
        printf("Pontos Turísticos: %d\n", pontos_turisticos); // Exibindo pontos turísticos como inteiro
    
        return 0;
    }