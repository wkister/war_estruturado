#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição do número máximo de territórios
#define MAX_TERRITORIOS 5


// Definição da Estrutura do Território do Jogo
// Definindo o nome do território, a cor predominante e a quantidade de tropas no território
struct Territorio {
    char nome[30]; // Nome do território
    char cor[10]; // Cor dominante do território
    int tropas; // Número de tropas no território
};

// Definição da quantidade máxima de territórios (países)
struct Territorio Pais[MAX_TERRITORIOS];

// Definição da função para cadastro dos territórios
void cadastroTerritorio(){
    // Entrada dos dados de cada território
    printf("+-------------------------------+\n");
    printf("|   CADASTRO DOS %d TERRITÓRIOS  |\n", MAX_TERRITORIOS);
    printf("+-------------------------------+");

    for(int i=0; i < MAX_TERRITORIOS; i++){
        printf("\n--- Território no. %d ---\n", i + 1);
        printf("Entre com o nome do território            : ");
        scanf("%s", &Pais[i].nome);
        printf("Entre com a cor do território             : ");
        scanf("%s", &Pais[i].cor);
        printf("Entre com o número de tropas do território: ");
        scanf("%d", &Pais[i].tropas);
        // printf("\n\n");
    }

    // Listagem dos territórios criados
    printf("\n\n+-------------------------------+\n");
    printf("|   LISTAGEM DOS %d TERRITÓRIOS  |\n", MAX_TERRITORIOS);
    printf("+-------------------------------+");

    for(int i=0; i < MAX_TERRITORIOS; i++){
        printf("\n--- Território no. %d ---\n", i + 1);
        printf("Nome  : %s\n", Pais[i].nome);
        printf("Cor   : %s\n", Pais[i].cor);
        printf("Tropas: %d\n", Pais[i].tropas);
    }
}

void main(){    
    printf("========================================\n");
    printf("======       WAR ESTRUTURADO      ======\n");
    printf("========================================\n\n");

    // Cadastro dos territórios
    cadastroTerritorio();
}

