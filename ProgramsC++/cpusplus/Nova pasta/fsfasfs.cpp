#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	float s,i;
	s=1;
	for (i=2;i<=100;i=i+1)
	{
		cout<<fixed<<setprecision(2);
		s=s+1/i;
	}
	cout<<fixed<<setprecision(2)<<s<<endl;
	return 0;
}
