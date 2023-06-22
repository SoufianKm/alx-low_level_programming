#include <stdio.h>

int main(void)
{
	int i, n = 0;

        for (i = 0; i < 10; i++)
	{       
		while (n <= 14)
                {
			if (n / 10 != 0)
				putchar('0' + n / 10);
                        putchar('0' + n % 10);
                        n++;
                }
		n = 0;
		putchar('\n');
	}
	return (0);
}
