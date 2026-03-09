#include <iostream>
using namespace std;

//definir um pivo (geralmente na posição central)
void quicksort(int vetor[], int inicio, int fim){
    int i = inicio, j = fim;
    int pivo = vetor[(inicio + fim)/2];
    int aux;

    while(i <= j){
        while(vetor[i] < pivo)
            i++;
        while(vetor[j] > pivo)
            j--;

        if(i <= j){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i++;
            j--;
        }
    }

    if(inicio < j)
        quicksort(vetor, inicio, j);
    if(i < fim)
        quicksort(vetor, i, fim);
}

int main(){
    int vetor[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(vetor)/sizeof(vetor[0]);

    quicksort(vetor, 0, n-1);

    for(int i = 0; i < n; i++)
        cout << vetor[i] << " ";

    return 0;
}