#include <iostream>
using namespace std;

int main()
{
	int m[5][5],i,j,k;
	
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			m[i][j]=0;
			if (i==j)
			{
				m[i][j]=1;
			}
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
