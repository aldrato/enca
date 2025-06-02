#include <iostream>
using namespace std;

struct No {
    int valor;
    No *proximo;
};

struct Pilha {
    No *topo;
};

void inicializarPilha(Pilha *p) {
    p->topo = nullptr;
}

bool pilhaVazia(Pilha *p) {

}

void empilhar(Pilha *p, int x) {

}

void desempilhar(Pilha *p) {

}

int topo(Pilha *p) {

}

void exibirPilha(Pilha *p) {

}

int tamanhoPilha(Pilha* p) {

}


int main() {
    Pilha pilha;
    inicializarPilha(&pilha);

    cout << "Testando Pilha:\n";
    empilhar(&pilha, 100);
    empilhar(&pilha, 200);
    empilhar(&pilha, 300);
    exibirPilha(&pilha);

    desempilhar(&pilha);

    exibirPilha(&pilha);

}
