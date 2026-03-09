#include <iostream>
using namespace std;

void insetion_sort(int vetor[], int n){ // total = 7n^2 + 9n - 12
	int i,j;
	for(j=1; j<n; j++){ // 1 + 3n + 3(n-1)
		aux = vetor[j]; // 3(n-1)
		for(int i=j-1; i>=0; i--){// 3(n-1) + 2(n-1)((n/2)+1) + 3(n-1)(n/2)      //comparação de quantas vezes j e i serão executados  //n = quantos elementos/tamanho
			if(vetor[i] > aux){ // 4(n-1)(n/2)    //o for de j e o for de i
				vetor[i + 1] = vetor[i]; // 5(n-1)(n/2)
			}
			else {
				break; // no pior caso não irá cair no break
			}
		}
		vetor[i + 1] = aux;  // 4(n-1)
	}
}