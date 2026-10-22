#include<stdio.h>
int main()
{
	char chance;
	char plant;
	int xm = 5;
	int yc = 10;
	int xhs = 7;
	int hlb = 8;
	int new;
	int jin;

		int money = 0;
	while (1)
	{
		printf("选择菜单（修改价格[M],出售[S]）\n");
		scanf(" %c", &chance);
		if (chance == 'M')
		{
			printf("输入收入类型(小麦[W],洋葱[O],西红柿[T]，胡萝卜[C]：");
				scanf(" %c", &plant);
				int new;
				printf("输入新价格:");
				scanf(" %d", &new);
				if (plant == 'W')
				{
					xm = new;
					printf("将小麦的价格更改为：%d\n", new);
				}
				else if (plant == 'O')
				{
					yc = new;
					printf("将洋葱的价格更改为：%d\n", new);
				}
				else if (plant == 'T')
				{
					xhs = new;
					printf("将西红柿的价格更改为：%d\n", new);
				}
				else if (plant == 'C')
				{
					hlb = new;
					printf("将胡萝卜的价格更改为：%d\n", new);
				}
				
			
		}
		else if(chance == 'S')
		{
			printf("输入收入类型(小麦[W],洋葱[O],西红柿[T]，胡萝卜[C]：");
			scanf(" %c", &plant);
			printf("输入出售的公斤数:");
			scanf(" %d", &jin);
			if (plant == 'W')
			{
				money = money + jin * xm;
			}
			else if (plant == 'O')
			{
				money = money + jin * yc;
			}
			else if (plant == 'T')
			{
				money = money + jin * xhs;
			}
				
			else if(plant == 'C')
			{
				money = money + jin * hlb;
			}
			if (money >= 1000)
			{
				printf("你已经获得%d金币，可以休息了\n", money);
				break;
			}
				
		 }


	}


	return 0;
}