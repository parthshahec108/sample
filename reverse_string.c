#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse_str(char* str_1)
{
	int i = 0, len = 0;
	char* rvs = malloc(100);
	//str_1 = malloc(100);
	len = strlen(str_1);
	
	while(len != 0) {
		rvs[i] = str_1[len-1];
		len--;
		i++;
	}
	return rvs;
	
}

int main()
{
	char* str = malloc(100);
	char* rev_str = malloc(100);
	printf("Enter string: ");
	gets(str);
	rev_str = reverse_str(str);
	printf("%s %s\n", str, rev_str);
	free(str);
	free(rev_str);
	return 0;
}
