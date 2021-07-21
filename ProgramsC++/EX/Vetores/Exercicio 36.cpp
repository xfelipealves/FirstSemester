#include <iostream>

using namespace std;

int main (){
	float v[10], temp;
	int i;
	
	for (i = 0; i < 10; i++){
		cin >> v[i];
	}
	
	for (i = 0; i < 10; i++){
		for (j = i+1; j < 10; j++){
			if (v[i] > v[j]){
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}	
		}
	}
	
	for (i = 0; i < 10; i++){
		cout << v[i];
	}
	
	return 0;
}
