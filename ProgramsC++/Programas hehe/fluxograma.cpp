#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;


int main() 
{
	int a,b,c,d,e,f,g,h;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"Que coment�rio voc� deve fazer?"<<endl<<endl;
	cout<<endl<<"Seu Amigo: Acabei de voltar do m�dico, e parece que estamos gr�vidos!"<<endl<<endl;
	
	cout<<"Voc� sequer conhece este cara?"<<endl<<endl;
	cout<<"1 - SIM"<<endl<<"2 - N�O"<<endl;
	
	cin>>a;
	system("CLS");
	
	if (a==1)
	{//a SIM 1
		cout<<"Voc� gosta dele?"<<endl<<endl;
		cout<<"1 - SIM"<<endl<<"2 - N�O"<<endl;
		cin>>b;
		system("CLS");
		
		if(b==1)
		{//b SIM 1
			cout<<"Como voc�s se conhecem?"<<endl<<endl;
			cout<<"1 - SOMOS PARENTES"<<endl<<"2 - MELHORES AMIGOS"<<endl<<"3 - EX COLEGAS"<<endl<<"4 - A GENTE FICAVA"<<endl;
			cin>>c;
			system("CLS");
			
			if (c==1)
			{//c SOMOS PARENTES 1
				cout<<"Pr�ximos?"<<endl<<endl;
				cout<<"1 - SIM"<<endl<<"2 - N�O"<<endl;
				cin>>d;
				system("CLS");
				
				if (d==1)
				{//d SIM 1
					
					//B
					
					cout<<"Fique feliz junto."<<endl<<endl;
					cout<<"[B]Melhor amigo(a): AEAEAE isso ae! Muito feliz! S� espero q vc ainda tenha tempo pros nossos porres, hein?"<<endl;
				}
				else
				{//d NAO 2
					cout<<"Voc� � muito mais velho(a) ou jovem?"<<endl<<endl;
					cout<<"1 - VELHA(O)"<<endl<<"2 - MAIS JOVEM"<<endl;
					cin>>e;
					system("CLS");
					
					if (e==1)
					{//e VELHA(O) 1
						
						//A
						
						cout<<"Tente comentar, mas falhe e acabe atualizando o pr�prio status."<<endl<<endl;
						cout<<"[A]Sr Terceira Idade: Parabens criancas vovo ama voces!!!!!!!!!!"<<endl;
					}
					else
					{//e MAIS JOVEM 2
						cout<<"Voc� vai acabar postando um comet�rio metido a engra�adinho n�?"<<endl<<endl;
						cout<<"1 - SIM"<<endl<<"2 - SIM"<<endl;
						cin>>f;
						system("CLS");
						
						//G
						
						cout<<"Seja um babaca idiota, mesmo sem ter anonimato."<<endl<<endl;
						cout<<"[G]Troll: Beleza, mas tem certeza que o filho � teu mesmo?"<<endl;
					}
				}
			}
			else
			{//c != 1
				if (c==2)
				{//c MELHORES AMIGOS 2
					cout<<"Melhores amigos MESMO ou voc� s� est� sendo bizarro de novo?"<<endl<<endl;
					cout<<"1 - MESMO"<<endl<<"2 - BEM...";
					cin>>d;
					system("CLS");
					
					if (d==1)
					{//d MESMO 1
						
						//B
						
						cout<<"Fique feliz junto."<<endl<<endl;
						cout<<"[B]Melhor amigo(a): AEAEAE isso ae! Muito feliz! S� espero q vc ainda tenha tempo pros nossos porres, hein?"<<endl;
					}
					else
					{//d BEM... 2
						
						//E
				
						cout<<"Esquece, n�o vai rolar."<<endl<<endl;
						cout<<"[E]Stalker: Hahaha qria que a gnt estivesse gravidos tbm! brinks mas eh serio."<<endl;
					}
				}
				else
				{//c != 1 e 2
					if(c==3)
					{//c EX COLEGAS 3
						cout<<"Voc�s mant�m contato?"<<endl<<endl;
						cout<<"1 - POUCO"<<endl<<"2 - SIM! AINDA SOMOS BONS AMIGOS"<<endl;
						cin>>d;
						system("CLS");
						
						if (d==1)
						{//d POUCO 1
							
							//C
							
							cout<<"Lutando uma guerra perdida."<<endl<<endl;
							cout<<"[C]Conhecido(a): Uau, vc j� com filho? P.S. A gente devia sair qqr hora!"<<endl;
						}
						else
						{//d SIM! AINDA SOMOS BONS AMIGOS 2
							
							//D
							
							cout<<"Droga, parece que voc� vai ter que comprar presente."<<endl<<endl;
							cout<<"[D]Amigo(a): Parab�ns! Tudo de bom!"<<endl;
						}
					}
					else
					{//c != 1 2 e 3
						if (c==4)
						{//c A GENTE FICAVA 4
							
							cout<<"Terminou bem?"<<endl<<endl;
							cout<<"1 - SIM! AINDA SOMOS BONS AMIGOS"<<endl<<"2 - N�O, EU TOMEI UM P�"<<endl;
							cin>>d;
							system("CLS");
							
							if (d==1)
							{//d SIM! AINDA SOMOS BONS AMIGOS 1
								
								//D
							
								cout<<"Droga, parece que voc� vai ter que comprar presente."<<endl<<endl;
								cout<<"[D]Amigo(a): Parab�ns! Tudo de bom!"<<endl;
							}
							else
							{//d N�O, EU TOMEI UM P�
								
								//E
				
								cout<<"Esquece, n�o vai rolar."<<endl<<endl;
								cout<<"[E]Stalker: Hahaha qria que a gnt estivesse gravidos tbm! brinks mas eh serio."<<endl;
							}
						}
					}
				}
				
			}
		} 
		else
		{//b NAO 2
			cout<<"Por qu�?"<<endl<<endl;
			cout<<"1 - A GENTE FICAVA"<<endl<<"2 - IGNOROU TODAS AS MINHAS CARTAS DE AMOR E FOTOS NUAS"<<endl;
			cin>>c;
			system("CLS");
		}
	}
	
	else
	{//a NAO 2
		cout<<"Gostaria de conhecer?"<<endl<<endl;
		cout<<"1 - FARIA TUDO POR ISSO!"<<endl<<"2 - N�O"<<endl;
		cin>>b;
		system("CLS");
		
		if (b==1)
		{//b FARIA TUDO POR ISSO 1
			cout<<"Ok, isso foi muito bizzaro."<<endl<<endl;
			cout<<"1 - MAS SOMOS PERFEITOS UM PARA O OUTRO!"<<endl<<"2 - T� CERTO"<<endl;
			cin>>c;
			system("CLS");
			
			if (c==1)
			{//c MAS SOMOS PERFEITOS UM PARA O OUTRO 1
			
				//E
				
				cout<<"Esquece, n�o vai rolar."<<endl<<endl;
				cout<<"[E]Stalker: Hahaha qria que a gnt estivesse gravidos tbm! brinks mas eh serio."<<endl;
			}
			else
			{//c TA CERTO 2
			
				//F
				
				cout<<"N�o comente, apenas continue sendo bizarro(a)."<<endl<<endl;
				cout<<"[F]Bizarro: ..."<<endl;
			}
		}
		
		else
		{//b NAO 2
			cout<<"Ent�o por que voc�s s�o amigos no Facebook?"<<endl<<endl;
			cout<<"1 - S� PRA ZOAR"<<endl;
			cin>>c;
			system("CLS");
			
			if	(c==1)
			{//c S� PRA ZOAR 1
				cout<<"Voc� vai acabar postando um comet�rio metido a engra�adinho n�?"<<endl<<endl;
				cout<<"1 - SIM"<<endl<<"2 - SIM"<<endl;
				cin>>d;
				system("CLS");
				
				//G
				
				cout<<"Seja um babaca idiota, mesmo sem ter anonimato."<<endl<<endl;
				cout<<"[G]Troll: Beleza, mas tem certeza que o filho � teu mesmo?"<<endl;
				
			}
		}
	}
	return 0;
}
