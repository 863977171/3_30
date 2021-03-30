#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int Fibonacci(int n) {
//	
//	if (n <= 2 && n > 0)
//	{
//		return 1;
//	}
//	else if (n == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//	
//}

int Fibonacci(int n) {
	int x0 = 0;
	int x1 = 1;
	int res = 0;
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		for (int x = 1; x < n; x++)
		{
			res = x1 + x0;
			x0 = x1;
			x1 = res;
		}
		return res;
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int x = Fibonacci(n);
	printf("%d\n", x);
	return 0;
}