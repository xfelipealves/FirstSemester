#include <iostream>
using namespace std;

int main()
{
	int x,a;
	cin>>x;
	for (a=x+1; a<=x+12; a=a+1)
	{
		if (a%2==1)
		{
			cout<<a<<endl;
		}
	}
	
	return 0;
}
