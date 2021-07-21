#include <iostream>
using namespace std;

int a,b;
int main() 
{
	cout<<"Digite o primeiro numero: ";
	cin>>a;
	cout<<"Digite o segundo numero: ";
	cin>>b;
	
	cout<< "Soma: " <<a+b <<endl;
	cout<< "Produto: " << a*b <<endl; 
	cout<< "Diferença: " << a-b << " ou " << b-a<<endl;
	cout<< "Quociente: " << a/b << " ou " << b/a<<endl;
	cout<< "Resto: " << a%b << " ou "<< b%a<<endl;
	
	return 0;
}
