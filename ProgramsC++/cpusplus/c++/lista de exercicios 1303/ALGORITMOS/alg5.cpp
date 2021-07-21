#include <iostream>
using namespace std;

float a,b;
int main() 
{
	cout<<"Digite o primeiro numero: ";
	cin>>a;
	cout<<"Digite o segundo numero: ";
	cin>>b;
	
	if  (a==b)
	{cout<<"iguais";
	}
	else if (a>b)
	{
	cout<<a<<" maior que "<<b<<endl<<"E "<<b<<" menor que "<<a;
	}
	else
	{
	cout<<b<<" maior que "<<a<<endl<<"E "<<a<<" menor que "<<b;
	}
	
	
	
	return 0;
}
