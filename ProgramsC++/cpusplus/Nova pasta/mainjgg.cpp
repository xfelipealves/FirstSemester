#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	double salario,a,q,b,c;
	cin>>fixed>>setprecision(2)>>salario;
	
	if (salario<2000.01)
	{
		cout<<"Isento"<<endl;
	}
	else
	{
		if (salario>2000 && salario<3000.01)
		{//a e q
			a=salario-2000;
			q=a*0.08;
			cout<<"R$ "<<fixed<<setprecision(2)<<q<<endl;
		}
		else
		{
			if(salario>3000 && salario<4500.01)
			{
				a=salario-2000;
				if (a>1000)
				{
					b=a-1000;
					a=1000*0.08;
					b=b*0.18;
					q=a+b;
					cout<<"R$ "<<fixed<<setprecision(2)<<q<<endl;
				}
			}
			else
			{
				if(salario>4500)
				{
					a=salario-2000;
					if (a>1000)
					{
						b=a-1000;
						if(b>1500)
						{
							c=b-1500;
							a=1000*0.08;
							b=1500*0.18;
							c=c*0.28;
							q=a+b+c;
							cout<<"R$ "<<fixed<<setprecision(2)<<q<<endl;
						}
					}	
				}
			}
		}
	}
	
	return 0;
}
