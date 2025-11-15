#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
// A struct armazena as informações de um único território.
typedef struct {
    char nome[30];  // Nome do território (máximo 29 caracteres)
    char cor[10];   // Cor do exército (máximo 9 caracteres)
    int tropas;     // Quantidade de tropas no território
} Territorio;

// Constante para o número de territórios a serem cadastrados
#define NUM_TERRITORIOS 5

int main() {
    // Declaração de um vetor de structs para armazenar os 5 territórios
    Territorio territorios[NUM_TERRITORIOS];
    int i;

    // ENTRADA DE DADOS
    printf("--- Cadastro de Territórios ---\n\n");

    for (i = 0; i < NUM_TERRITORIOS; i++) {
        printf("Território %d de %d:\n", i + 1, NUM_TERRITORIOS);

        // 1. Entrada do Nome
        printf("  Nome do Território (máx. 29 caracteres): ");
        if (scanf("%29s", territorios[i].nome) != 1) {
            fprintf(stderr, "Erro na leitura do nome.\n");
            return 1;
        }

        // 2. Entrada da Cor do Exército
        printf("  Cor do Exército (máx. 9 caracteres): ");
        if (scanf("%9s", territorios[i].cor) != 1) {
            fprintf(stderr, "Erro na leitura da cor.\n");
            return 1;
        }

        // 3. Entrada da Quantidade de Tropas
        printf("  Quantidade de Tropas: ");
        if (scanf("%d", &territorios[i].tropas) != 1) {
            fprintf(stderr, "Erro na leitura da quantidade de tropas.\n");
            return 1;
        }

        printf("\n");
    }

    // EXIBIÇÃO DE DADOS
    printf("--- Dados dos Territórios Cadastrados ---\n");

    for (i = 0; i < NUM_TERRITORIOS; i++) {
        printf("\n--- Território %d ---\n", i + 1);
        printf("Nome: %s \n  Cor Do Exército: %s \n Quantidade de Tropas: %d\n",
               territorios[i].nome,
               territorios[i].cor,
               territorios[i].tropas);
    }
    return 0;
}