#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() 
{
	double a,b,c,d,p,area,k,h,n;
	int opcao;
	string tri;
	setlocale(LC_ALL, "Portuguese");
	cout<<"O programa ir� mostrar se forma tri�ngulo ou n�o"<<endl<<endl;
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
			

		if (a==b && b==c)
		{//equilatero
			n= sqrt(3);
			area= ( (a*a)*n )/ 4;
			tri="Tri�ngulo do tipo equil�tero!";
		}
		else
		{
			if (a==b || b==c || a==c)
			{//is�celes
				n=b*b-(c/2)*(c/2);
				h= sqrt(n); 
				area= b*h/2;
				tri="Tri�ngulo do tipo is�sceles!";
			}
			else
			{//escaleno
				k=(a+b+c)/2;
				n=k * (k-a) * (k-b) * (k-c);
				tri="Tri�ngulo do tipo escaleno";
				
			}
		}
		
		cout<<endl;
		cout<<"Menu"<<endl<<endl;
		cout<<"1 - Perimetro"<<endl;
		cout<<"2 - �rea do tri�ngulo"<<endl;
		cout<<"3 - Mostrar o tipo de tri�ngulo"<<endl<<endl;
		cout<<"Digite a opera��o desejada: ";
		cin>>opcao;
		
		switch (opcao)
		{
			case 1:
				p=a+b+c;	
				cout<<"O per�metro do tri�ngulo �: "<<p<<endl;
				break;
			case 2:
				cout<<"A �rea do tri�ngulo �: "<<area<<endl;
				break;
			case 3:
				cout<<tri<<endl;
				break;
		}
		
	}
	else
	{//nao forma triangulo
		cout<<"N�o forma tri�ngulo"<<endl;
	}
	
	return 0;
}
