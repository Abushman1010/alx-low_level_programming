#include <stdio.h>
/**
*main - Entry point of the program
*Discription: 'Prints all possible different combinations of three digits.'
*Return: 0 on successful execution
*/
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	if (d != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
