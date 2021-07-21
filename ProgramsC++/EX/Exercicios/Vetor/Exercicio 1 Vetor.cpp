#include <iostream>
using namespace std;

int main()
{
	
	int a[6],b,i;
	
	a[0]=1;
	a[1]=0;
	a[2]=5;
	a[3]=-2;
	a[4]=-5;
	a[5]=7;
	
	b=a[0]+a[1]+a[5];
	cout<<b<<endl;
	a[4]=100;
	for (i=0;i<6;i++)
	{
		cout<<a[i]<<endl;
	}
	
	
	return 0;
}
