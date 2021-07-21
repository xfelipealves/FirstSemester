#include <iostream>
#include <locale.h>
using namespace std;
int main() 
{
	int i, b, a, j=-1, c, h, g, z1, lixo;
	float nota[700][4], pesos[4], temp;
	string nome[700], matricula[700], pesq, temp1, temp2;
	
	setlocale(LC_ALL, "Portuguese");
	system("color 4F");
	
	cout<<endl<<"   Banco de dados de estudantes"<<endl;
	cout<<endl<<"  ------------------------------"<<endl;
	cout<<endl<<"    Cadastrar novo aluno.. 1"<<endl;
	cout<<endl<<"    Sair do programa...... 0"<<endl<<endl;
	cout<<endl<<"    Opção: ";
	cin>>a;
	
	for (i=0;i<4;i++)
	{
		peso[i]=1;
	}
	
	for (i=0;a!=0;i++)
	{
		if (a==1)
		{//cadastrar novo aluno
			j++;
			system("CLS");
			cout<<endl<<" *Cadastro de alunos*"<<endl;
			cout<<endl<<"           Digite o nome do aluno: ";
			cin>>nome[j];
			cout<<endl<<"      Digite a matricula do aluno: ";
			cin>>matricula[j];
			system("CLS");
		}
		
		if (a==2)
		{//imprimir quantidade de alunos cadastrados
			system ("CLS");
			cout<<endl<<"     Quantidade de alunos cadastrados são: "<<j+1<<endl;
		}
		
		if (a==3) 
		{//Imprimir lista de alunos cadastrados
			cout<<endl<<"  Os alunos cadastrados são: ";
			system("CLS");
			for (b=0;b<=j;b++)
			{
				cout<<endl<<"     Nome: "<<nome[b]<<endl;
				cout<<"     Matricula: "<<matricula[b]<<endl;
			}
		}
		
		if (a==4) //alterar com todas notas
		{//Pesquisar um cadastro existente por matricula
			system("CLS");
			cout<<endl<<" *Pesquisando um cadastro existente*"<<endl;
			cout<<endl<<"    Digite a matricula: ";
			cin>>pesq;
			for (b=0;pesq!=matricula[b] and b<=j ;b++);
			if (b<=j)
			{//achou
				cout<<endl<<"    Nome: "<<nome[b]<<endl;
				cout<<"    Matricula: "<<matricula[b]<<endl;
				cout<<"    Nota 1: "<<nota[b]<<endl;
			}
			else
			{//nao achou
				cout<<endl<<"     Matricula nao cadastrada"<<endl;
			}
		}
		
		if (a==5) //alterar por MEDIA FINAL
		{//Imprimir Lista de alunos por valor de nota descrescente
			system("CLS");
			for (h=0;h<=j;h++)
			{
				if (h!=j)
				{
					if (nota[h]>nota[h+1])
					{
						temp=nota[h];
						nota[h]=nota[h+1];
						nota[h+1]=temp;
						//pimba
						temp1=nome[h];
						nome[h]=nome[h+1];
						nome[h+1]=temp1;
						//bilada
						temp2=matricula[h];
						matricula[h]=matricula[h+1];
						matricula[h+1]=temp2;
					}
				}
			}
			for (h=0;h<=j;h++)
			{
				cout<<endl<<"    "<<nota[h]<<endl;
			}
		}
		
		if (a==6)  //FEITO novo
		{//Cadastrar notas
			system("CLS");
			cout<<endl<<" *Cadastro de notas*"<<endl;
			lixo=0;
			while (lixo==0)
			{
				cout<<endl<<"           Digite a matricula do aluno: ";
				cin>>pesq;
				for (b=0;pesq!=matricula[b] and b<=j ;b++);
				if (b>j);
				{
					system("CLS");
					cout<<endl<<"     Matricula nao cadastrada"<<endl;
				}
				else
				{
					lixo=1;
				}
			}
				//achou
				cout<<endl<<"           Digite a nota que deseja avaliar (1,2,3 ou 4): ";
				cin>>z1;
				cout<<endl<<"           Digite o valor da nota: ";
				cin>> nota[b][z1];
		}
		
		if (a==7)  //FEITO novo
		{//cadastrar peso para as notas
			system("CLS");
			cout<<endl<<" *Cadastro de Pesos*"<<endl;
			lixo=1;
			while (lixo==1)
			{
				cout<<endl<<"           Digite a nota que deseja cadastrar o peso (1,2,3 ou 4): ";
				cin>>z1;
				cout<<endl<<"           Digite o valor do peso: ";
				cin>> peso[z1-1];
				cout<<endl<<endl<<"          Peso adicionado com sucesso!"
				cout<<endl<<"          Digite 1 para cadastrar outro peso: ";
				cin>>lixo;
			}
		}
		
		if (a==8)  //novo
		{//Imprimir média final
			
		}
		
		cout<<endl<<"   -----------------------------------------------------"<<endl;
		cout<<endl<<"    Cadastrar novo aluno............................. 1"<<endl;  //feito
		cout<<endl<<"    Imprimir quantidade de alunos cadastrados........ 2"<<endl;  //feito
		cout<<endl<<"    Imprimir lista de alunos cadastrados............. 3"<<endl;  //feito
		cout<<endl<<"    Pesquisar um cadastro existente por matricula.... 4"<<endl;  //ALTERAR 
		cout<<endl<<"    Lista de alunos por valor de nota descrescente... 5"<<endl; //maior em cima menor em baixo //Alterar
		cout<<endl<<"    Cadastrar notas.................................. 6"<<endl;  //novo feito
		cout<<endl<<"    Colocar peso para as notas....................... 7"<<endl;   //novo feito
		cout<<endl<<"    Calcular média final............................. 8"<<endl;     //novo 
		cout<<endl<<"    Sair do programa................................. 0"<<endl<<endl;
		cout<<endl<<"    Opção: ";
		cin>>a;
	}
	
	return 0;
}
