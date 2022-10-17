#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(void)
{
	int i;
	int *tab;
	int min;
	int max;

	min = 5;
	max = 20;
	tab = ft_range(min, max);
	if (tab != NULL)
	{
		i = -1;
		while (++i < max - min)
		{
			printf("%p \n", &tab[i]);
			printf("%d \n", tab[i]);
		}
	}	
	else
		printf("Error");
}
