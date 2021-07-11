// C练手.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define NDEBUG
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h >
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
struct Student
{
	int num;
	float score;
	struct Student* next;
};
int main()
{
	float sum_lnx;
	int a, b, c, d;
	int max_2(int x, int y);
	int max_3(int x, int y,int z);
	int sum();
	void hello();
	void print_xxx();
	float lnx();
	void check_rule();
	void data_output_test();
	void char_test();
	void char_test_2();
	void eq_solve();
	void IF_test();
	void Case_exchange();
	void Switch_Menu_test();
	void choice_paragram();
	void year_paragram_1();
	void year_paragram_2();
	void Piecewise_function();
	void Relational_operator();
	void Square_root();
	void Piecewise_function_IF();
	void number_part();
	void while_exp();
	void do_while_exp();
	void pi_times();
	void multi_plus();
	void factorial_add();
	void Multiple_summation();
	void Number_of_daffodils();
	void Fibonacci_fraction();
	void monkey_eat_peach();	
	void sqrt_iteration();
	void Newton_solve();
	void Dichotomy();
	void stupid();
	void draw_star();
	void deskmate_manage();
	void Fibonacci_array();
	void Bubble_sort();
	void Two_dimensional_data();
	void Char_array();
	void String_show();
	void String_show_str();
	void Character_segmentation();
	void select_sort();
	void Prime_number_100();
	void Sum_of_diagonal_elements_of_matrix();
	void Sequential_insertion();
	void Sequential_insertion_2();
	void Two_dimensional_array_saddle_points();
	//Sequential_insertion_2();
	void Reverse_order();
	void Yang_Hui_triangle();
	// Yang_Hui_triangle();
	void Search_by_half();
	void print_diamond_star();
	// print_diamond_star();
	 void translate_code();
	 void solve_hanio();
	 void extern_ex();
	 extern void common_divisor();
	 void pointer_test();
	 void pointer_exchange();
	 void exchange_test();
	 void exchange_test_3();
	 void array_pointer();
	 void array_output();
	 void inv_exchange();
	 void sort_order_pointer();
	 void Two_dimensional_address();
	 void Two_dimensional_pointer();
	 void test_aver();
	 void test_search();
	 void copy_string_test();
	 void copy_string_test_1();
	 void copy_string_test3();
	 void format_test();
	
	  //copy_string_test3();
	  void copy_string_test4();
	  void function_pointer();
	  void multiply_pointer();
	  void pointer_array_pointer_var();
	  void pointer_array_element();
	  void Memory_allocation();
	  void Linked_list();
	  void union_test();
	  void SendPornPicture();
	  void assert_test();
	  assert_test();
	 //  SendPornPicture();
	  // union_test();
	  // Linked_list();
	  // Memory_allocation();
	   //pointer_array_element();
	  //pointer_array_pointer_var();

	   //multiply_pointer();
	   //function_pointer();
	  //format_test();
	  // copy_string_test4();
	 //copy_string_test_1();
	  //copy_string_test();
	 // test_search();

	 // test_aver();
	 //Two_dimensional_pointer();

	 // Two_dimensional_address();
	 //sort_order_pointer();
	 //inv_exchange();
	  //array_output();
	 // array_pointer();
	 // exchange_test_3();
	 // exchange_test();
	 // pointer_exchange();
	 //pointer_test();
	 // common_divisor();
	 //extern_ex();
	 // solve_hanio();
	 //translate_code();


	// Search_by_half();
	// Two_dimensional_array_saddle_points();
	 //Reverse_order();
	//Sequential_insertion();
	//Sum_of_diagonal_elements_of_matrix();
	// select_sort();
	//	 Prime_number_100();
		//Character_segmentation();
	//String_show_str();
	 //String_show();
	//Char_array();
	//Two_dimensional_data();
	 //	Bubble_sort();
	 //Fibonacci_array();

	 //deskmate_manage();
	//draw_star();
	//stupid();
	//Dichotomy();
	 //Newton_solve();
	//monkey_eat_peach();
	// sqrt_iteration();
	 // Fibonacci_fraction();
   // Number_of_daffodils();
//	Multiple_summation();
	//factorial_add();
	 //multi_plus();
//	do_while_exp();

	//pi_times();
	//while_exp();
	// Relational_operator();
	//Piecewise_function_IF();    
	// number_part();

	//Square_root();
	//Piecewise_function();
	//year_paragram_2();
	//choice_paragram();
    //Switch_Menu_test();
    //Case_exchange();
	//eq_solve();
    //IF_test();
	//check_rule();
	//data_output_test();
	//char_test();
	//char_test_2();

	//print_xxx();
	//scanf("%d %d %d",&a,&b,&c);
	//d=max_3(a, b, c);
	//printf("%d",d);

	//sum_lnx =lnx();
	//printf("Lnx= %f\n", sum_lnx);;;
	

}

/*求和函数*/
int sum()
{
	int a, b, sum;
	a = 123;
	b = 13;
	sum = a + b;
	printf("sum=%d\n",sum);
	return 0;
}
/*求最大函数*/
int max_2(int x,int y)
{
	int z;
	if (x > y)
		z = x;
	else
		z = y;
	return z;

}
/*三者最大函数，调用两者最大的逻辑*/
int max_3(int x, int y,int z)
{
	int w;
	//w = max_2(x, y);
	//w = max_2(w, z);
	//w = max_2(max_2(x, y), z);
	w = x > y ? x : y;
	w = w > z ? w : z;
	return w;

}
/*hello word */
void hello()
{
	printf("Hello World!!\n");
}
/*多行输出*/
void print_xxx()
{
	int i;
	for (i=0;i<4;i++)
	{
		printf("*****\n");
		for(int j=0;j<i+1;j++)
			printf("  ");

	}
}
/*Ln2 的泰勒展开计算*/
float lnx()
{
	float sum = 0;
	int i = 1, sign = 1;

	for  (i = 1; i <=100; i++)
	{
		sum = sum + sign*1 / float(i);
		printf("%d\n",i);
		sign = -sign;

	}
	return sum;
}
/*验证a-=b+c*/
void check_rule()
{
	int a=1, b=2, c=5;
	a -= b + c;
	printf("%d\n",a);
}
/*%m.nf数据输出*/
void data_output_test()
{
	int c = -1;
	double a = 1.0;     // 双精度能保证 15位有效数字，非常之六
	float b = 1000.0;   // 6~7位数字有效数字   平常基本够用不需要过于浪费
	double x = 1234567890.00000000;

	char p = 'B', q = 'O', r = 'Y';

	//printf("%20.15f\n",a/3);
	//
	//printf("%20.15f\n", b/ 3);
	//printf("%-20.15f\n", b / 3);//紧靠左边站
	//printf("%10.8e\n",123.456);

	//printf("%d\t%o\t%x\n", c,c,c);
	//printf("%d\t%e\t%g\n", x, x, x);//单个变量的整数输出格式会导致信息的损失
	//printf("%f\t%e\t%g\n",x,x,x);
	//
	putchar(p);
	putchar(q);
	putchar(r);
	putchar('\n');
}
void char_test()
{
	char a, b, c;
	//a = getchar();
	//b = getchar();
	//c = getchar();

	//putchar(a);
	//putchar(b);
	//putchar(c);

	//putchar(getchar());
	//putchar(getchar());
	//putchar(getchar());

	printf("%d",getchar());
}
void char_test_2()
{
	char c1, c2;
	c1 = getchar();
	c2 = c1 + 32;
	printf("\n大写字母:%c\t小写字母:%c\n",c1,c2);
}
/*二次函数进行分类求解*/
void eq_solve()
{
	double a, b, c, disc, x1, x2, p, q;
	scanf("%lf%lf%lf",&a,&b,&c);
	disc = b * b - 4 * a * c;
	printf("The equation \n");
	if (fabs(a) <=1e-6)
		printf("is not a quadratic");
	else{

		p = -b / (2 * a);
		q = sqrt(fabs(disc)) / (2 * a);

		if (fabs(disc) <= 1e-6)
		{

			printf("方程有两个相同的解%8.4f\n",p);

		}
		else {

			if (disc>1e-6)
			{
				x1 = p + q;
				x2 = p - q;
				printf("实数根x1为%7.2f\n实数根x2=%7.2f\n", x1, x2);
			}
			else
			{
				
				printf("虚数解x1=%8.4f+%8.4fi\nx2有虚数解为%8.4f-%8.4fi\n",p,q,p,q);
			}

		}
	}
}
/*if else的括号规则*/
void IF_test()
{
	double x,y,tmp=0;
	scanf("%lf",&x);
	if (x < 0)																				
		y = -1;
	//else
	//	if (x == 0)
	//		y = 0;
	//	else
	//		y = 1;
	else
		y = 0;
	tmp = 2;
	printf("%7.2f%7.2f",y,tmp);
	
	 
}
/*大小写转换*/
void Case_exchange()
{
	char ch;
	scanf("%c",&ch);
	ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
	printf("%c\n",ch);
}
/*switch菜单*/
void Switch_Menu_test()
{
	char ch;
	int a=1, b=2, c=3;
	ch = getchar();

	switch (ch)
	{
	case'a':
	case'A': printf("%d",max_2(a, b));  break;
	case'b':
	case'B':printf("%d", max_3(a, b, c));break;
	default: putchar('\a\t');

	}


}
/*闰年判断*/
void year_paragram()
{
	int year, leap;
	printf("enter year:");
	scanf("%d",&year);
	if (year%4==0)
	{
		if (year % 100 == 0)
		{
			if (year%400==0)
			{
				leap = 1;

			}
			else {
				leap = 0;
			}
		}
		leap = 1;	
	}
	else
	{
		leap = 0;
	}


	if (leap)
	{
		printf("%d是闰年\n",year);

	}
	else
	{

		printf("%d不是闰年\n", year);
	}

}
void year_paragram_1()
{
	int year, leap;
	printf("enter year:");
	scanf("%d", &year);
	if (year%4!=0)
	{
		leap = 0;
	}
	else if (year % 100 != 0)
	{
		leap = 1;
	}
	else if (year % 400 != 0)
	{
		leap = 0;
	}
	else {
		leap = 1;
	}
	if (leap)
	{
		printf("%d是闰年\n", year);

	}
	else
	{

		printf("%d不是闰年\n", year);
	}
}
/*闰年判断*/
void year_paragram_2()
{
	int year, leap;
	printf("enter year:");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		leap = 1;
	}
	else {
		leap = 0;
	}

		if (leap)
		{
			printf("%d是闰年\n", year);

		}
		else
		{

			printf("%d不是闰年\n", year);
		}
}
/*switch函数的分段函数实现只有整数较为符合，多个数还是使用if进行分类*/
void Piecewise_function()
{
	int c, s;
	float p, w, d, f;
	printf("please enter price,weight,discount:");
	scanf("%f,%f,%d",&p,&w,&s);
	if (s >= 3000) c = 12;
	else c = s / 250;
	switch (c)
	{
	case 0: d = 0; break;
	case 1: d = 2; break;
	case 2:
	case 3: d = 2; break;
	case 4: 
	case 5: 
	case 6: 
	case 7: d = 8; break;
	case 8: 
	case 9: 
	case 10: 
	case 11: d = 10; break;
	case 12: d = 15; break;
	default:
		break;
	}
	f = p * w * s*(1 - d / 100);
	printf("freight=%10.2f\n",f);
	


}
/*IF进行分类的函数*/
void Piecewise_function_IF()
{
	float x,f;
	printf("Please input x\n");
	scanf("%f",&x);

	if (x < 1)
		f = x;
	else if (x >= 1 && x < 10)
	{
		f = 2 * x - 1;
	}
	else {
		f = 3 * x - 11;
	}
	printf("%f",f);

}
/*运算符优先级实验*/
void Relational_operator()
{
	int a=3, b=4, c=5, x,y;
	printf("%d\t",a+b>c&&b==c);
	printf("%d\t",a||b+c&&b-c);
	printf("%d\t",!(a>b)&&!c||1);
	printf("%d\t",!(x=a)&&(y=b)&&0);
	printf("%d\t",!(a+b)+c-1&&b+c/2);
}
void Square_root()
{
	double a ;
	m:
	printf("Please input a integer\n");
	scanf("%lf",&a);
	if(a>0&&a<1000)
		printf("%.0f\n",sqrt(a));
	else
	{
		goto m;
	}
}
void number_part()
{
	long x,c=0;
	int i = 0, m;
	printf("Please input a number\n");
	scanf("%ld",&x);
	while (1)
	{
		m = x % 10;
		
		printf("%d",m);
		x = x / 10;
		
		if (!x)
		{
			c = c+m;
			i++;
			break;
		}
		c = (c + m) * 10;
		i++;
	}
	printf("\t%ld\t%ld\n", i,c);

}
void while_exp()
{
	int sum=0, i=1;

	while (i <= 100)
	{
		sum = sum + i;
		i++;
	}
	printf("%d\n",sum);

}
void do_while_exp()
{
	int sum = 0, i=0;

	do
	{
		sum = sum + i;
		i++;

	} while (i<=100);
	printf("%d", sum);                                                                                                                                                                                                                                        
}
void pi_times()
{
	int sign=1;
	double i = 1.0,sum = 0,term=1;
	while (fabs(term)>=1e-6)
	{
		
		term = sign/i;
		sum = sum +term  ;
		i=i+2;
		sign = -sign;
	}
	printf("%f\n",sum*4);

}
void multi_plus()
{
	long sum = 0,result=0;
	int term,xinput,i=0,n;
	printf("Please input a  nubmer and n\n");
	scanf("%d%d",&xinput,&n);
	//for (i = 0; i <= 5; i++)
	//{
	//	result = result * 10 + xinput;
	//	//printf("%ld\n",result);

	//}
		for (i = 0; i <= n; i++)
	{
		result = result * 10 + xinput;
		//printf("%ld\n",result);
			sum = sum + result;

	}
		printf("%d",sum);
	

}
void factorial_add()
{
	long term=1,sum=0;
	int n,i;
	printf("Please input a number n\n");
	scanf("%d",&n);

	for (int j = 1; j <= n; j++)
	{
		for (i = 1, term = 1; i <= j; i++)
		{
			term = term * i;
		}

		sum = sum + term;
	}


	printf("%ld\n",sum);
 }
void Multiple_summation()
{
	double  sum3=0;
	long sum1 = 0, sum2 = 0;
	int i;
	//printf("Please enter a number k\n");
	//scanf("%d", &k);

	for( i=1;i<=100;i++)
	{
		sum1 = sum1 + i;
	}
	for (  i = 1; i <= 50; i++)
	{
		sum2 = sum2 + i*i;
	}
	for (i = 1; i <= 10; i++)
	{
		sum3 = sum3 + 1/double(i);
	}


	printf("%lf",sum1+sum2+sum3);
}
void Number_of_daffodils()
{
	int sum=0,term=0,j,tmp;

	for (int i = 100; i <= 999; i++)
	{
		j = i;
		sum = 0;	
		do
		{
			tmp = j % 10;
			term = tmp * tmp * tmp;
			sum = sum + term;
			j = j / 10;

		} while (j!=0);
		
		if (sum == i)
			printf("%d\n",i);
	}

}
/*待验证*/
void Fibonacci_fraction()
{
	int i=0, j,f1=1,f2=2,f3;
	double term,sum=0;
	do {
		term = f2 / double(f1);
		sum = sum + term;
		f2 = f1 + f2;
		f1 = f2;
		i++;
	} while (i <= 20);
		printf("%lf",sum);

	


}
void monkey_eat_peach()
{
	int xn,xn_later,i;
	xn_later = 1;
	for (i = 0; i < 10; i++)
	{
		xn = (xn_later + 1) * 2;
		xn_later = xn;
		i++;
	}
	printf("最初的小桃桃数量%d\n", xn);
	



}
/*待验证*/
void sqrt_iteration()
{
	printf("please input a \n");
	float a;
	scanf("%f",&a);
	double xn=1e-6,xn1=1;
	while (1)
	{
		xn1 = (xn + a / (xn))/2;
		//if (fabs(xn1 - xn) < 1e-5)
			//break;
		if (fabs(2 * xn1 * xn1 * xn1 - 4 * xn1 * xn1 + 3 * xn1) < 1e-5)
			break;
		xn = xn1;

	}

	printf("%f\n",xn);
	


}
/*牛顿切线法*/
float Cubic_equation(float x)
{	return 2*x*x*x-4*x*x+3*x-6;
}
float Cubic_equation_(float x)
{
	return 6 * x * x - 8 * x  + 3 ;
}
void Newton_solve()
{
	float x,x1=1,x2;
	while (fabs(Cubic_equation(x1))>1e-6)	
	{
		x2 = x1 - Cubic_equation(x1) / Cubic_equation_(x1);
		x1 = x2;

	}
	printf("根为%f",x1);

}
/*二分法求根*/
void Dichotomy()
{
	double i,m=-10, n=10,sum;
	if(Cubic_equation(m)*Cubic_equation(n)<0)
		while (fabs(m-n)>1e-6)
		{
			i = (m + n) / 2;
			sum = Cubic_equation(i);
			printf("[%lf,%lf]\n",m,n);
			if (fabs(sum) < 1e-6)
			{
				break;
			}
			else if (sum * Cubic_equation(m) < 0)
			{
				n = i;

			}
			else if (sum * Cubic_equation(n) < 0)
			{
				m = i;

			}
			else;
			printf("%lf \n",m);



		}


}
/*愚蠢的群员 */
void stupid()
{
	while (true)
	{
		printf("竟敢欺负伟大的大帝&&%^&%&%^*^&欺负就欺负但是还不爆照，画个圈圈诅咒你 \t \t ");
	}
}
void draw_star()
{
	int i, j;
	for (i=1;i<=4;i++)
	{
		for (j=1;j<=4;j++)
		{
	
		}
		printf("\n");
		

	}
}
/*入坑分配*/
/*亦可以作为解决男女对象（相亲）分配问题的程序思路*/
void deskmate_manage()
{
	char i, j, k;
	for ( i = 'x'; i <= 'z'; i++)
	{
		for ( j= 'x'; j<='z' ; j++)
		{
			if (i!=j)
			{
				for (k  = 'x';  k<='z'; k++)
				{
					if (k != j&& k != i)
						if (i!='x'&&(k!='x')&&(k !='z'))
						{
							printf("A-%c\tB-%c\tC-%c\n",i,j,k);

						}
				}

			}

		}

	}

}
void Fibonacci_array()
{
	int i;
	int f[20] = { 1,1 };
	for ( i = 2; i < 20; i++)
	{
		f[i] = f[i - 1] + f[i - 2];

	}
	for ( i = 0; i < 20; i++)
	{
		printf("%d\n", f[i]);

	}

}
void Bubble_sort()
{
	int a[10], i, t;
	printf("Plese enter ten number!\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);

	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);

	}
	for (int j=0;j<9;j++)
	{
	for (i = 0; i < 9-j; i++)
	{
		if (a[i] > a[i + 1]) {
			t = a[i];
			a[i] = a[i + 1];
			a[i + 1] = t;
		}

	}
}

	printf("After Sort...\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", a[i]);

	}

}
void Two_dimensional_data()
{
	int i, j;
	int a[2][3] = { {1,2,3} ,{4,5,6} }, b[3][2];
	for (i = 0; i < 2; i++)
	{ 
		for (j = 0; j < 3; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			b[i][j] = a[j][i];
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}



	
}
void Char_array()
{
	char diamond[][5] = { {' ',' ','*'}, {' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'} };
	int i, j;
	for ( i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%c", diamond[i][j]);


		}printf("\n");

	}
}
void String_show()
{
	char a[] = "I am happy!";
	char b[] = { 's','t','a','r','s','\0' };
	char str[] = "Beijing\nasd";
	printf("%o\n", a);
	printf("%o\n",b);
	printf("%s\n", a);
	printf("%s\n", b);
	//Octal
	printf("%s\n", b);
	gets_s(str);
	puts(str);

}
void String_show_str()
{
	char str1[30] = {"People's Republic of "};
	char str2[] = { "China" };
	printf_s("%s",strcat(str1,str2));
}
void Character_segmentation()
{
	char string[81];
	int i, num=0, word = 0;
	char c;
	/*gets(string);*/
	//scanf_s("%c", &string);
	gets_s(string);
	for ( i = 0;(c=string[i])!='\0' ; i++)
	{
		if (c == ' ') word = 0;
		else if (word == 0)
		{
			word = 1;
			num++;
		}
	//	printf("%d words",num);
		

	}
	printf("%d words", num);

}
void Prime_number_100()
{
	int i, j, n, a[101];
	for (i = 1; i <101; i++)
	{
		a[i] = i;
	}
	a[1] = 0;
	for ( i = 2; i< sqrt(100); i++)
	{
		for ( j = i+1; j < 101; j++)
		{	if(a[i]!=0&&a[j]!=0)
			if (a[j]%a[i]==0)
			{
				a[j] = 0;

			}

		}
		
	}
	printf("\n");
	for (i = 2, n = 0; i < 101; i++)
	{
		if (a[i] != 0)
		{	
			printf("%5d ", a[i]);
			n++;
		}
		if (n == 10)
		{
			printf("\n");
			n = 0;
		}
	}
	



}
void select_sort()
{
	int i, j, min_idx, tmp, a[11];
	printf("Please enter data\n");
	for ( i = 1; i < 11; i++)
	{
		printf("a[%d]=",i);
		scanf_s("%d",&a[i]);

	}
	printf("\n");
	printf("The original numbers:\n");
	for ( i = 1; i < 11; i++)
	{
		printf("%5d",a[i]);

	}
	printf("\n");
	for (i = 1; i <= 9; i++)  //针对前9个就好了，最后一个水到渠成
	{
		min_idx = i;
		for (j = i + 1; j < 11; j++)
		{
			if (a[j] < a[min_idx])
				min_idx = j;
		}
			tmp = a[i];
			a[i] = a[min_idx];
			a[min_idx] = tmp;
	}
	printf("\nThe sorted numbers:\n");
	for ( i = 1; i < 11; i++)
	{
		printf("%5d", a[i]);

	}
	printf("\n");

}
void Sum_of_diagonal_elements_of_matrix()
{
	int a[3][3],i,j,sum=0;
	printf("Please enter a matrix\n");
	for (i = 0; i < 3; i++)
	{
		for(j=0;j<3;j++)
		scanf_s("%d", &a[i][j]);
	}
	printf("The matrix is \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf_s("%5d", a[i][j]);
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if(i==j||i+j==2)
			sum = sum + a[i][j];
		}
	}
	printf("The sum of diagonal elements is %d",sum);
}
void Sequential_insertion()
{
	int a[11] = {1,1,2,3,15,25,99,101,999,8888},b,tmp, insert_idx=0,i;
	printf("Please input a inserted number\n");
	scanf("%d", &b);
	for ( i = 0; i < 10; i++)
	{
		if (b <a[i + 1] && b >= a[i])
		{
			insert_idx = i;

		}
	}
	a[i + 1] = b;
	for (int j = insert_idx; j < 10; j++)
	{
		tmp = a[j + 1];
		a[j + 1] = a[j];
		


	}
	a[10] = tmp;

	for (int i = 0; i < 11; i++)
	{
		printf("%5d", a[i]);

	}
}
void Sequential_insertion_2()
{
	int number, temp1=0, temp2,end,i,j;
	int a[11] = { 1,1,2,3,15,25,99,101,999,8888} ;
	printf("array: \n");
	for ( i = 0; i < 10; i++)
	{
		printf("%5d",a[i]);

	}
	printf("\nPlease input a inserted number\n");
	scanf("%d", &number);
	end = a[9];
	if (number > end)
		a[10] = number;
	else
	{
		for (i = 0; i < 10; i++)
		{
			if (a[i] > number)
			{
				temp1 = a[i];
				a[i] = number;

				for (j = i + 1; j < 11; j++)
				{
					temp2 = a[j];
					a[j] = temp1;
					temp1 = temp2;

				}
				break;

			}

		}
	}
	for (i = 0; i < 11; i++)
	{
		printf("%5d", a[i]);

	}


}
void Reverse_order()
{
	int a[10];
	int i,tmp;
	for ( i = 0; i < 10; i++)
	{
		printf("a[%d]= ",i);
		scanf_s("%d",&a[i]);
	}
	printf("array: \n");
	for (i = 0; i < 10; i++)
	{
		printf("%5d ", a[i]);
		
	}
	for ( i = 0; i < 10/2; i++)
	{
		tmp = a[i];
		a[i]=a[10 - i-1]  ;
		a[10 - i-1] = tmp;

	}
	printf("\n7reversed order: \n");
	for (i = 0; i < 10; i++)
	{
		printf("%5d", a[i]);

	}
} 
void Yang_Hui_triangle()
{
	int i, j, a[10][10];
	for ( i = 0; i < 10; i++)
	{
		a[i][i] = 1;
		a[i][0] = 1;
	}
	for ( i = 2; i < 10; i++)
	{
		for ( j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];

		}

	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf_s("%5d",a[i][j]);

		}
		printf("\n");

	}
	
}
void Two_dimensional_array_saddle_points()
{
	int i, j,k,row_max=0,col_min=0;
	int a[10][10], b[10] = {1,2,38,5,9,1,6,7,4,1};
	for ( i = 0; i < 10; i++)
	{
		for ( j = 0; j < 10; j++)
		{
			/*printf_s("Please input a[%d][%d]\n",i,j);*/
			a[i][j] = b[j];
		}
	}
	for (i = 0; i < 10; i++)
	{
			for (j = 0; j < 10; j++)
			{
				if (a[i][row_max] < a[i][j])
				{
					row_max = j;
				}

			}

			for (k = 0; k < 10; k++)
			{
				if (a[k][row_max] > a[k][row_max])
				{
					col_min = k;
				}

			}
			if (col_min == i)
			{
				printf("有鞍点%5d \n", a[col_min][row_max]);
				printf_s("saddle is a[%d][%d]=%5d\n", col_min, row_max, a[col_min][row_max]);
			}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf_s("%5d",a[i][j]);
			
		}
		printf("\n");
	}
	printf_s("saddle is a[%d][%d]=%5d\n",  col_min, row_max, a[col_min][row_max]);
	
}
void Search_by_half()
{
	int a[15] = {1,2,3,8,9,5,7,4,5,6,9,10,98,998,567};
	int i, j,tmp,min_idx=0,num=0,end,start,mid;
	char flag;
	for (i = 0; i < 15; i++)
	{
		min_idx = i;
		for (j = i+1; j < 15; j++)
		{
			if (a[j] < a[min_idx])
			{
				min_idx = j;
			}
		}
		tmp = a[i];
		a[i] = a[min_idx];
		a[min_idx] = tmp;

	}
	printf("The original array: \n");
	for (i = 0; i < 15; i++)
	{
		printf("%5d",a[i]);
	}
	printf("\nPlease enter a number searched\n");
	scanf("%d",&num);
	start = 0;
	end = 14;

	if (num < a[start]||num>a[end])
		printf("This number does not exist\n");
	else 
	{
		//for (i=start;i<=end;i++)
		//start=0;
		while(start <= end)
		{
			
			mid = (start + end) / 2;

			if (num == a[mid])
			{
				printf("位置目录为%5d\n", mid);
				printf("是否继续寻找Y/N\n");
				scanf("%c", &flag);
				if (flag == 'Y')
				{
					continue;
				}
				else if (flag == 'N')
				{
					break;
				}
				
			}
			else if (num < a[mid])
			{
				end = mid-1;
			}
			else  
			{
				start = mid + 1;				
			}
			//if (start == end)
			//{
			//	printf("\nnum do not exist in the sequence \n");
			//	break;
			//}
			
		}
	}



	
}


void print_diamond_star()
{
	int i, j, k;
	for (i = 0; i < 5; i++)
	{
		for (k = 0; k < i; k++)
		{
			printf("  ");
		}
		for (j = 0; j < 5; j++)
		{
			printf("* ");

		}
		printf("\n");





	}
}
/*ABCD进行对称位移*/
void translate_code()
{
	char A[7] = { 'A','B','V','D','E','a','z' };
	char a;
	for (int i = 0; i < 7; i++)
	{
		printf("%4c", A[i]);
	}
	printf("\n");
	for (int i = 0; i < 7; i++)
	{
		if (A[i] >= 65&& A[i] <= 90)
		{
			A[i] =65+(90- A[i]);

		}
		if (A[i] >= 97 && A[i] <= 122)
		{
			A[i] = 97 + (122 - A[i]);

		}

	}


	for (int i = 0; i <7; i++)
	{
		printf("%4c",A[i]);
	}
}


void move(char x, char y)
{
	printf("%c->%c\n",x,y);
}
void hanio(int n, char one, char two, char three)
{
	void move(char x, char y);
	if (n == 1)
		move(one, three);
	else
	{
		hanio(n - 1, one, three, two); 
		move(one, three);
		hanio(n - 1, two, one, three);

	}
	
}
void solve_hanio()
{
	
	int m;
	printf("input the number: \n");
	scanf("%d",&m);
	printf("The step to move %d diskes:\n",m);
	hanio(m,'A','B','C');

}
void extern_ex()
{
	extern void enter_string(char str[80]);
	extern void delete_string(char str[], char ch);
	extern void print_string(char str[]);
	char c, str[80];
	enter_string(str);
	scanf_s("%c",&c);
	delete_string(str, c);
	print_string(str);

}
void pointer_test()
{
	/*
	变量a 变量b 
	pointer_1是定义的整形类型指针变量
	pointer_2是定义的整形类型指针变量
	指针 具体化就是地址变量
	*/
	int a = 100, b = 10;
	int* pointer_1, * pointer_2;
	pointer_1 = &a;
	pointer_2 = &b;
	printf("a=%d,b=%d\t",a,b);
	printf("*pointer_1=%d,pointer_2=%d", *pointer_1, *pointer_2);
}
void pointer_exchange()
{
	int* p1, * p2, * p, a, b;
	printf("please enter two integer numbers:\n");
	scanf("%d %d",&a,&b);
	p1 = &a;
	p2 = &b;
	if (a < b)
	{
		p = p1;
		p1 = p2;
		p2 = p;		
	}
	printf("a=%d,b=%d\n", a, b);
	printf("max=%d,min=%d\n",*p1,*p2);
}
void swap_pointer(int *p1,int *p2)
{
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
void exchange_test()
{
	void swap_pointer(int* p1, int* p2);
	int a, b;
	int* pointer_1,*pointer_2;
	printf("please enter a and b");
	scanf("%d %d",&a,&b);
	pointer_1 = &a;
	pointer_2 = &b;
	if (a < b) swap_pointer(pointer_1,pointer_2);
	printf("max=%d,min=%d",a,b);

}
void exchange(int* q1, int* q2, int* q3)
{
	void swap_pointer(int* p1, int* p2);
	if (*q1 < *q2) swap_pointer(q1,q2);
	if (*q1 < *q3) swap_pointer(q1, q3);
	if (*q2 < *q3) swap_pointer(q2, q3);
}
void exchange_test_3()
{
	int a, b, c, * p1, * p2, * p3;
	printf("please enter three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	p1 = &a; p2 = &b; p3 = &c;
	exchange(p1,p2,p3);
	printf("The order is :%d,%d,%d\n",a,b,c);
	
}
void array_pointer()
{
	int a[10];
	int* p,i;
	printf("please enter 10 integer numbers:\n");
	for ( i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(a+i));
	}
	printf("\n");
	for (p = a; p < a+10; p++)
	{
		printf("%d ", *p);
	}
	printf("please enter another 10 integer numbers:\n");

	printf("地址相加与 使用scanf赋值\n");
	for (p = a; p < a + 10; p++)
	{
		scanf("%d", p);
	}
	for (p = a; p < a + 10; p++)
	{
		printf("%d ", *p);
	}

	

}
void array_output()
{
	int a[10];
	int* p, i;
	p = a;
	printf("please enter 10 integer numbers:\n");
	printf("p++输入\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", p++);
	}
	printf("p++输出\n");
	p = a;
	for (i = 0; i < 10; i++, p++)
	{
		printf("%d ", *p);
	}

}
/*使用数组名进行输入反转，输入的数组就是地址输入相当于指针*/
void inv_1(int x[],int n)
{
	int temp, i, j, m = (n - 1) / 2;
	for ( i = 0; i < m; i++)
	{
		j = n - 1 - i;
		temp = x[i]; x[i] = x[j]; x[j] = temp;
	}
}
/*指针变量，需要输入地址*/
void inv_2(int *x, int n)
{
	int * p, temp, * i, * j, m = (n - 1) / 2;
	i = x; j = x + n - 1; p = x + m;
	for (; i<=p; i++, j--)
	{
		temp = *i; *i = *j; *j = temp;
	}

}

void inv_exchange()
{
	void inv_1(int x[], int n);
	void inv_2(int* x, int n);
	int i, a[10] = {1, 3, 5, 7, 9,2,4,6,8,10};
	printf("The original array:\n");
	for ( i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);

	}
	printf("\n");
	
	inv_2(a, 10);
	printf("The array has been inverted:\n");
	for ( i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);

	}
	printf("\n");


}
void sort(int x[],int n)
{
	int i, j, k, t;
	for ( i = 0; i < n-1; i++)
	{
		k = i;
		for ( j = i+1; j < n; j++)
		{
			if (x[j]>x[k])
			{
				k = j;
			}
			if (k != i)
			{
				t = x[i]; x[i] = x[k]; x[k] = t;
			}

		}

	}
	
}
void sort_2(int *x,int n)
{
	int i, j, k, t;
	for ( i = 0; i < n-1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (x[j] < x[k])
				k = j;
		}
		if (k!=i)
		{
			t = *(x + i); *(x + i) = *(x + k); *(x + k) = t;
		}
	}
}
void sort_order_pointer()
{
	int i, * p, a[10];
	p = a;
	printf("please enter 10 integer numbers:");
	for ( i = 0; i < 10; i++)
	{
		scanf("%d", p++);
	}
	p = a;
	sort_2(p,10);
	for ( p = a,i=0; i < 10; i++)
	{
		printf("%d\t",*p++);
		
	}
	printf("\n");

}
void Two_dimensional_address()
{
	int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
	printf("%d,%d\n",a,*a);
	printf("%d,%d\n", a[0], *(a+0));
	printf("%d,%d\n", a[1], a+1);
	printf("%d,%d\n", &a[1][0], *(a+1)+0);
	printf("%d,%d\n", a[2], *(a+2));
	
	printf("%d,%d\n", &a[2], a+2);
	printf("%d,%d\n", a[1][0], *(*(a+1)+0));

	printf("%d,%d\n", *a[2], *(*(a + 2) + 0));

	



}
void Two_dimensional_pointer()
{
	int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
	int* p;
	for ( p = a[0]; p < a[0]+12; p++)
	{
		
		if ((p - a[0]) % 4 == 0)
		{
			printf("\n");

		}
		printf("%4d", *p);
	}
}
void pointer_array()
{
	int a[4] = {1,3,5,7};
	int(*p)[4];
	p = &a;
	printf("%d\n", (*p)[3]);
}
void average(float *p,int n)
{
	float* p_end;
	float sum = 0, aver;
	p_end = p +n -1;
	for ( ; p <=p_end ; p++)
	{
		sum = sum + (*p);
	}
	aver = sum / n;
	printf("average=%5.2f\n",aver);

}
void search(float (*p)[4],int n)
{
	int i;
	printf("The score of No.%d are:\n", n);
	for ( i = 0; i < 4; i++)
	{
		printf("%5.2f\t",*(*(p+n)+i));
	}
	printf("\n");

}
void test_aver()
{
	float score[3][4] = { {65,67,70,60} ,{80,87,90,81}, {90,99,100,98} };
	average(*score,12);
	search(score, 1);
}
void search_1(float (*p)[4], int n)
{
	int i, j, flag;
	for ( j = 0; j < n; j++)
	{
		flag = 0;
		for ( i = 0; i < 4; i++)
		{
			if (*(*(p+j)+i)<60)
			{
				flag = 1;
			}

			if (flag==1)
			{
				printf("No.%d fails,his scores are :\n",j+1);
				for ( i = 0; i < 4; i++)
				{
					printf("%5.1f",*(*(p+j)+i));
				}
				printf("\n");


			}

		}

	}
}
void test_search()
{
	float score[3][4] = { {65,57,2,55},{80,89,99,76},{58,41,98,100} };
	search_1(score, 3);
}
void copy_string_test()
{
	char a[] = "I am a student !",b[20];
	int i;
	for ( i = 0;*(a+i)!='\0' ; i++)
	{
		*(b + i) = *(a + i);
	}
	*(b + i) = '\0';
	printf("b是%s\n", b);
	printf("a是%s\n", a);

	printf("逐个输出b是\t");
	for ( i = 0; *(b+i)!='\0' ; i++)
	{
		printf("%c",*(b+i));
	}
	printf("\n");
}
void copy_string_test_1()
{
	char a[] = "I am a God !", b[20], * p1, * p2;
	p1 = a; p2 = b;
	for (; *p1!='\0'; p1++,p2++)
	{
		*(p2) = *(p1);
	}
	*(p2) = '\0';
	printf("string a is %s\n",a);	
	printf("string b is %s\n", b);

}
void copy_string(char from[], char to[])
{
	int i = 0;
	while (from[i]!='\0')
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';

}
void copy_sttring_test3()
{
	char a[] = "fuck you！";
	char b[] = "You are a bad student !";
	printf("a is %s\n", a);
	printf("b is %s\n", b);
	printf("fuck copy finished \n");
	copy_string(a,b);
	printf("a=%s,b=%s\n", a,b);


}

void copy_string_pointer(char *from,char *to)
{
	for(;*from!='\0';from++,to++)
	{
		*to = *from;
	}
	*to = '\0';
}
void copy_string_pointer_2(char* from, char* to)
{
	while ((*to++ = *from++) != '\0');

}
void copy_string_test4()
{
	char  a[] = "asd";
	char b[] = "你是个大坏蛋";
	char* p = b;
	printf("string a=%s\n string b=%s\n",a,b);
	printf("\n开始复制\n");
	copy_string_pointer_2(a,p);
	printf("string a=%s\nstring b=%s\n", a, b);



}
void format_test() 
{
	const char* format;
	int a = 1;
	float b = 1.111;
	format = "a=%d,b=%f\n";
	format = "a=%5.2f,b=%5.2d\n";
	printf(format, a, b);
}

int min(int x, int y)
{
	int z;
	if (x<y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;

}
void function_pointer()
{
	int (*p)(int, int) =NULL; //必须进行空指针设置
	int a, b, c, n;
	printf("enter a and b\n");
	scanf("%d %d",&a,&b);
	printf("chose 1 or 2\n");
	scanf("%d",&n);
	if (n==1)
	{
		p = max_2;

	}
	else if(n==2)
	{
		p = min;
	}
	c = (*p)(a, b);
	printf("a=%d b=%d\n", a, b);
	
	if (n == 1)
		printf("max is ");
	else if (n==2)
	{
		printf("min is");
	
	}
	printf("%d\n", c);



}
void sort_pointer(const char* name[], int n)
{
	const char* temp;
	int i, j, k;
	for ( i = 0; i < n-1; i++)
	{
		k = i;
		for ( j = i+1; j < n; j++)
		{
			if (strcmp(name[k],name[j])>0)
			{
				k = j;
			}
		}

		if (k!=i)
		{
			temp = name[i]; name[i] = name[k]; name[k] = temp;
		}
	}
}
void print(const char* name[], int n)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		printf("%s\n",name[i]);
	}
}
void multiply_pointer()
{
	const char* name[] = { "Follow me","BASIC","Great Wall","FORTRAN","Computer desigh" };
	int n=5;
	sort_pointer(name, n);
	print(name, n);





}
/*指向指针数组的指针变量*/
void pointer_array_pointer_var()
{
	const char* name[] = { "Follow me","BASIC","Great Wall","FORTRAN","Computer desigh" };
	/*地址组成的数组*/
	const char** p;
	/*
	char p 字符  变量 p
	char *p  指针变量p 指向 字符变量的地址
	char **p 指向char *p 指针变量
	*/
	int i;
	for ( i = 0; i < 5; i++)
	{
		p = name + i;
		printf("%s\n",*p);

	}
}
void pointer_array_element()
{
	int a[5] = { 1,3,5,7,9 };
	int* num[5] = { &a[0],&a[1],&a[2],&a[3],&a[4] };
	int** p, i;
	p = num;
	for ( i = 0; i < 5; i++)
	{
		printf("%d ",**p);
		p++;

	}
	printf("\n");

}
void check(int*p)
{
	int i;
	printf("They are fail:");
	for ( i = 0; i < 5; i++)
	{
		if (p[i] < 60) printf("%d ", p[i]);

	}
	printf("\n");
}
void Memory_allocation()
{
	int* p1, i;
	p1 = (int*)malloc(5 * sizeof(int));
	for ( i = 0; i < 5; i++)
	{
		scanf("%d",p1+i );

	}
	check(p1);
}
struct Student* head, * p;
struct Student a, b, c;
void Linked_list()
{


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
void union_test()
{
	struct {
		int num;
		char name[10];
		char sex;
		char job;
		union {
			int clas;
			char position[10];
		}category;
	}person[2];


	int i;
	for (i = 0; i < 2; i++)
	{
		printf("please enter the data of person\n");
		scanf("%d %s %c %c", &person[i].num, person[i].name, &person[i].sex, &person[i].job);
		if (person[i].job == 's')
		{
			scanf("%d", &person[i].category.clas);


		}
		else if (person[i].job == 't')
		{
			scanf("%s", person[i].category.position);
		}
		else
		{
			printf("Input error!");
		}

	}
		printf("\n");
		printf("No. name sex job class/position\n");
		for ( i = 0; i < 2; i++)
		{
			if (person[i].job=='s')
			{
				printf("%-6d-%-10s-%-4c%-4c%-10d\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.clas);
			}
			else
			{
				printf("%-6d-%-10s-%-4c%-4c%-10s\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.position);
			}
			}

}

typedef struct
{
	int month;
	int day;
	int year;
}Date;
//Date birthday;
//Date* p;
//typedef char* String;
//String p, s[10];
//typedef int (*Pointer)();
//Pointer p1, p2;
void SendPornPicture()
{
	for (;; )
		printf("发色图\n");
}
/*什么是断言*/
void assert_test()
{
	double x, y, z;
	puts("Enter X and Y (X>Y): ");
	while (scanf("%lf%lf",&x,&y))
	{
		z = x - y;
		assert(z>=0);
		puts("OK\nEnter X and Y (X>Y): ");
	}

	
}
