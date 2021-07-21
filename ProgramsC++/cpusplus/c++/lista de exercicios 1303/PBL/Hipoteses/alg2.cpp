#include <iostream>

using namespace std;

int ts;

int main() 
{
	cout<<"Digite o valor do tempo gasto em segundos: ";
	cin>>ts;
	
    cout << ts / 3600 << ":" << (ts % 3600) / 60 << ":" << ts % 60;
	
	return 0;
}
