#include <iostream>
using namespace std;

int main()
{
	int idade [5], i;
	
	int soma;
	int media;
	int N;
	
	cin >> N;

	for (i=0; i<N; i++)
	{
		cin >> idade[i];
	
	}
	//Calculando e mostrando idade media
	
	soma = 0;
	for(i = 0; i < N; i++)
	{
		soma+= idade[i];
	}
	
	media = (float)soma/N;
	
	cout << "Idade Media: " << media << endl;
	
	return 0;
}