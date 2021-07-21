#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
	int n,a;
	float x,y,b[a];
	string d;
	
	cin>>n;
	
	for (a=0; a<n; a=a+1)
	{
		cin>>x>>y;
		if (y==0)
		{
			d="divisao impossivel";
		}
		else
		{
			b[a]=x/y;
		}
	}
	for (a=0; a<n; a=a+1)
	{
		if (d=="divisao impossivel")
		{
			cout<<d<<endl;
		}
		else
		{
			cout<<fixed<<setprecision(1)<<b[a]<<endl;
		}
	}
	
	return 0;
}
