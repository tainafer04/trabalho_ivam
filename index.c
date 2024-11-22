#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    char cidade[50]; // Novo campo para a cidade
} Cadastro;

void cadastrarPessoa(Cadastro pessoa[]) {
    printf("Digite o nome: ");
    scanf(" %[^\n]s", pessoa[0].nome);
    printf("Digite a idade: ");
    scanf("%d", &pessoa[0].idade);
    printf("Digite a cidade: ");
    scanf(" %[^\n]s", pessoa[0].cidade);  // Solicita o nome da cidade
}

void exibirPessoa(Cadastro pessoa[]) {
    printf("\n--- Dados Cadastrados ---\n");
    printf("Nome: %s\n", pessoa[0].nome);
    printf("Idade: %d\n", pessoa[0].idade);
    printf("Cidade: %s\n", pessoa[0].cidade);  // Exibe a cidade
}

int main() {
    Cadastro pessoa[10];  // Armazenará até 10 pessoas
    int opcao;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Cadastrar pessoa\n");
        printf("2. Exibir pessoa\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarPessoa(pessoa);
                break;
            case 2:
                exibirPessoa(pessoa);
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}