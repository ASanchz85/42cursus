#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	test[10] = "hola mundo";
	int		total;
	int		total_strlen;

	total = ft_strlen(test);
	printf("%i\n", total);

	total_strlen = strlen(test);
	printf("%i\n", total_strlen);
	return (0);
}
