#include <iostream>
using namespace std;


void selection_sort(int vetor[], int n)
{
	
	for(int j=0;j<n;j++) //1 + 3n + 3n + 3(a última repetição)
	{	int menor = vetor[j], pos_menor = j, aux; //5n
		for(int i= j+1; i<n; i++) //(3 + 3n/2 + 3n/2)n
		{
			if(vetor[j] < menor) //2n^2
			{
				menor = vetor[i]; //(3n/2)n						
				pos_menor = i; //(2(n/2)n
			}
		}
	aux = vetor[j]; //3n
	vetor[j] = menor; //3n
	vetor [pos_menor] = aux; //3n           swap     
	}

}





// '-'