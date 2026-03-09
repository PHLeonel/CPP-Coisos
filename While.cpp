#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    int doacao;
	int doadores;
    int total;
   
    
    total = 0;
    cin >> doacao;
    
    doadores = 0;
    while(doacao != -1)
	{
		total = total + doacao;
		doadores += 1;
		
		cin >> doacao;	
	}
	
	cout << "total = " << total << endl;
	cout << "doadores = " << doadores << endl;
	
    return 0;
}