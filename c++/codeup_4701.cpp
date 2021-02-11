#include <cstdio>
#define abs(x) ((x) < 0 ? -(x) : (x))
 
int n, m[100005], a, A = 1000000000, b, s1 = 1000000000, s2 = 1000000000;
 
int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &m[i]);
        if(i > 1 && abs(m[i]) < A) 
			A = abs(m[i]), a = i;
    }
    b = a + 1;
    if(m[1] >= 0){
        printf("%d %d", m[1], m[2]);
        return 0;
    }
    if(m[n] <= 0){
        printf("%d %d", m[n - 1], m[n]);
        return 0;
    }
    while(1){
        if(abs(m[a] + m[b]) < abs(s1 + s2))
            s1 = m[a], s2 = m[b];
        if(a == 1 && b == n) 
			break;
        if(m[a] + m[b] < 0 && b < n)
            b++;
        else if(a > 1)
            a--;
    }
    printf("%d %d", s1, s2);
}
 
