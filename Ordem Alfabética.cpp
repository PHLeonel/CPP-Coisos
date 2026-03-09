#include <iostream>
#include <string>
using namespace std;

int main ()

//Ordem Alfabética

{
	
string nome1, nome2;

getline(cin >> ws, nome1);
getline(cin >> ws, nome2);
cout << endl;

if (nome1 < nome2)
{
	cout << nome1 << endl;
	cout << nome2 << endl;
}

else
{
	cout << nome2 << endl;
	cout << nome1 << endl;
}

return 0;

}