#include<stdio.h>
struct snake
{
	int len;

};
int main()
{
	struct snake s1;
	s1.len = 3;
	int food;
	while (1)
	{
		printf("输入食物大小：");
		scanf("%d", &food);
		if (food > s1.len)
		{
			printf("蛇在吃比他大的食物的时候死了，总长为%d\n", s1.len);
			break;
		}
		s1.len = food + s1.len;
	}


	return 0;
}