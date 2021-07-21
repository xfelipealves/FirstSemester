#include <iostream>
using namespace std;

int a,b,op;
int main() 
{
	cout<<"Digite o primeiro numero: ";
	cin>>a;
	cout<<"Digite o segundo numero: ";
	cin>>b;
	cout<<"Operacoes" << endl;
	cout << "1 - Soma" << endl << "2 - Produto" << endl << "3 - Diferenca" << endl << "4 - Quociente" << endl << "5 - Resto" << endl;
	cout << "Qual operacao deseja executar? "; 
	cin >> op;
	
	switch (op)
	{
	case 1:	
		cout<< "Soma: " <<a+b <<endl;
		break;
	case 2:
		cout<< "Produto: " << a*b <<endl; 
		break;
	case 3:
		cout<< "Diferença: " << a-b << " ou " << b-a<<endl;
		break;
	case 4:
		cout<< "Quociente: " << a/b << " ou " << b/a<<endl;
		break;
	case 5:
		cout<< "Resto: " << a%b << " ou "<< b%a<<endl;
		break;
	}
	return 0;
}
