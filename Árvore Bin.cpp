#include <iostream>
using namespace std;

struct No{
    int valor;
    No* esquerda;
    No* direita;
};

No* criarNo(int valor){
    No* novo = new No();
    novo->valor = valor;
    novo->esquerda = NULL;
    novo->direita = NULL;
    return novo;
}

void imprimirEmOrdem(No* raiz){
    if(raiz != NULL){
        imprimirEmOrdem(raiz->esquerda);
        cout << raiz->valor << " ";
        imprimirEmOrdem(raiz->direita);
    }
}

int main(){
    No* raiz = criarNo(10);
    raiz->esquerda = criarNo(5);
    raiz->direita = criarNo(15);
    raiz->esquerda->esquerda = criarNo(2);
    raiz->esquerda->direita = criarNo(7);

    imprimirEmOrdem(raiz);

    return 0;
}