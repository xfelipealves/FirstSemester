#include <iostream>

using namespace std;

int main (){
	int i, v[10], sv = 0, x = 0, dp;
	
	for (i = 0; i < 10; i++){
		cin >> v[i];
		sv += v[i];
	}
	
	sv = sv / 10;
	
	for (i = 0; i < 10; i++){
		x += pow(2, i - m);
	}
	
	dp = sqrt((1 / (n - 1)) * sv);
	
	return 0;
}
