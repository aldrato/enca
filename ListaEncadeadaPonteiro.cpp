#include <iostream>
using namespace std;

// Definição do nó da lista
struct No {
    int dado;
    No *proximo;
};

// Inserção no início
void inserirInicio(No *&inicio, int valor) {
    No *novo = new No;
    novo->dado = valor;
    novo->proximo = inicio;
    inicio = novo;
}

// Inserção no final
void inserirFinal(No *&inicio, int valor) {
    No *novo = new No;
    novo->dado = valor;
    novo->proximo = nullptr;

    if (inicio == nullptr) {
        inicio = novo;
    } else {
        No* atual = inicio;
        while (atual->proximo != nullptr) {
            atual = atual->proximo;
        }
        atual->proximo = novo;
    }
}

// Remoção de um valor
void remover(No *&inicio, int valor) {
    if (inicio == nullptr) {
        cout << "Lista vazia.\n";
        return;
    }

    No *atual = inicio;
    No *anterior = nullptr;

    while (atual != nullptr && atual->dado != valor) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == nullptr) {
        cout << "Valor não encontrado.\n";
        return;
    }

    if (anterior == nullptr) {
        // Remover o primeiro elemento
        inicio = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }

    delete atual;
    cout << "Valor removido com sucesso.\n";
}

// Busca por um valor, retorna verdadeiro caso exista, retorna falso caso contrario
bool buscar(No *inicio, int valor) {
    No *atual = inicio;

    while (atual != nullptr) {
        if (atual->dado == valor)
            return true;
        atual = atual->proximo;
    }

    return false;
}

// Exibir a lista
void exibir(No *inicio) {
    No *atual = inicio;

    cout << "Lista: ";

    while (atual != nullptr) {
        cout << atual->dado << " -> ";
        atual = atual->proximo;
    }

    cout << "NULL\n";
}

// Liberar memória da lista
void liberarLista(No *&inicio) {
    No *atual = inicio;

    while (atual != nullptr) {
        No *temp = atual;
        atual = atual->proximo;
        delete temp;
    }

    inicio = nullptr;
}

// Função principal para testar
int main() {
    No *lista = nullptr;

    inserirInicio(lista, 10);
    inserirFinal(lista, 20);
    inserirInicio(lista, 5);
    exibir(lista);

    remover(lista, 10);
    exibir(lista);

    if (buscar(lista, 20))
        cout << "Valor enconntrado" << endl;
    else
        cout << "Valor não enconntrado" << endl;

    liberarLista(lista);  // Boa prática para liberar memória
    return 0;
}
