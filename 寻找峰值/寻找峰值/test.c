#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int solve(int* a, int aLen) {
	int x = aLen - 1;
	int i = 1;
	for (int j = x; j >= 0; j--, i--)
	{
		if (a[aLen - 1] > a[aLen - 2])
		{
			return aLen - 1;
		}
		else if (a[x - i] > a[x - i + 1] && a[x - i] > a[x - i - 1])
		{
			return x - i;
		}
		else if (a[0] > a[1])
		{
			return 0;
		}
	}
}

int main()
{
	int arr[] = { 2,4,1,2,7,8,4 };
	int x = solve(arr, 7);
	printf("%d\n", x);
	return 0;
}