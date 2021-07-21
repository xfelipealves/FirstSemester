#include <iostream>

using namespace std;

int main(){
	int m[10][3], i, j
	
	for (i = 0; i < 10; i++){
		for (j = 0; j < 3; j++){
			cin >> m[i][j];
		}
	}
	
	for (i = 0; i < 10; i++){
		if (m[i][0] < m[i][1] && m[i][0] << m[i][2]){
			p1++;
		}
		else{
			if (m[i][1] < m[i][0] && m[i][1] << m[i][2]){
				p2++;
			}
			else{
				p3++;
			}
		}	
	}
	
	cout << p1 << p2 << p3;
	
	return 0;
}
