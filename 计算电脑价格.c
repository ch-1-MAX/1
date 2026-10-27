#include<stdio.h>
int main()
{
int num;
	printf("你想买多少台电脑：\n");
		scanf("%d", &num);
	printf("买%d台电脑\n", num);
	printf("%d台电脑总价格为%lf\n",num, num * 95.125);

    return 0;
}