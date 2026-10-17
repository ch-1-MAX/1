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


		int num1;
		int num2;
		printf("输入一个自然数：\n");
		scanf( "%d", &num1);
		printf("输入一个数字（0-9）:\n");
		scanf("%d", &num2);
		if (num1 == num2&num1==0)
		{
			printf("0在自然数中出现了1次\n");
			return 1;
		}
		
		else
		{
			int count = 0;
			while (num1 != 0)
			{
				int num3 = num1 % 10;
				num1 = num1 / 10;
				if (num3 == num2)
				{
					count++;
				}

			}
			printf("%d在自然数中出现了%d次\n", num2, count);
		}
		

	return 0;
}