
#include<stdio.h>
#include<time.h>
int main()

{
	char a;
	double minute;

	while (1)
	{
		printf("按回车键开始计时，或输入任意一个字符退出。\n");
		a = getchar();
		if (a != '\n')
		{
			break;
		}
		long long now = time(NULL);
	
		printf("按回车键停止计时。\n");
		getchar();
		long long end = time(NULL);
	
		double minute = (end - now) / 60;
		printf("结果%.3f\n分钟", minute);

	}
	
	return 0;
}