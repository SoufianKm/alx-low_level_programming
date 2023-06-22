#include <stdio.h>

int main(void)
{
	int i, j, n = 10;

        if (n <= 0)
        {
                printf("\n");
        }
        else
        {
                for (i = 0; i < n; i++)
                {
                        for (j = 0; j < n; j++)
			{
				printf("#");
			}
                        printf("\n");
                }
        }
	return (0);
}
