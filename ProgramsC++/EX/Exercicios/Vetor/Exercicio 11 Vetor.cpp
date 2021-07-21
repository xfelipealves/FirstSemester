#include <iostream>
using namespace std;

int main()
{
	int i;
	float a[10],b=0,s=0;
	a[0]=1;
	for (i=1;i<10;i++)
	{
		a[i]=i*0.5*a[i-1]*(-1);
		if (a[i]<0)
		{
			b++;
		}
		else
		{
			s=s+a[i];
		}
	}
	cout<<b<<endl;
	cout<<s<<endl;
	
	return 0;
}
