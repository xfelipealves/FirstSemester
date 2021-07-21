#include <iostream>


using namespace std;

float a,b,c;

int main()
{

	cin>>a>>b>>c;
	
	//Para A maior que todos
	if (a>b and a>c and b>c)
	{
	cout<<c<<endl;
	cout<<b<<endl;
	cout<<a<<endl;
	cout<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	}
	
	if (a>b and a>c and c>b)
	{
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<a<<endl;
	cout<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	}
	
	
	
	//Para B maior que todos
	if (b>a and b>c and a>c)
	{
	cout<<c<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	}
	
	if (b>a and b>c and c>a)
	{
	cout<<a<<endl;
	cout<<c<<endl;
	cout<<b<<endl;
	cout<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	}
	
	
	
	//Para C maior que todos
	if (c>a and c>b and a>b)
	{
	cout<<b<<endl;
	cout<<a<<endl;
	cout<<c<<endl;
	cout<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	}
	
	if (c>a and c>b and b>a)
	{
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	}
	
	

	return 0;
}
