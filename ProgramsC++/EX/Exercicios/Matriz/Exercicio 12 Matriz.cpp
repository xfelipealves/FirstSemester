#include <iostream>
using namespace std;

int main()
{
	int m[3][3],i,j,k;
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			cin>>m[i][j];
		}
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<m[j][i]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
