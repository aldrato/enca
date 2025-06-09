#include <iostream>
using namespace std;

struct Node {
    int chave;
    Node *prox;
};

// Inserção ordenada (ordem crescente)
void inserirOrdenado(Node *&inicio, int chave) {

}

// Exibição da lista
void exibir(Node *inicio) {
    while (inicio) {
        cout << inicio->chave << " ";
        inicio = inicio->prox;
    }
    cout << endl;
}

int main() {
    Node *lista = nullptr;

    inserirOrdenado(lista, 30);
    inserirOrdenado(lista, 10);
    inserirOrdenado(lista, 20);
    inserirOrdenado(lista, 25);

    cout << "Lista ordenada: ";
    exibir(lista);


    return 0;
}
