#include <iostream>
using namespace std;

void soma(int a, int b, int &s1) //& pra retornar essa função pra main
{
	s1 = a+b;
}

int main()
{
	int x,y,s = 0;
	x = 2;
	y = 3;
	soma(x,y,s);
	cout << "soma = " << s << endl;
	return 0;
}