#include <iostream>
using namespace std;

int main() 
{
	float t,grau,n1,n2,nota1;
	int i,b,n;
	string nome;
	
	t=0.0;
	n1=0.0;
	n2=0.0;
	
	cin>>n;
	for (i=1; i<=n; i++)
	{
		cin>>nome;
		cin>>grau;
		
		for (b=1; b<=7; b++)
		{
			cin>>nota1;
			if (nota1>n1)
			{
				t=t+n1;
				n1=nota1;
			}
			else
			{
				if (nota1<=n2)
				{
					t=t+n2;
					n2=nota1;
				}
				else
				{
					t=t+nota1;
				}
			}
		}
		
		cout<<nome<<endl;
		cout<<t<<endl;
	}
	return 0;
}
