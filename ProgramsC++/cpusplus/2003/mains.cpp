#include <iostream>
#include <iomanip>

using namespace std;
float a,b,c,p,x;

int main() 
{
	cin>>a>>b>>c;
	
	if (a+b>c && c+b>a && c+a>b)
	{//forma triangulo
		p=a+b+c;
		cout<<fixed<<setprecision(1)<<"Perimetro = "<<p<<endl;
	}
	else
	{//nao forma
		x=((a+b)*c)/2;
		cout<<fixed<<setprecision(1)<<"Area = "<<x<<endl;
	}
	
	
	return 0;
}
