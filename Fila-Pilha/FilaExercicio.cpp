#include <iostream>
using namespace std;

struct No {
    int valor;
    No *proximo;
};

struct Fila {
    No *inicio;
    No *fim;
};

void inicializarFila(Fila *f) {
    f->inicio = nullptr;
    f->fim = nullptr;
}

bool filaVazia(Fila *f) {
    return false;
}

void enfileirar(Fila *f, int x) {

}

void desenfileirar(Fila *f) {
}

//Caso a fila esteja vazia, retorna -1
int frente(Fila *f) {

}

void exibirFila(Fila *f) {

}

int tamanhoFila(Fila *f) {

}



int main() {
    Fila fila;
    inicializarFila(&fila);

    cout << "Testando Fila:\n";
    enfileirar(&fila, 10);
    enfileirar(&fila, 20);
    enfileirar(&fila, 30);
    exibirFila(&fila);

    desenfileirar(&fila);
    exibirFila(&fila);


}
