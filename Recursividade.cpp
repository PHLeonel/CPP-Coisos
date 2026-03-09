#include <iostream>
using namespace std;

int fatorial(int n){
	if(n == 1)
		return 1;
	return n * fatorial(n-1); //fatorial de 15 é (15 * fatorial de 14)
}

int fibonacci(int n){
	if( n == 0 || n == 1)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2); //chamada da função duas vezes  //O(2^n) (vai crescendo exponencialmente)
}

int fibonacci_it(int n){ //O(n)
	int fib[n+1];
	fib[0] = 1;
	fib[1] = 1;
	for(int i=2; i<=n; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
	return fib[n];
}


int busca_bin_rec(int vetor[], int i, int f, int elemento){  //log2(n) * O   //n é tamanho //quando um elemento da função vai sendo dividido é possível usar o teorema mestre
	if (i > f)
		return -1;
	
	int meio = (i + f)/2; //abrindo no meio
	if(vetor[meio] == elemento){
		return meio;
		if(vetor[meio] > elemento)
			return busca_bin_rec(vetor, i, meio-1, elemento);
		else
			return busca_bin_rec(vetor, meio+1, f, elemento);
		
	}
}

//função recursiva não pode chamar ela mesma infinitamente

int main()
{
	int numero;
	cin >> numero;
	cout << fatorial(numero) << endl;	
	return 0;
}