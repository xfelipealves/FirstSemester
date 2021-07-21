#include <iostream>
#include <string.h>
using namespace std;
int c,z;
string nome[20], idade[20];

int main() 
{
	
	cout<<"Quantos alunos voce quer cadastrar? ";
	cin>>z;
	
	if (z==20 || z<20)
	{
	
		for (c=1; c<=z;c++)
		{	
		
			cout<<"Entre com o nome do aluno "<<c<<" : ";
			cin>>nome[c];
			system("cls");
			cout<<"Entre com a idade do aluno "<<c<<" : ";
			cin>>idade[c];
			system("cls");
			
		}
		
		for (c=1; c<=z;c++)
		{
			cout<<endl<<"Nome "<<c<<": "<<nome[c]<<endl;
			cout<<"Idade "<<c<<": "<<idade[c]<<endl;
		}
		
	}
	else
	{
		cout<<endl<<"Impossivel cadastrar mais do que 20 alunos"<<endl;
	}
	
	return 0;
}
