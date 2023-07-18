#include <stdio.h>
/**
*main - Entry point of the program
*Discription: 'print string using putchar'
*Return: 0 on successful execution
*/
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
