#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	double a,b,d,t;
	cin>>fixed>>setprecision(2)>>a;
	
	if (a<400.01)
	{//menor que 400
		b=0.15;
	}
	else
	{//maior que 400
		if(a>400 && a<800.01)
		{//entre 400 e 800
			b=0.12;
		}
		else
		{//maior que 800
			if(a>800 && a<1200.01)
			{//entre 800 e 1200
				b=0.10;
				
			}
			else
			{
				if(a>1200 && a<2000.01)
				{//entre 1200 e 2000
					b=0.07;
				}
				else
				{//acima de 2000
					b=0.04;
				}
			}
		}
	}
	t=a*b+a;
	d=a*b;

	
	cout<<fixed<<setprecision(2)<<"Novo salario: "<<t<<endl;
	cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<d<<endl;
	cout<<fixed<<setprecision(0)<<"Em percentual: "<<b*100<<" %"<<endl;

	
	return 0;
}
