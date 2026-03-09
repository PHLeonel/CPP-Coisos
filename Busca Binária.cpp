#include <iostream>
#include <string>
using namespace std;

	struct aluno
	{
		string nome;
		float nota;
		int matricula;
	};


// int busca_bin_aluno_matricula(int tamanho, int m, aluno alunos[]) //BUSCA BINÁRIA
// {
// 	int inicio = 0,meio,fim = tamanho - 1,;
// 	
// 	while(inicio <= fim) 								  	//3 logn
// 	{
// 		meio = (inicio + fim)/2;                            //5 logn
// 		if(alunos[meio].matricula == matricula_buscada)   	//4 logn
// 		{
// 			return meio;      								//0
// 		}
// 		else if(matricula_buscada > aluno[meio].matricula)  //4 logn
// 		{
// 			inicio = meio + 1;    							//3 logn
// 		}
// 		else 
// 		{
// 			fim = meio - 1;                    				//0
// 		}
// 	}
// 	return -1               								//0
//}	// 19 logn + 4 (ut)
		
	
//   /\___/\
//	/       \
//	| ^   ^ |  - odeio a minha vida!
//	\	~	/
//	 \_____/
	
	
	
string buscaMatriculas(int tamanho, int m, aluno alunos[]) 
{	
	for(int i=0;i<tamanho;i++) //4 + 6n ou 1 + 6n
	{
		if(alunos[i].matricula == m) //4n
		{
		 	return alunos[i].nome; //return já termina a função
		}
	}

return "matricula inexistente"; //0
}
	
string buscaNotas(int tamanho, int n, aluno alunos[])
{
		for(int i=0;i<tamanho;i++) //4 + 6n
	{
		if(alunos[i].nota == n) //4n
		{	
			return alunos[i].nome; //return já termina a função
		}
	}	

return "matricula inexistente";	//0
}	

int main ()
{	
	const int tamanho = 5; //quantidade de alunos a serem analisados //1
	aluno alunos[tamanho];
	
	int alunosAprov = 0;
	int matricula;
	float nota;
	
	cout << "insira os 5 nomes: " << endl;
	for(int i=0;i<5;i++)
    {
    	getline(cin , alunos[i].nome);
	}
	
	cout << "insira as 5 matriculas: " << endl;
	for(int i=0;i<5;i++)
    {
    	cin >> alunos[i].matricula;
	}
	
	cout << "insira as 5 notas: " << endl;
	for(int i=0;i<5;i++)
    {
    	cin >> alunos[i].nota;
	}
		
		
	cout << "insira a matricula a ser buscada: " << endl;
	cin >> matricula;
	cout << "insira a nota a ser buscada: " << endl;
	cin >> nota;
	
	for(int i=0;i<5;i++)
	{
		if(alunos[i].nota >= 60)
		{
			alunosAprov++;
		}
	}
	
	cout << "alunos aprovados: " << alunosAprov << endl;
	
	cout << "nome do aluno pela matricula buscada: " << buscaMatriculas(tamanho,matricula,alunos) <<  endl;
	cout << "nome do aluno pela nota buscada: " << buscaNotas(tamanho,nota,alunos) << endl;
	
	return 0;
}


	
