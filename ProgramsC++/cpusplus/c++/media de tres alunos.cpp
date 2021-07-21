#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


float a, b, c, x, r;

int main() 
{
	
	
	cout << "Digite a nota do aluno 1: ";
	cin>>a;
	
	cout << "Digite a nota do aluno 2: ";
	cin>>b;
	
	cout << "Digite a nota do aluno 3: ";
	cin>>c;
	
	x=a+b+c;
	r=x/3;
	

	cout <<endl << "A media dos 3 alunos eh: "<<r<<" ";
	
	
	
	system("pause");
	return 0;
}
