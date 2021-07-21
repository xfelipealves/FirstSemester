#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() 
{
	double a,b,c,d,ang,p,area,k,h,n,seno, angulo;
	int opcao;
	setlocale(LC_ALL, "Portuguese");
	cout<<"Digite 3 valores: ";
	cin>>a>>b>>c;
	
	if ((a+b)>c && (b+c)>a && (a+c>b))
	{//forma triangulo
		cout<<"Forma triângulo!"<<endl;
		
		if (a>b || a>c)
		{//a nao é o menor
			if(b>c)
			{//c é o menor
				d=c;
				c=a;
				a=d;
			}
			else
			{//b é o menor
				d=b;
				b=a;
				a=d;
			}
			
		}
		else
		{//a é o menor
			if (b>c)
			{//b é o maior
				d=c;
				c=b;
				b=d;
			}
		}
			

		if (a==b && b==c)
		{//equilatero
			n= sqrt(3);
			area= ( (a*a)*n )/ 4;
			cout<<"Triângulo do tipo equilátero!"<<endl;
		}
		else
		{
			if (a==b || b==c || a==c)
			{//isóceles
				n=b*b-(c/2)*(c/2);
				h= sqrt(n); 
				area= b*h/2;
				cout<<"Triângulo do tipo isósceles!"<<endl;
			}
			else
			{//escaleno
				k=(a+b+c)/2;
				n=k * (k-a) * (k-b) * (k-c);
				area=sqrt(n);
				cout<<"Triângulo do tipo escaleno!"<<endl;
			}
		}
		
		cout<<endl;
		cout<<"Menu"<<endl;
		cout<<"1 - Perimetro"<<endl;
		cout<<"2 - Área do triângulo"<<endl;
		cout<<"3 - Ângulos em radianos"<<endl;
		cout<<"Digite a operação desejada: ";
		angulo = 60;
		cin>>opcao;
		
		switch (opcao)
		{
			case 1:
				p=a+b+c;	
				cout<<"O perímetro do triângulo é: "<<p<<endl;
				break;
			case 2:
				cout<<"A área do triângulo é: "<<area<<endl;
				break;
			case 3:
				ang = acos (seno) / 360 * 3.14;
				cout<<"Ângulo em radianos é: "<<angulo<< " rad"<< endl;
				break;
		}
		
		//falta angulos e radianos
	}
	else
	{//nao forma triangulo
		cout<<"Não forma triângulo"<<endl;
	}
	
	return 0;
}
