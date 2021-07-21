#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iomanip>

using namespace std;

int main() 
{
	float salario, i1, p1, i2, p2, i3, p3, i4, p4;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout<<fixed<<setprecision(2)<<"Digite o valor do seu salário: ";
	cin>>salario;
	
	cout<<endl<<"/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/"<<endl<<endl;
	if (salario<=1903.98)
	{cout<<"Salário de        R$ "<<salario<<endl;
	 cout<<"Usado imposto de        0%"<<endl;
	 cout<<"Imposto total de  R$ 0.00"<<endl;
	 cout<<"Parcela a deduzir R$ 0.00"<<endl;
	} else
	    {
	    	if (salario>1903.98 && salario<=2826.65)
	    	{//Aliquota de 7.5%
	    	i1=salario*7.5/100;
	    	p1=i1-142.80;
	    	cout<<"Salário de           R$ "<<salario<<endl;
	    	cout<<"Usado imposto de           7.5%"<<endl; 
			cout<<"Imposto total de     R$  "<<i1<<endl;
			cout<<"Parcela a deduzir    R$  "<<p1<<endl;
			}
			else if (salario>2826.65 && salario<=3751.05)
				{//Aliquota de 15%
				i2=salario*15/100;
				p2=i2-354.80;
				cout<<"Salário de           R$ "<<salario<<endl;
				cout<<"Usado imposto de            15%"<<endl; 
				cout<<"Imposto total de     R$  "<<i2<<endl;
				cout<<"Parcela a deduzir    R$  "<<p2<<endl;
					
			     } 
			     else if (salario>3751.05 && salario<=4664.68)
			     {//Aliquiota de 22.5%
			     i3=salario*22.5/100;
			     p3=i3-636.13;
			     cout<<"Salário de          R$ "<<salario<<endl;
			     cout<<"Usado imposto de         22.5%"<<endl;
			     cout<<"Imposto total de    R$  "<<i3<<endl;
			     cout<<"Parcela a deduzir   R$  "<<p3<<endl;
				 }
				 else if (salario>4664.68)
				 {//Aliquota de 27.5%
				 i4=salario*27.5/100;
				 p4=i4-869.36;
				 cout<<"Salário de          R$ "<<salario<<endl;
				 cout<<"Usado imposto de        27.5%"<<endl;
				 cout<<"Imposto total de    R$  "<<i4<<endl;
				 cout<<"Parcela a deduzir   R$  "<<p4<<endl;
				 }
			
		}
		
	cout<<endl<<"/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/"<<endl<<endl;
	
	return 0;
}
