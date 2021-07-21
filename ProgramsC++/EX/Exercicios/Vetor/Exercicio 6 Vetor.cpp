#include <iostream>

using namespace std;

int main(){
	int v[10], i, m = 0, me = 9999999;
	
	for (i = 0; i < 10; i++){
		cin >> v[i];
		
		if (v[i] > m){
			m = v[i];
		}
		else if (v[i] < me){
			me = v[i];
		}
	}
	
	cout << m << me;
	
	return 0;
}
