#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	int	total;
	total = ft_atoi("     --+56878daf");
	printf("%d\n", total);
	printf("%d", atoi("5687daf"));
	return (0);
}
