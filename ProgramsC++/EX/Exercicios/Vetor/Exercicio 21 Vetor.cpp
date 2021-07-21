#include <iostream>
using namespace std;

int main()
{
	int a[10],b[10],c[10],i;
	
	for (i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for (i=0;i<10;i++)
	{
		cin>>b[i];
	}
	for (i=0;i<10;i++)
	{
		c[i]=a[i]-b[i];
		cout<<c[i]<<endl;
	}

	return 0;
}
