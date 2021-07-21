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
	
	if (a>b and a>c and b>c)
	{cout<<a<<">"<<b<<">"<<c;}
	
	if (a>b and a>c and c>b)
	{cout<<a<<">"<<c<<">"<<b;}
	

	return 0;
}
