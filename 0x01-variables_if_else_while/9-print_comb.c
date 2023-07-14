#include <stdio.h>
/**
*main - Entry point of the program
*Discription: 'Prins all possible combinations of single-digit numbers.'
*Return: 0 on successful execution
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
