#include <iostream>
using namespace std;

const int MAX = 1000;

// Definição da estrutura da lista
struct ListaLinear {
    int dados[MAX];
    int tamanho;
};

// Inicializa a lista
void inicializar(ListaLinear &lista) {
    lista.tamanho = 0;
}

// Retorna True caso a lista esteja vazia, caso contrário retorna False
bool vazia(const ListaLinear &lista) {
    return lista.tamanho == 0;
}

// Insere no final da lista
void inserirFinal(ListaLinear &lista, int valor) {
    lista.dados[lista.tamanho++] = valor;
}

// Insere no início da lista
void inserirInicio(ListaLinear &lista, int valor) {
    //empurra todos os elementos para um indice acima
    for (int i = lista.tamanho; i > 0; i--) {
        lista.dados[i] = lista.dados[i - 1];
    }

    lista.dados[0] = valor;
    lista.tamanho++;
}

// Remove um elemento da lista
void removerElemento(ListaLinear &lista, int valor) {
    int pos = -1;
    for (int i = 0; i < lista.tamanho; i++) {
        if (lista.dados[i] == valor) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        cout << "Valor nao encontrado!\n";
        return;
    }
    for (int i = pos; i < lista.tamanho - 1; i++) {
        lista.dados[i] = lista.dados[i + 1];
    }
    lista.tamanho--;
}

// Exibe os elementos da lista
void exibir(ListaLinear &lista) {
    if (vazia(lista)) {
        cout << "Lista vazia!\n";
        return;
    }
    cout << "Lista: ";
    for (int i = 0; i < lista.tamanho; i++) {
        cout << lista.dados[i] << " ";
    }
    cout << endl;
}

// Busca um valor na lista e retorna o índice
int buscarPorValor(ListaLinear &lista, int valor) {
    for (int i = 0; i < lista.tamanho; i++) {
        if (lista.dados[i] == valor)
            return i;
    }
    return -1;
}

// Acessa um elemento pelo índice e retorna o valor
int acessarPorIndice(ListaLinear &lista, int idx) {
    if (idx < 0 || idx >= lista.tamanho) {
        cout << "Posicao invalida!\n";
        return -1;
    }
    return lista.dados[idx];
}

int main() {
    ListaLinear lista;
    inicializar(lista);

    inserirFinal(lista, 10);
    inserirFinal(lista, 20);
    cout << "Exibir lista com valores 10 e 20: \n";
    exibir(lista);

    cout << "\nExibir lista com valor 5 inserido no inicio: \n";
    inserirInicio(lista, 5);
    exibir(lista);

    cout << "\nExibir o valor da posicao 1: \n";
    cout << acessarPorIndice(lista, 1);

    cout << "\n\nRemovendo o valor 10: \n";
    removerElemento(lista, 10);
    exibir(lista);

    cout << "\nBuscando o indice do valor 20: \n";
    cout << buscarPorValor(lista, 20);

    return 0;
}
