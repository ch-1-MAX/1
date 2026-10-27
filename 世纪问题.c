#include<stdio.h>
int main()
{
	int year;

		printf("输入：\nYEAR=");
		scanf("%d", &year);
		if (year <= 0)
		{
			printf("输出:\n年龄不能为0或负数\n");
			return 1;
		}
		if (year % 100 != 0)
		{
			int century = year / 100 + 1;
			printf("输出：\nCENYURY=%d\n", century);
		}
		else {
			int century = year / 100 ;
			printf("输出：\nCENYURY=%d\n", century);
		}
return 0;
}

