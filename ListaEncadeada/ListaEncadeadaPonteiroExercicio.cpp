#include <iostream>
using namespace std;

// Definição do nó da lista
struct No {
    int dado;
    No *proximo;
};

// Inserção no início
void inserirInicio(No *&inicio, int valor) {

}

// Inserção no final
void inserirFinal(No *&inicio, int valor) {

}

// Remoção de um valor
void remover(No *&inicio, int valor) {

}

// Busca por um valor, retorna verdadeiro caso exista, retorna falso caso contrario
bool buscar(No *inicio, int valor) {
    return false;
}

// Exibir a lista
void exibir(No *inicio) {

}

// Liberar memória da lista
void liberarLista(No *&inicio) {

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
