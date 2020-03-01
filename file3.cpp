#include "stdio.h"
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
};
struct Date
{
	int month;
	int day;
	int year;
};
struct Student student1, student2;

void print_string(char str[])
{
	printf("\n%s\n",str);
}