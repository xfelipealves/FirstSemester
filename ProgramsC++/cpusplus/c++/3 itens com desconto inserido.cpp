#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


float a, b, c, x, d, f, vd, y;

int main() 
{
	
	cout << "   Valor do item 1: ";
	cin>>a;
	cout << "   Valor do item 2: ";
	cin>>b;
	cout << "   Valor do item 3: ";
	cin>>c;
	cout <<endl << "   Desconto de: ";
	cin>>vd;
	
	x=a+b+c;
	y=vd/100;
	d=x*y;
	f=x*(1-y);
	

	
    cout <<endl << "       Valor total: R$ "<<x<<" ";
	cout <<endl << "   "<<vd<<"% de desconto: R$ "<<d<<" ";
	cout <<endl << "     Valor a pagar: R$ "<<f<<" ";
	
	
	system("pause");
	return 0;
}
