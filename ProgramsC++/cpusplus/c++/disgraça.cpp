#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <locale.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() 


{
	setlocale(LC_ALL,  "Portuguese");
	char x[30],rf[30];
    float n1,n2,n3,n4,n5,n6,n7,n8,mf,v,dp;
    cout << std::fixed << std::setprecision(3);
	cout<<"=========================================="<<endl;
	cout<<"Pontifícia Universidade Católica de Goiás"<<endl;
	cout<<"=========================================="<<endl;
	cout<<endl;
	cout<<"Nome do Aluno: ";
	cin>>x;
	cout<<endl;
    cout<<"Data de Nascimento: ";
    cin>>x;
    cout<<endl;
    cout<<"Matrícula: ",
    cin>>x;
    cout<<endl;
    cout<<"Turma: ";
    cin>>x;
    cout<<endl;
    cout<<"Sala: ";
    cin>>x;
    cout<<endl;
    cout<<"Idade: ";
    cin>>x;
	cout<<endl;
	cout<<"=========================================="<<endl;
	cout<<"             Quadro de Notas              "<<endl;
	cout<<"=========================================="<<endl;
	cout<<"Nota 1: ";
	cin>>n1;
	cout<<"Nota 2: ";
	cin>>n2;
	cout<<"Nota 3: ";
	cin>>n3;
	cout<<"Nota 4: ";
	cin>>n4;
	cout<<"Nota 5: ";
	cin>>n5;
	cout<<"Nota 6: ";
	cin>>n6;
	cout<<"Nota 7: ";
	cin>>n7;
	cout<<"Nota 8: ";
	cin>>n8;
	
	mf=((n1+n2+n3+n4+n5+n6+n7+n8)/8);
	v= ( (pow (n1-mf,2))+ (pow(n2-mf,2)) +(pow(n3-mf,2))+ (pow(n4-mf,2)) +(pow(n5-mf,2)) +(pow(n6-mf,2)) +(pow(n7-mf,2)) +(pow(n8-mf,2))  )/8;
	dp= sqrt(v);
	
	
	
	cout<<"=========================================="<<endl;
    cout<<"Média Final: "<<mf<<" ";
    cout<<endl;
	cout<<"=========================================="<<endl;
    cout<<"Desvio Padrão: "<<dp<<" ";
    cout<<endl;
	cout<<"=========================================="<<endl;
    cout<<"Resultado Final: ";
	
	if (mf>=5.0)
	cout<<"APROVADO";
	if (mf<5.0)
	cout<<"REPROVADO";
    cout<<endl;
    cout<<"=========================================="<<endl;
	
	system("pause");
	return 0;
}
