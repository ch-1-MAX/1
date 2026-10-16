#include<stdio.h>
int main()
{

	int h;
	
	
	printf("ÊäÈë£º\n");
	scanf(" %d", &h);
	double s = (h - 32) * 5 / 9.0;
	printf("Êä³ö£º%.2lf\n",s);

	return 0;
}