#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	test[10] = "Hola mundo";

	ft_putstr(test);
	return (0);
}
