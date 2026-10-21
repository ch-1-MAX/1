

#include <stdio.h>
int main()
{
	int arr[] = { 3,1,2,2,2,2,2,2,2,2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i;
	for (int i = 0;i < len;i++)
	{
		printf("%d号踏板耐久度:%d\n", i+1,arr[i]);
	}
	int num = 0;
	int success ;
	while (1)
	{	
		success = 1;
		int now = 0;
		while (now<len-1)
		{
			int next = now + 1;
			if (arr[next] > 0)
			{
				arr[next] = arr[next] - 1;//走一步耐久-1
				now = next;
			}
			else//此踏板耐久为0，选择跳跃
			{
				int jump = 2;
				while (now + jump < len  && arr[now + jump] <= 0)
				{
					jump++;//找到第一个耐久大于0的时候循环停止
				}
				if (now + jump >= len)//在此之后踏板耐久都为0，不可过桥
				{
					success = 0;
					break;//跳出内循环
				}
				arr[now + jump] = arr[now + jump] - jump;//耐久更新
				now = now + jump;
			}
		}
		if (success == 0)
		{
			break;//跳出外循环
		}
		num++;
	}
	printf("%d个人可以过桥", num);
	return 0;
}