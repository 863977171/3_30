#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool judge(char* str) {
	int left = 0;
	int right = strlen(str) - 1;
	while (left < right)
	{
		if (str[left] == str[right])
		{
			left++;
			right--;
		}
		else
		{
			return false;
		}
		
	}
	return true;
}

int main()
{
	char str[] = "abcdefa";
	bool x = judge(str);
	//printf("%d",x);
	return 0;
}