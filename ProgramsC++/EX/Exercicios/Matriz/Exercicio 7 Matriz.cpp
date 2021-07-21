#include <iostream>

using namespace std;

int main (){
	int a[10][10], i, j;
	
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (i < j){
				a[i][j] = 2 * i + 7 * j - 2;
			}
			else{
				if (i == j){
					a[i][j] = pow(2, 3 * i) - 1;
				}
				else{
					a[i][j] = pow(3, 4 * i * 3) - pow(2, 5 * j) + 1;
				}
			}
		}
	}
	
	return 0;
}
