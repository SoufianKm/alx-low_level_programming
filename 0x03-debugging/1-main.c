#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	/* int i; */
	
	write(1,"Infinite loop incoming :(\n",sizeof("Infinite loop incoming :("));
	
	/**
	i = 0;
	while (i < 10)
	{
		putchar(i);
	}
	*/
	write(1,"Infinite loop avoided! \\o/\n",sizeof("Infinite loop avoided! \\o/\n"));
	
	return (0);
}
