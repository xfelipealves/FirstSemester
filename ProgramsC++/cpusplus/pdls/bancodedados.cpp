	#include <iostream>
	using namespace std;
	
	int main() 
	{
		int nota[50],i,b,a;
		string nome[50],matricula[50],pesq;

		cout<<"1 - Cadastrar novo aluno"<<endl;
		cout<<"2 - Sair do programa"<<endl;
		cin>>a;
		for (i=0;a==1;i++)
		{
			system("CLS");
			cout<<"Digite o nome do aluno: ";
			cin>>nome[i];
			cout<<"Digite a matricula do aluno: ";
			cin>>matricula[i];
			cout<<"Digite a primeira nota do aluno: ";
			cin>>nota[i];
			
			system("CLS");
			
			cout<<"1 - Cadastrar novo aluno"<<endl;
			cout<<"2 - Sair do programa"<<endl;
			cout<<"3 - Quantidade de alunos cadastrados"<<endl;
			cout<<"4 - Imprimir lista de matriculados"<<endl;
			cout<<"5 - Pesquisar dados por matricula"<<endl;
			cin>>a;
			if (a==3)
			{
				system ("CLS");
				cout<<"Quantidade de alunos cadastrados sao "<<i+1<<endl;
				cout<<endl<<"1 - Cadastrar novo aluno"<<endl;
				cout<<"2 - Sair do programa"<<endl;
				cout<<"4 - Imprimir lista de matriculados"<<endl;
				cout<<"5 - Pesquisar dados por matricula"<<endl;
				cin>>a;
				if (a==4)
				{
					system("CLS");
					for (b=0;b<=i;b++)
					{
						cout<<nome[b]<<endl;
					}
					cout<<endl<<"1 - Cadastrar novo aluno"<<endl;
					cout<<"2 - Sair do programa"<<endl;
					cout<<"5 - Pesquisar dados por matricula"<<endl;
					cin>>a;
					if (a==5)
					{
						system("CLS");
						cout<<"Digite a matricula: ";
						cin>>pesq;
						for (b=0;pesq!=matricula[b] and b<=i ;b++)
						{}
						if (b<=i)
						{//achou
							cout<<"Nome: "<<nome[b]<<endl;
							cout<<"Matricula: "<<matricula[b]<<endl;
							cout<<"Nota 1: "<<nota[b]<<endl;
						}
						else
						{//nao achou
							cout<<"Matricula nao cadastrada"<<endl;
						}
						cout<<endl<<"1 - Cadastrar novo aluno"<<endl;
						cout<<"2 - Sair do programa"<<endl;
						cin>>a;
					}
				}
				else
				{
					if (a==5)
					{
						system("CLS");
						cout<<"Digite a matricula: ";
						cin>>pesq;
						for (b=0;pesq!=matricula[b] and b<=i ;b++)
						{}
						if (b<=i)
						{//achou
							cout<<"Nome: "<<nome[b]<<endl;
							cout<<"Matricula: "<<matricula[b]<<endl;
							cout<<"Nota 1: "<<nota[b]<<endl;
						}
						else
						{//nao achou
							cout<<"Matricula nao cadastrada"<<endl;
						}
						cout<<endl<<"1 - Cadastrar novo aluno"<<endl;
						cout<<"2 - Sair do programa"<<endl;
						cout<<"4 - Imprimir lista de matriculados"<<endl;
						cin>>a;
						
						if (a==4)
						{
							system("CLS");
							for (b=0;b<=i;b++)
							{
								cout<<nome[b]<<endl;
							}
							cout<<endl<<"1 - Cadastrar novo aluno"<<endl;
							cout<<"2 - Sair do programa"<<endl;
							cin>>a;
						}
					}
				}
			}
			else
			{
				if (a==4)
				{
					system("CLS");
					for (b=0;b<=i;b++)
					{
						cout<<nome[b]<<endl;
					}
					cout<<endl<<"1 - Cadastrar novo aluno"<<endl;
					cout<<"2 - Sair do programa"<<endl;
					cout<<"3 - Quantidade de alunos cadastrados"<<endl;
					cout<<"5 - Pesquisar dados por matricula"<<endl;
					cin>>a;
					if (a==3)
					{
						system("CLS");
						cout<<"Quantidade de alunos cadastrados sao "<<i+1<<endl;
						cout<<endl<<"1 - Cadastrar novo aluno"<<endl;
						cout<<"2 - Sair do programa"<<endl;
						cout<<"5 - Pesquisar dados por matricula"<<endl;
						cin>>a;
						if (a==5)
						{
							system("CLS");
							cout<<"Digite a matricula: ";
							cin>>pesq;
							for (b=0;pesq!=matricula[b] and b<=i ;b++)
							{}
							if (b<=i)
							{//achou
								cout<<"Nome: "<<nome[b]<<endl;
								cout<<"Matricula: "<<matricula[b]<<endl;
								cout<<"Nota 1: "<<nota[b]<<endl;
							}
							else
							{//nao achou
								cout<<"Matricula nao cadastrada"<<endl;
							}
							cout<<endl<<"1 - Cadastrar novo aluno"<<endl;
							cout<<"2 - Sair do programa"<<endl;
							cin>>a;
						}
					}
					else
					{
						if (a==5)
						{
							system("CLS");
							cout<<"Digite a matricula: ";
							cin>>pesq;
							for (b=0;pesq!=matricula[b] and b<=i ;b++)
							{}
							if (b<=i)
							{//achou
								cout<<"Nome: "<<nome[b]<<endl;
								cout<<"Matricula: "<<matricula[b]<<endl;
								cout<<"Nota 1: "<<nota[b]<<endl;
							}
							else
							{//nao achou
								cout<<"Matricula nao cadastrada"<<endl;
							}
							cout<<endl<<"1 - Cadastrar novo aluno"<<endl;
							cout<<"2 - Sair do programa"<<endl;
							cout<<"3 - Quantidade de alunos cadastrados"<<endl;
							cin>>a;
							if (a==3)
							{
								system("CLS");
								cout<<"Quantidade de alunos cadastrados sao "<<i+1<<endl;
								cout<<endl<<"1 - Cadastrar novo aluno"<<endl;
								cout<<"2 - Sair do programa"<<endl;
								cin>>a;
							}
						}
					}
				}
				else
				{
					if (a==5)
					{
						system("CLS");
						cout<<"Digite a matricula: ";
						cin>>pesq;
						for (b=0;pesq!=matricula[b] and b<=i ;b++)
						{}
						if (b<=i)
						{//achou
							cout<<"Nome: "<<nome[b]<<endl;
							cout<<"Matricula: "<<matricula[b]<<endl;
							cout<<"Nota 1: "<<nota[b]<<endl;
						}
						else
						{//nao achou
							cout<<"Matricula nao cadastrada"<<endl;
						}
						cout<<endl<<"1 - Cadastrar novo aluno"<<endl;
						cout<<"2 - Sair do programa"<<endl;
						cout<<"3 - Quantidade de alunos cadastrados"<<endl;
						cout<<"4 - Imprimir lista de matriculados"<<endl;
						cin>>a;
						
						if (a==3)
						{
							system("CLS");
							cout<<"Quantidade de alunos cadastrados sao "<<i+1<<endl;
							cout<<endl<<"1 - Cadastrar novo aluno"<<endl;
							cout<<"2 - Sair do programa"<<endl;
							cout<<"4 - Imprimir lista de matriculados"<<endl;
							cin>>a;
							if (a==4)
							{
								system("CLS");
								for (b=0;b<=i;b++)
								{
									cout<<nome[b]<<endl;
								}
								cout<<endl<<"1 - Cadastrar novo aluno"<<endl;
								cout<<"2 - Sair do programa"<<endl;
								cin>>a;
							}
						}
						else
						{
							if (a==4)
							{
								system("CLS");
								for (b=0;b<=i;b++)
								{
									cout<<nome[b]<<endl;
								}
								cout<<endl<<"1 - Cadastrar novo aluno"<<endl;
								cout<<"2 - Sair do programa"<<endl;
								cout<<"3 - Quantidade de alunos cadastrados"<<endl;
								cin>>a;
								if (a==3)
								{
									system("CLS");
									cout<<"Quantidade de alunos cadastrados sao "<<i+1<<endl;
									cout<<endl<<"1 - Cadastrar novo aluno"<<endl;
									cout<<"2 - Sair do programa"<<endl;
									cin>>a;
								}
							}
						}
					}
				}
			}
		}
		
		return 0;
	}
