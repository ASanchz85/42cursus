#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5] = {5, 2, 4, 1, 3};

	ft_sort_int_tab(tab, 5);

	for (int i = 0; i < 5; i++)
		printf("%d", tab[i]);
	return (0);
}
