#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 9;

	ft_swap(&a, &b);
	printf("%d / %d\n", a, b);
	return (0);
}
