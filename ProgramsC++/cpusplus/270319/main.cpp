#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main() 
{
	float a,b,c,d,p,area;
	setlocale(LC_ALL, "Portuguese");
	cout<<"Digite 3 valores: ";
	cin>>a>>b>>c;
	
	if ((a+b)>c && (b+c)>a && (a+c>b))
	{//forma triangulo
		cout<<"Forma tri�ngulo!"<<endl;
		
		if (a>b || a>c)
		{//a nao � o menor
			if(b>c)
			{//c � o menor
				d=c;
				c=a;
				a=d;
			}
			else
			{//b � o menor
				d=b;
				b=a;
				a=d;
			}
			
			

		}
		else
		{//a � o menor
			if (b>c)
			{//b � o maior
				d=c;
				c=b;
				b=d;
			}
		}
		
			cout<<a<<endl;
			cout<<b<<endl;
			cout<<c<<endl;
		
		
	
	}
	else
	{//nao forma triangulo
		cout<<"N�o forma tri�ngulo"<<endl;
	}
	
	return 0;
}
