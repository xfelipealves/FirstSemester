#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int numero,a,i;
	float s,n1,n0,d,pezin,n;
	string nomezin;
	
	cin>>numero;
	for (a=0;a<numero;a++)
	{
		s=0;
		n1=0;
		n0=100;
		
		cin>>nomezin;
		cin>>pezin;
		
		for (i=0; i<7; i++)
		{		
			cin>>n;
			if (n>n1)
			{
				d=n1;
				n1=n;
				if (d<=n1)
				{
					n0=d;
				}
				else
				{
					s=s+d;
				}
			}
			else
			{
				if (n<n0)
				{
					d=n0;
					n0=n;
					if (d<n1)
					{
						s=s+d;
					}
				}
			}	
		}
		
		cout<<nomezin<<" "<<fixed<<setprecision(2)<<s*pezin<<endl;
	}
	return 0;
}
