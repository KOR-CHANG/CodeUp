#include <stdio.h>
#include <malloc.h>
struct dwarf{
	int tall;
};
void Swap(dwarf * a, dwarf * b);
int main()
{
	dwarf * base = 0;
	base = (dwarf*)malloc(sizeof(dwarf) *10);
	for(int i = 0; i < 7; i++)
	{
		scanf("%d", &base[i].tall);
	}
	for (int i = 0; i < 7; i++)
	{
		for(int j = 0; j < 7; j++)
		{
			if (base[i].tall > base[j].tall)
			{
				Swap(&base[i], &base[j]);
			}
		}
	}
	printf("%d\n", base[0].tall);
	printf("%d", base[1].tall);
}
void Swap(dwarf * a, dwarf * b)
{
	dwarf temp;
	temp = * a;
	*a = *b;
	*b = temp;
}
