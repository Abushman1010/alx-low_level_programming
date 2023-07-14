#include <stdio.h>
/**
*main - Entry point of the program
*Discription: 'Print numbers from 0 to 9.'
*Return: 0 on successful execution
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
