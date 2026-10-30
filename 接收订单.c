#include<stdio.h>
int main()
{
    int num1;
	int num2;
	int money;
	char a;
	char b;
	while (1)
	{
		printf("输入N计算新订单。\n");
		printf("输入Q结束程序。\n");
		printf("输入：\n");
		scanf(" %c", &a);
		if (a == 'N')
		{


			printf("输入披萨数量:\n");
			scanf("%d", &num1);
			printf("输入披萨配料数量:\n");
			scanf("%d", &num2);
			printf("是否需要外送?(Y/N):\n");
			scanf(" %c", &b);
			if (b == 'Y')
			{
				money = num1 * 20 + num2 * 2 + 5;
			}
			else if (b == 'N')
			{
				money = num1 * 20 + num2 * 2;
			}
			printf("订单价格为%d个金币\n", money);
		}
		else if (a == 'Q')
		{
			break;
		}
		else
		{
			printf("请重新输入");
		}
	}



    return 0;
}
