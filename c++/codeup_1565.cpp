#include <stdio.h>

int gcd(int p, int q){ 
	if(p==0) 
		return q; 
	return gcd(q%p, p);
}
long long int lcm (int a, int b)
{
	long long int min = b;
	long long int max = a;
	if (min > max){
		min = a;max = b;
	}
	return max / gcd(max,min) * min;;
}
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%lld\n", lcm(a, b));
}
