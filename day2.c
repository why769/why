#include <stdio.h>
int c = 1;//全局变量
int main()
{
	short a = 1;//定义一个短整型
    char b = 'A';//定义一个字符
	int d = 2;//局部变量
	printf(" % d\n", a);
	printf(" % c\n",b);
	printf("%d\n", c);
	printf(" % d\n", d);
	return 0;
}