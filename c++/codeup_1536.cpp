#include <stdio.h>

int n;

long long int d[110];

// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld", f());
  return 0;
}
