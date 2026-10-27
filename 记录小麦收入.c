#include<stdio.h>
int main()
{
int in;
	int sum=0;
	while (1)
	{
		printf("输入收入：\n");
		scanf("%d", &in);
		sum = sum + in;
		if (sum >= 200)
		{
			printf("恭喜您已获得%d个金币,现在可以休息了\n", sum);
			break;
		}
		
	}
    return 0;
}