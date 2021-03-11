#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n",ret);
//	return 0;


//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1; 
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
	
	scanf("%d", &i);
	for (n = 1; n <= i; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("sum = %d\n", sum);
	return 0;
}