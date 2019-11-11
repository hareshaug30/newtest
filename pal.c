#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[256];
	int len = 0,i = 0,max_index;
	//str = (char *)(malloc(256));
	printf("Enter the string:\n");
	scanf("%s",str);
	len = strlen(str);
	if (len < 2) {
		printf("Invalid string\n");
		return 0;
	}
	max_index = len - 1;
	while (i <= len/2) {
		if (str[i++] != str[max_index--]) {
			printf("word is not palindrome\n");
			return 0;
		}
	}
	printf("word is a palindrome\n");
}
