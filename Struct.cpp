#include <iostream>
#include <string>
using namespace std;

	struct aluno
	{
		string nome;
		float nota;
		int matricula;
	};
	

int main()
{
	aluno a[40];
	a.nome = "Ana";
	a.nota = "8.5";
	a.matricula = "83";
	
	return 0;
}

