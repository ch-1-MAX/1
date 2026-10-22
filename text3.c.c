#include<stdio.h>
int checkH(int arr[3])
{
	if (arr[0] == arr[1] ||arr[0] == arr[2]||arr[1]==arr[2])
	{
		return 0;
	}
	return 1;
}
int checkL(int a, int b, int c)
{
	if (a == b || a == c || b == c)
	{
		return 0;
	}
	return 1;
}
int main()
{
	int arr1[3];
	int arr2[3];
	int arr3[3];
	int success = 1;
	printf("填入数字：\n");
	scanf(" %d %d %d", &arr1[0], &arr1[1], &arr1[2]);
	printf("填入数字：\n");
	scanf("%d %d %d", &arr2[0], &arr2[1], &arr2[2]);
	printf("填入数字：\n");
	scanf("%d %d %d", &arr3[0], &arr3[1], &arr3[2]);
	if (checkH(arr1) == 0 || checkH(arr2) == 0 || checkH(arr3) == 0)
	{
		success = 0;
	}
	if (checkL(arr1[0],arr2[0],arr3[0]) == 0)
	{
		success = 0;
	}
	if (checkL(arr1[1],arr2[1],arr3[1]) == 0)
	{
		success = 0;
	}
	if (checkL(arr1[2],arr2[2],arr3[2]) == 0)
	{
		success = 0;
	}
	if (success == 1)
	{
		printf("正确你可以走出这里\n");
	}
	else
	{
		printf("错误你无法走出这里\n");
	}

	return 0;
}