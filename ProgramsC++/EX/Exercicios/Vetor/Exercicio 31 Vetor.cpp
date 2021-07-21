#include <iostream>
using namespace std;

int main()
{
	int a[10],b[10],c[10],i,k=0,j,ind;
	
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
		ind=0;
		for (j=0; j<10 and ind==0 ;j++)
		{
			if (a[i]==b[j])
			{
				c[k]=a[i];
				k++;
				ind=1;
			}
		}
	}
	for (i=0;i<k;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
