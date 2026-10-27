
#include<stdio.h>
int sell(char name, int weight)
{
	int price;
	switch (name)
	{
	case'W':
		price = 5;
		break;
	case'O':
		price = 10;
		break;
	case'T':
		price = 7;
		break;
	case'C':
		price = 8;
		break;
	}
	return price * weight;
}

int main()
{
	char a;
	int jin=0;
	int sum = 0;
	while (sum<=1000)
	{
		printf("请输入收入类型(小麦W,洋葱O,西红柿T,胡萝卜C):\n");
			scanf(" %c", &a);
		printf("请输入您出售的公斤数：\n");
		scanf(" %d",& jin);
		int money = sell(a, jin);
		sum = sum + money;

	}
	printf("您已获得%d金币,可以休息一下了\n", sum);

return 0;
}
