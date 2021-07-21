#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <cstdio>
#include <cstdlib>

using namespace std;

float s,ir;



int main() 
{
	setlocale(LC_ALL, "Portuguese");
	cout<<setprecision(2)<<"Digite o valor do seu salário: R$";
	cin>>s;
	
	
	ir= s*7.5;
	ir= ir/100;
	
	
	if (s<1903.99)
	{cout<<endl<<"Atribuida alíquota de: 0.0%"<<endl<<"Parcela deduzida do imposto em R$: 0.00";}
	
	if (s>1903.98 and s<2826.66)
	{
		
		cout<<endl<<"Atribuida alíquota de 7.50%"<<endl<<"Parcela deduzida do imposto em R$: "<<setprecision(2)<<ir;
	}
	
	
	
	
	
	return 0;
}
