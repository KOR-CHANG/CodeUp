#include <stdio.h>
#include <algorithm>
using namespace std;
struct DataSort
{
	int num[50001];
	int index[50001];
};
int main()
{
	struct DataSort ds;
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &ds.num[i]); // 50 23 54 24 123
		ds.index[i] = ds.num[i];
	}
	sort(ds.num, ds.num + n);
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if (ds.index[i] == ds.num[j])
			{
				printf("%d", j);
				break;
			}
		}
	}
}
