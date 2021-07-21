#include <iostream>

using namespace std;

int main() 
{
	int x,y,b,a;
	cin>>x>>y;
	b=1;
	for (a=1 ; a<=x; a=a+1)
	{
		while (b<=y)
		{
			if (a<y)
			{
				cout<<a<<" ";
			}
			else
			{
				cout<<a<<endl;
			}
			b=b+1;
		}
		cout<<endl;
		b=0;
	}
	
	return 0;
}
