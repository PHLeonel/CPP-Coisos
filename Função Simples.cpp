#include <iostream>
using namespace std;

//retorna a + b
int soma(int a, int b)
{	
	int s;
	s = a + b;
	return s;
}
//retorna a media de x e y
float media(int a, int b)
{
	float m;
	m = (float)(a + b)/2;
	return m;
}

int main ()
{
	
	int x,y; //entradas
	int r; //resultado
	float m; //media
	
	cin >> x >> y;
	r = soma(x,y);
	m = media(x,y);
	
	
	
	cout << "r = " << r << endl;
	cout << "m = " << m << endl;
	
	return 0;
}