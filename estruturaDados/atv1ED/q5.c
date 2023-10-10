#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa {
    int cpf;
    char nome[50];
    struct pessoa *prox;
} Pessoa;

void inserePessoa(Pessoa **lista, int cpf, const char *nome) {
    Pessoa *novaPessoa = (Pessoa *)malloc(sizeof(Pessoa));
    novaPessoa->cpf = cpf;
    strcpy(novaPessoa->nome, nome);
    novaPessoa->prox = NULL;

    if (*lista == NULL) {
        *lista = novaPessoa;
    } else {
        Pessoa *atual = *lista;
        Pessoa *anterior = NULL;

        while (atual != NULL && atual->cpf < cpf) {
            anterior = atual;
            atual = atual->prox;
        }

        if (anterior == NULL) {
            novaPessoa->prox = *lista;
            *lista = novaPessoa;
        } else {
            anterior->prox = novaPessoa;
            novaPessoa->prox = atual;
        }
    }
}

void imprimePessoas(Pessoa *lista) {
    while (lista != NULL) {
        printf("CPF: %d, Nome: %s\n", lista->cpf, lista->nome);
        lista = lista->prox;
    }
}

int main() {
    Pessoa *lista = NULL;

    inserePessoa(&lista, 4444, "Jonatas");
    inserePessoa(&lista, 1111, "Fabio");
    inserePessoa(&lista, 2222, "Katia");

    imprimePessoas(lista);

    while (lista != NULL) {
        Pessoa *temp = lista;
        lista = lista->prox;
        free(temp);
    }

    return 0;
}
