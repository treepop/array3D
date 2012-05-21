#include <iostream>
#include <cmath>

using namespace std;

#define MAX 50

int main()
{
	int max = MAX,count = 0;
	//double *A = new A[max,max,max];
	double A[MAX][MAX][MAX];

	for(int i=0;i<max;i++)
		for(int j=0;j<max;j++)
			for(int k=0;k<max;k++)
			{
				A[i][j][k] = count;
				count++;
			}

	for(int i=0;i<max;i++)
		for(int j=0;j<max;j++)
			for(int k=0;k<max;k++)
			{
				A[i][j][k] = sin(A[i][j][k]);
			}

	return 0;
}