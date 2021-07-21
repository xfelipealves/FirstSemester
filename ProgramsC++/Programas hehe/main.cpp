#include <iostream>
#include <locale.h>
using namespace std;
int main() 
{
	int i, b, a, j=-1, c, h, g, z1, i5, menora, lixo;
	float nota[700][4], mf[700], peso[4], auxolo,  temp, matricula[700], pesq;
	string nome[700], temp1, temp2;
	
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
	for (i=0;i<700;i++)
	{
		matricula[i]=0;
	}
	for (i=0;a!=0;i++)
	{
		if (a==1)
		{//cadastrar novo aluno
			j++;
			system("CLS");
			cout<<endl<<" Cadastro de alunos"<<endl;
			cout<<endl<<"           Digite o nome do aluno: ";
			cin>>nome[j];
			cout<<endl<<"      Digite a matricula do aluno: ";
			cin>>matricula[j];
			nota[j][0]=nota[j][1]=nota[j][2]=nota[j][3]=0;
			system("CLS");
			cout<<endl<<"     Aluno cadastrado com sucesso! ";
		}
		
		for (i=0; i<=j; i++)
		{//ja calcular as notas
			mf[i]=nota[i][0]*peso[0]+nota[i][1]*peso[1]+nota[i][2]*peso[2]+nota[i][3]*peso[3];				
			mf[i]=mf[i]/(peso[0]+peso[1]+peso[2]+peso[3]);
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
			cout<<endl<<" Pesquisando um cadastro existente"<<endl;
			cout<<endl<<"    Digite a matricula: ";
			cin>>pesq;
			for (b=0;pesq!=matricula[b] and b<=j ;b++);
			if (b<=j)
			{//achou
				cout<<endl<<"    Nome: "<<nome[b]<<endl;
				cout<<"    Matricula: "<<matricula[b]<<endl;
			}
			else
			{//nao achou
				cout<<endl<<"     Matricula nao cadastrada"<<endl;
			}
		}
		
		if (a==5) //alterar por MEDIA FINAL
		{//Imprimir Lista de alunos por valor de nota descrescente
			system("CLS");
			for (i=0;i<=j-1;i++)
			{
				menora=i;
				for(i5=i+1;i5<=j;i5++)
				{
					//fazer if
					
						
					
				}
				auxolo=0;//naofeito
			}
		}
		
		if (a==6)  
		{//Cadastrar notas
			system("CLS");
			cout<<endl<<" Cadastro de notas"<<endl;
			lixo=0;
			while (lixo==0)
			{
				cout<<endl<<"           Digite a matricula do aluno: ";
				cin>>pesq;
				for (b=0; pesq!=matricula[b] and b<=j ;b++);
				if (b<=j)
				{
					lixo=1;
				}
				else
			    {
					system("CLS");
					cout<<endl<<"     Matricula nao cadastrada"<<endl;
				}
			}
				//achou
				cout<<endl<<"           Aluno: "<<nome[b]<<endl;
				cout<<endl<<"           Digite a nota que deseja avaliar (1,2,3 ou 4): ";
				cin>>z1;
				cout<<endl<<"           Digite o valor da nota: ";
				cin>> nota[b][z1-1];
				cout<<endl<<endl<<"           Nota cadastrada com sucesso!";
		}
		
		if (a==7)  
		{//cadastrar peso para as notas
			system("CLS");
			cout<<endl<<" Cadastro de Pesos"<<endl;
			lixo=1;
			while (lixo==1)
			{
				cout<<endl<<"           Digite a nota que deseja cadastrar o peso (1,2,3 ou 4): ";
				cin>>z1;
				cout<<endl<<"           Digite o valor do peso: ";
				cin>> peso[z1-1];
				cout<<endl<<endl<<"          Peso adicionado com sucesso!";
				cout<<endl<<"          Digite 1 para cadastrar outro peso ou 0 para sair: ";
				cin>>lixo;
			}
		}
		
		if (a==8)  //novo
		{//Imprimir conceito final
			system("cls");
			cout<<endl<<"  Conceito Final: "<<endl<<endl;
			for (i=0; i<=j; i++)
			{
				mf[i]=nota[i][0]*peso[0]+nota[i][1]*peso[1]+nota[i][2]*peso[2]+nota[i][3]*peso[3];
				mf[i]=mf[i]/(peso[0]+peso[1]+peso[2]+peso[3]);
			}
			
			for (b=0;b<=j;b++)
			{
				cout<<"     *******************"<<endl;
				cout<<endl<<"     Nome: "<<nome[b]<<endl;
				cout<<"     Matricula: "<<matricula[b]<<endl;
				cout<<"     Nota 1: "<<nota[b][0]<<endl;
				cout<<"     Nota 2: "<<nota[b][1]<<endl;
				cout<<"     Nota 3: "<<nota[b][2]<<endl;
				cout<<"     Nota 4: "<<nota[b][3]<<endl;
				cout<<"     Média Final: "<<mf[b]<<endl<<endl;
				cout<<"     Resultado final: ";
				if (mf[b]>=6.0)
				{
					cout<<"Aprovado"<<endl;
					cout<<"     Nota de conceito: ";
					if (mf[b]==10)
					{//A
						cout<<"A"<<endl<<endl;
					}
					else
					{
						if (mf[b]>=9.0)
						{//B
							cout<<"B"<<endl<<endl;
						}
						else
						{
							if (mf[b]>=8.0)
							{//C
								cout<<"C"<<endl<<endl;
							}
							else
							{
								if (mf[b]>=7.0)
								{//D
									cout<<"D"<<endl<<endl;
								}
								else
								{//D
									cout<<"E"<<endl<<endl;
								}
							}
						}
					}
				}
				else
				{
					cout<<"Reprovado"<<endl;
					cout<<"     Nota de conceito: F"<<endl<<endl;
				}
			}
			
			
		}
		
		cout<<endl<<"   -----------------------------------------------------"<<endl;
		cout<<endl<<"    Cadastrar novo aluno............................. 1"<<endl;  //feito
		cout<<endl<<"    Imprimir quantidade de alunos cadastrados........ 2"<<endl;  //feito
		cout<<endl<<"    Imprimir lista de alunos cadastrados............. 3"<<endl;  //feito
		cout<<endl<<"    Pesquisar um cadastro existente por matricula.... 4"<<endl;  //ALTERAR 
		cout<<endl<<"    Lista de alunos por valor de nota descrescente... 5"<<endl; //maior em cima menor em baixo //Alterar
		cout<<endl<<"    Cadastrar notas.................................. 6"<<endl;  //novo feito
		cout<<endl<<"    Colocar peso para as notas....................... 7"<<endl;   //novo feito
		cout<<endl<<"    Imprimir conceito final.......................... 8"<<endl;     //novo 
		cout<<endl<<"    Sair do programa................................. 0"<<endl<<endl;
		cout<<endl<<"    Opção: ";
		cin>>a;
	}
	
	return 0;
}
