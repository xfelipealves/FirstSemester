#include <iostream>

using namespace std;
int d,s;

int main() 
{
	cout<<"Digite o numero de dias: ";
	cin>>d;
	
	s=d/7;
	
	cout<< s <<" semanas "<< d-s*7 <<" dias";
	
	
	return 0;
}
