#include <iostream>
using namespace std;

void bubblesort(int vetor[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                int aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(){
    int vetor[] = {5, 2, 9, 1, 3};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    bubblesort(vetor, n);

    for(int i = 0; i < n; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}