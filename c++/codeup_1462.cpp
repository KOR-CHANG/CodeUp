#include <stdio.h>

int main()
{
	int n, k = 1;
	scanf("%d", &n);
	int a[n+1][n+1];
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			a[i][j]= k++;
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			printf("%d ", a[j][i]);	
		}
		printf("\n");
	}
	return 0;
}
