#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a,i;
	float g,c;
	g=0;
	c=0;
	for (a=1; a<=a+2; a=a+1)
	{
		cin>>i;
		if (i<0)
		{
			break;
		}
		else
		{
			g=g+i;
			c=c+1;
		}
	}
	cout<<fixed<<setprecision(2)<<g/c<<endl;
	
	return 0;
}
