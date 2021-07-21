#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <cstdio>
#include <cstdlib>

using namespace std;

float a,b,c;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"Digite o primeiro número: ";
	cin>>a;
	cout<<"Digite o segundo número: ";
	cin>>b;
	cout<<"Digite o terceiro número: ";
	cin>>c;
	
	//Para A maior que todos
	if (a>b and a>c and b>c)
	{cout<<a<<">"<<b<<">"<<c;}
	
	if (a>b and a>c and c>b)
	{cout<<a<<">"<<c<<">"<<b;}
	
	if (a>b and a>c and b==c)
	{cout<<a<<">"<<b<<"="<<c;}
	
	
	//Para B maior que todos
	if (b>a and b>c and a>c)
	{cout<<b<<">"<<a<<">"<<a;}
	
	if (b>a and b>c and c>a)
	{cout<<b<<">"<<c<<">"<<c;}
	
	if (b>a and b>c and a==c)
	{cout<<b<<">"<<a<<"="<<c;}
	
	
	//Para C maior que todos
	if (c>a and c>b and a>b)
	{cout<<c<<">"<<a<<">"<<b;}
	
	if (c>a and c>b and b>a)
	{cout<<c<<">"<<b<<">"<<a;}
	
	if (c>a and c>b and a==b)
	{cout<<c<<">"<<a<<"="<<b;}
	
	
	//Para todos iguais
	if (a==b and b==c and a==c)
	{cout<<a<<"="<<b<<"="<<c;}
	

	return 0;
}
