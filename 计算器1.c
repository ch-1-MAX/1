#include<stdio.h>
int main()
{
char a;
	printf("请输入你想要使用的类型 加法A,减法S,乘法M,除法D:\n");
	scanf(" %c", &a);
	printf("类型为：%c\n", a);
	double b;
	double c;
	double res;
	printf("输入两个数字：");
	scanf("%lf %lf", &b, &c);
	printf("输入的数字为%lf %lf\n", b, c);
	switch (a)
	{
	case 'A':
		res = b + c;
		break;
	case 'S':
		res = b - c;
		break;
	case 'M':
		res = b * c;
		break;

	case 'D':
		if(c==0)
		{
			printf("错误\n");
			return 1;
		}
		else
		{
			res = b / c;
		}
		break;
	}
	printf("结果为：%f\n", res);
    return 0;
}