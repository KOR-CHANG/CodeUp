#include <iostream>
#include <malloc.h>
#include <string>
#define SUM(stu) (stu.score)
typedef struct Student Student;
using namespace std;
struct Student{
	int score;
	char name[20];
};
void a(Student* base, int n);
void View(Student* base, int n);
int main ()
{
	int n = 0;
	int score;
	string name;
	cin >> n;
	int i;
	Student* base = 0;
	base = (Student*)malloc(sizeof(Student) *n);
	for (i = 0; i < n;  i++)
	{
		scanf("%s %d\n", &base[i].name, &base[i].score);
	}
	a(base, n);
	printf("%s", base[2].name);
	free(base);
	return 0;
}
void a(Student* base, int n)
{
	Student temp;
	int i;
	int j;
	for (i = n; i > 1; i--)
    {
        for (j = 1; j < i; j++)
        {
            if (SUM(base[j - 1]) < SUM(base[j]))
            {
                temp = base[j - 1];
                base[j - 1] = base[j];
                base[j] = temp;
            }
        }
    }
}
