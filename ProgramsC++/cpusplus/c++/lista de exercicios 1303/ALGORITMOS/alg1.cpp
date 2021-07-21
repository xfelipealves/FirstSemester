#include <iostream>
using namespace std;

float r, volume;

int main() 
{
	cout << "Digite o valor do raio: ";
	cin >> r;
	volume = (4* 3.14*(r*r*r))/3;
	cout << endl<<"Volume esfera: "<<volume<<endl;
	return 0;
}
