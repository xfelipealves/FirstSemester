#include <iostream>
#include <locale.h>
using namespace std;
int main() 
{
	int i, b, a, j=-1, c, h, g, z1, i5, menora, lixo;
	float nota[700][4], mf[700], peso[4], auxolo, matricula[700], pesq;
	string nome[700], auxola;
	
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
		switch (a)
		{
		
		case 1:
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
			break;
		}
		
		case 2:
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
			while (lixo==1)
			{
				//achou
				system("cls");
				cout<<endl<<"           Aluno: "<<nome[b]<<endl;
				cout<<endl<<"           Matricula: "<<matricula[b]<<endl;
				cout<<endl<<"           Nota 1: "<<nota[b][0]<<endl;
				cout<<endl<<"           Nota 2: "<<nota[b][1]<<endl;
				cout<<endl<<"           Nota 3: "<<nota[b][2]<<endl;
				cout<<endl<<"           Nota 4: "<<nota[b][3]<<endl;
				cout<<endl<<"           Digite a nota que deseja avaliar (1,2,3 ou 4): ";
				cin>>z1;
				cout<<endl<<"           Digite o valor da nota: ";
				cin>> nota[b][z1-1];
				cout<<endl<<"           Nota cadastrada com sucesso!";
				cout<<endl<<endl<<"           Digite 1 para cadastrar outra nota ou 0 para sair: ";
				cin>>lixo;
			}
			break;
		}
		
		case 3:  
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
			break;
		}
		
		case 4: 
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
				cout<<"    Nota 1: "<<nota[b][0]<<endl;
				cout<<"    Nota 2: "<<nota[b][1]<<endl;
				cout<<"    Nota 3: "<<nota[b][2]<<endl;
				cout<<"    Nota 4: "<<nota[b][3]<<endl;
				cout<<"    Média Final: "<<mf[b]<<endl;
			}
			else
			{//nao achou
				cout<<endl<<"     Matricula nao cadastrada"<<endl;
			}
			break;
		}
		
		case 5:
		{//imprimir quantidade de alunos cadastrados
			system ("CLS");
			cout<<endl<<"     Quantidade de alunos cadastrados são: "<<j+1<<endl;
			break;
		}
		
		case 6:
		{//Imprimir lista de alunos cadastrados
			cout<<endl<<"  Os alunos cadastrados são: ";
			system("CLS");
			for (b=0;b<=j;b++)
			{
				cout<<endl<<"     Nome: "<<nome[b]<<endl;
				cout<<"     Matricula: "<<matricula[b]<<endl;
			}
			break;
		}
		
		case 7:
		{//Imprimir Lista de alunos por média ordenada
			system("CLS");
			for (i=0;i<=j-1;i++)
			{
				menora=i;
				for(i5=i+1;i5<=j;i5++)
				{
					if (mf[i5]>mf[menora])
					{
						menora=i5;
					}
				}
				//media final
				auxolo=mf[menora];
				mf[menora]=mf[i];
				mf[i]=auxolo;
				//nome
				auxola=nome[menora];
				nome[menora]=nome[i];
				nome[i]=auxola;
				//matricula
				auxolo=matricula[menora];
				matricula[menora]=matricula[i];
				matricula[i]=auxolo;
				//nota1
				auxolo=nota[menora][0];
				nota[menora][0]=nota[i][0];
				nota[i][0]=auxolo;
				//nota2
				auxolo=nota[menora][1];
				nota[menora][1]=nota[i][1];
				nota[i][1]=auxolo;
				//nota3
				auxolo=nota[menora][2];
				nota[menora][2]=nota[i][2];
				nota[i][2]=auxolo;
				//nota4
				auxolo=nota[menora][3];
				nota[menora][3]=nota[i][3];
				nota[i][3]=auxolo;
			}
			for (b=0;b<=j;b++)
			{
				cout<<endl<<"     Nome: "<<nome[b]<<endl;
				cout<<"     Matricula: "<<matricula[b]<<endl;
				cout<<"     Média Final: "<<mf[b]<<endl;
			}
			break;
		}
		
		case 8:
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
			break;
		}
		
		default: 
		{
			system("cls");
			cout<<endl<<"   Opção inválida, por favor escolha uma das seguintes opções:"<<endl;
			break;
		}
		
		}
		
		for (i=0; i<=j; i++)
		{//ja calcular as notas
			mf[i]=nota[i][0]*peso[0]+nota[i][1]*peso[1]+nota[i][2]*peso[2]+nota[i][3]*peso[3];				
			mf[i]=mf[i]/(peso[0]+peso[1]+peso[2]+peso[3]);
		}
		
		cout<<endl<<"   -----------------------------------------------------"<<endl;
		cout<<endl<<"    Cadastrar novo aluno............................. 1"<<endl;  //feito
		cout<<endl<<"    Cadastrar notas.................................. 2"<<endl;  //feito
		cout<<endl<<"    Cadastrar peso para as notas..................... 3"<<endl;   //feito
		cout<<endl<<"    Pesquisar um cadastro existente por matricula.... 4"<<endl;  //feito 
		cout<<endl<<"    Imprimir a quantidade de alunos cadastrados...... 5"<<endl;  //feito
		cout<<endl<<"    Imprimir lista de alunos cadastrados............. 6"<<endl;  //feito
		cout<<endl<<"    Imprimir Lista de alunos por média decrescente... 7"<<endl; //feito
		cout<<endl<<"    Imprimir conceito final.......................... 8"<<endl;     //feito
		cout<<endl<<"    Sair do programa................................. 0"<<endl<<endl;
		cout<<endl<<"    Opção: ";
		cin>>a;
	}
	
	return 0;
}
