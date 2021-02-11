#include <stdio.h>

int main()
{
	int n,i,j;
	int l,d,x,y;
	int e,f;
	scanf("%d %d", &e, &f);
	int a[e+1][f+1] = {};
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if (d == 0){
			for(j = 0; j < l; j++)
				a[x][y+j] = 1;
		}else if(d == 1){
			for(j = 0; j < l; j++)
				a[x+j][y] = 1;
		}
	}
	for(i = 1; i <= e; i++)
	{
		for(j = 1;  j <= f; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
