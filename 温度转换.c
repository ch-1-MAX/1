
#include<stdio.h>
int main()
{

	int h;
	
	
	printf("输入：\n");
	scanf(" %d", &h);
	double s = (h - 32) * 5 / 9.0;
	printf("输出：%.2lf\n",s);

	return 0;
}