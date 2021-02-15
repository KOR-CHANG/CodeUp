#include <stdio.h>

int main()
{
	int n, m,k = 1;
	scanf("%d %d", &n, &m);
	int a[n+1][m+1];
	for(int i = 1; i <= m; i++)
	{
		for(int j = n; j >= 1; j--)
		{
			a[j][i]= k++;
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = m; j >= 1; j--)
		{
			printf("%d ", a[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
