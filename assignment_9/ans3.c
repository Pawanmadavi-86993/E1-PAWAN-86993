#include<stdio.h>

int main(void)
{
	char *str[5];

	FILE *fp = fopen("file1.txt","r");

	while(fgets(str, sizeof(str), fp) != NULL)
		printf("%s",str);

	fclose(fp);

	return 0;
}
