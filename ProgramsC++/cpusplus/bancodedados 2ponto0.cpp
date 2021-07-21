	#include <iostream>
	using namespace std;
	int main() 
	{
		int i,b,a,j=0;
		float nota[700];
		string nome[700],matricula[700],pesq;
		cout<<"1 - Cadastrar novo aluno"<<endl;
		cout<<"0 - Sair do programa"<<endl;
		cin>>a;
		for (i=0;a!=0;i++)
		{
			if (a==1)
			{	
				j++;
				system("CLS");
				cout<<"Digite o nome do aluno: ";
				cin>>nome[j];
				cout<<"Digite a matricula do aluno: ";
				cin>>matricula[j];
				cout<<"Digite a primeira nota do aluno: ";
				cin>>nota[j];
				system("CLS");
			}
			
			if (a==2)
			{
				system ("CLS");
				cout<<"Quantidade de alunos cadastrados sao "<<j<<endl;
			}
			
			if (a==3)
			{
				system("CLS");
				for (b=1;b<=j;b++)
				{
					cout<<nome[b]<<endl;
				}
			}
			
			if (a==4)
			{
				system("CLS");
				cout<<"Digite a matricula: ";
				cin>>pesq;
				for (b=0;pesq!=matricula[b] and b<=j ;b++);
				if (b<=j)
				{//achou
					cout<<"Nome: "<<nome[b]<<endl;
					cout<<"Matricula: "<<matricula[b]<<endl;
					cout<<"Nota 1: "<<nota[b]<<endl;
				}
				else
				{//nao achou
					cout<<"Matricula nao cadastrada"<<endl;
				}
			}
			
			if (a==5)
			{
				
			}
			
			cout<<endl;
			cout<<"1 - Cadastrar novo aluno"<<endl;
			cout<<"2 - Quantidade de alunos cadastrados"<<endl;
			cout<<"3 - Imprimir lista de alunos cadastrados"<<endl;
			cout<<"4 - Pesquisar um cadastro existente por matricula"<<endl;
			cout<<"5 - Lista de alunos por valor de nota descrescente"<<endl; //maior em cima menor em baixo 
			cout<<"0 - Sair do programa"<<endl;
			cin>>a;
		}
		
		return 0;
	}
