#include <iostream>

using namespace std;
 
int main() 
{
	int a,g,d,n;
	a=0;
	g=0;
	d=0;
	n=0;
	while (n!=4)
	{
		cin>>n;
		switch (n)
		{
			case 1: a++;
				break;
			case 2: g++;
				break;
			case 3: d++;
				break;
		}
	}
	cout<<"MUITO OBRIGADO"<<endl;
	cout<<"Alcool: "<<a<<endl;
	cout<<"Gasolina: "<<g<<endl;
	cout<<"Diesel: "<<d<<endl;
	
	
    return 0;
}
