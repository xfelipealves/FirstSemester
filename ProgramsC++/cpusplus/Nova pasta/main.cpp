#include <iostream>
using namespace std;

int main( )
{
	int n,a,s1,s,s2,i,j,k;
	s1=0;
	s=0;
	s2=1;
	cin>>n;
	while (n>0 and n<61)
	{
			a=0;
			for (i=0;i<n;i++)
			{
				if (i>1)
				{
					s=s1+s2;
					s1=s2;
					s2=s;
				}
				if (i==n-1)
				{
					j=s/10;
					k=s-j*10;
					if (j==3 or k==3)
					{
						cout<<s<<endl;
						a++;
					}
					else
					{
						if (s%3==0)
						{
							cout<<s<<endl;
							a++;
						}
					}
				}
			}
			
		}
		s1=0;
		s=0;
		s2=1;
		cin>>n;
		cout<<a;
	
	return 0;
}
