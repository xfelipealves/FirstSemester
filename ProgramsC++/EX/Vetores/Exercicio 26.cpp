#include <iostream>

using namespace std;

int main (){
	
	float real[5];
	int x, i;
	for (i = 0; i < 5; i++){
		cin >> real[i];
	}
	
	cin >> x;
	
	switch (x){
		case 0:
			break;
		case 1:
			for (i = 0; i < 5; i++){
				cout << real[i];
			}
			break;
		case 2:
			for (i = 4; i >= 0; i--){
				cout << real[i];
			}
		default:
			cout << "Codigo invalido";
	}
	
	return 0;
}
