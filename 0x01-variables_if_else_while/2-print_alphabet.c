#include <stdio.h>
/**
*main - Entry point of the program
*Discription: 'Print alphabet lowercase'
*Return: 0 on successful execution
*/
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
