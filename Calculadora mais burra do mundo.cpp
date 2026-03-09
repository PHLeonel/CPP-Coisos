#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {

{
	int num1, num2, result;
	char op;
	
	cout << "Bota o primeiro numero: " << endl;
	cin >> num1;
	cout << "Digita o Operador: " << endl;
	cin >> op;
	cout << "Bota o segundo numero: " << endl;
	cin >> num2;
	
	if (op == '+')
	result = num1 + num2;
	
	else if (op == '-')
	result = num1 - num2;
	
	else if (op == '*')
	result = num1 * num2;
	
	else if (op == '/')
	result = num1 / num2;
	
	else {
	cout << "Aí não dá né filha da **** !";
	exit(0);
}
	
	cout << num1 << op << num2 << "=" << result << endl;
	
	return 0;
	
}
	
	
	
	
	return 0;
}
