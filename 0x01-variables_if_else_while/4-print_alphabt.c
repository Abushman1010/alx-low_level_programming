#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main - Prints the alphabet without q and e.
*
*Return: 0 on successful execution
*/
int main(void)

	int i;

	for (i = 97; i < 123; i++)
        {
		if (i != 101 && != 113)
		{
			putchar(i);
		}
	}
        putchar('\n');
	return (0);
}
