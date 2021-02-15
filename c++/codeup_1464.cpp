#include <stdio.h>

int main()
{
	int n,m, k = 1;
	int a[101][101] = {};
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			a[i][j]= k++;
		}
	}
	for(int i = n; i >= 1; i--)
	{
		for(int j = m; j >= 1; j--)
		{
			printf("%d ", a[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
