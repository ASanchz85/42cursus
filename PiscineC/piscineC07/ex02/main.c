#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int i;
	int *range;
	int min;
	int max;
	int size;

	min = 5;
	max = 22;
	size = ft_ultimate_range(&range, min, max);
	if (range != NULL)
	{
		i = 0;
		while (i < max - min)
		{
			printf("%p\n", &range[i]);
			printf("%d\n", range[i]);
			i++;
		}
	}
	else
		printf("%p \n", &range);
		printf("%d \n", size);
}
