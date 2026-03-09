#include <iostream>
using namespace std;

int soma(int v[], int n) //quando vetor, duas informações pra função
{
	int s1 = 0; //sona dos elementos do vetor
	int i; //contador
	
	for (i=0; i<n; i++)
		s1 += v[i];
	return s1;
}

int main ()
{
	int v[10];
	int i; //contador
	int n = 5; // numeros cadastrados
	int s;
	
	//Lendo elementos do vetor
	for (i=0; i<n;i++)
		cin >> v[i];
	
	//Calculando e mostrando a soma
	
	s = soma(v, n); //sem int e nada
	
	cout << "soma = " << s << endl;
}
