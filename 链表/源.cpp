#include <stdio.h>
struct Student
{
	int num;
	float score;
	struct Student* next;
};




void main()
{struct Student* head, * p;
struct Student a, b, c;

a.num = 1001; a.score = 89.5;
b.num = 1003; b.score = 99.5;
c.num = 1007; c.score = 85;
head = &a;
a.next = &b;
b.next = &c;
c.next = NULL;
p = head;


	do
	{
		printf("%d %5.1lf ", p->num, p->score);
		p = p->next;

	} while (p != NULL);


}