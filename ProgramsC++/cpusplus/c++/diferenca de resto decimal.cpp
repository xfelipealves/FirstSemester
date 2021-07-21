#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

using namespace std;

float a,b,g,h;
int d,f,x,y;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"Digite o primeiro valor: ";
	cin>>a;
	cout<<"Digite o segundo valor: ";
	cin>>b;
	
	g=b/a;
	h=a/b;
	
	d=g;
	f=h;
	
	x=(g-d)*1000;
	y=(h-f)*1000;
	
	if (x>y)
	{cout<<"Ordem: "<<x<<">"<<y;}
	if (y>x)
	{cout<<"Ordem: "<<y<<">"<<x;}
	if (x==y)
	{cout<<x<<"="<<y;}
	
	return 0;
}
	
