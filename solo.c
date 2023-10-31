#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Return: 0
*/

void main(void)
{
	FILE *fp = NULL;

	char ch = 'a';

	fp = fopen("abc.txt", "w");

	if (fp == NULL)
	{
		printf("error");
		exit(1);
	}

	fputc(ch, fp);
	fclose(fp);
}
