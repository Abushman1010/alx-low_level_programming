#include <stdio.h>
/**
*main - Entry point of the program
*Discription: Prints the lowercase alphabet in reverse, followed by a new line.
*Return: 0 on successful execution
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
