#include <stdio.h>
int a[100001] = {0};
int main()
{
	int n, i, j;
	int max = 0, input;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &input);
		a[input]++;
		if (input > max)
			max = input;
	}
	for (i = 0; i <= max; i++)
	{
		for(j = 0; j < a[i];  j++)
		{
			printf("%d ", i);
		}
	}
}
