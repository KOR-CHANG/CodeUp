	#include <stdio.h>
	#include <algorithm>
	
	using namespace std;
	
	void QuickSort(int arr[], int first, int last);
	int main()
	{
		int n, i;
		int a[100000];
		scanf("%d", &n);
		if (n >= 1 && n <= 100000)
		{
			for (i = 0; i < n; i++)
				scanf("%d", &a[i]);
			QuickSort(a, 0, n);
			for (i = 0; i < n; i++)
				printf("%d\n", a[i]);
		}
		return 0;
	}
	void QuickSort(int arr[], int first, int last)
	{
		sort(arr + first, arr + last);
	}
