#include<stdio.h>
#include<string.h>
int main()
{

	char arr[100];
	fgets(arr, sizeof(arr), stdin);
	int len=strlen(arr);
	if (arr[len] == '\n')
	{
		len = len - 1;
	}
		int i = 0;
	for (i = len-1; i >= 0; i--)
		printf("%c", arr[i]);
	return 0;
}