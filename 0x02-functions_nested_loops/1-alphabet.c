#include <stdio.h>
/**
*main - Entry point of the program
*Discription: 'prints the alphabet, in lowercase, followed by a new line'
*Return: 0 on successful execution
*/
int main(void)
{
	int i;
	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
