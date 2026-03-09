#include <iostream>
using namespace std;

int hash_aux(int k, int m){
	int hk = k%m; //hash
	if(hk < 0)
		return hk;
		
	else
		return
}

int hash_linear() //terminar

int main ()
{
	int m = 13;
	int tabela_hash[m];
	
	for(int j=0; j<m;j++)
		tabela_hash[j] = -1; //esvaziando as posições
	
	//insetindo um elemento
	int k,hk,i;
	
	while(cin >> k && k!=-1){
		i=0;
		while(i<m){
		hk = hash_linear(k,m,i); //dando a posição desse elemento e inserindo seu valor
		if(tabela_hash[hk] == -1){ //se a posição tá vazia
			tabela_hash[hk] = k;
			break;
		}
		else
			hk++;
		}
			
	if (i == m)
	cout << "Tabela Cheia" << endl;		
				
	}
	
	
	//buscando um elemento
	while(cin >> k && k!=-1){
		i = 0;
		while (i<m){
			hk = hash_linear(k,m.i);
			if(tabela_hash[hk] == -1){
				cout << "Nao encontrado." << endl;
				break;
			} else if(tabela_hash[hk] == k){
				cout << "Foi encontrado na posicao " << hk;
				cout << endl;
				break;
			} else
		}
		
		
		
		
	}
}




//quando colisão, o outro apaga a posição
