#include "stdio.h"
void delete_string(char str[], char ch)
{
	int i, j;
	for ( i=j = 0; str[i]!='\0'; i++)
	{
		if (str[i]!=ch)
		{
			str[j++] = str[i];
		}
		str[j] = '\0';

	}
}
void common_divisor()
{
	int a, b, c, m, t;
	printf("Please input a num:\n");
	scanf_s("%d%d",&a,&b);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	m = a * b;
	c = a % b;
	while (c!=0)
	{
		a = b;
		b = c;
		c = a % b;

	}
	printf("���Լ����:\n%d\n",b);
	printf("��С��������:\n%d\n", m/b);
	//������github
}