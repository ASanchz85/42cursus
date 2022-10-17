#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{	
	char	*str;

	str = "Hola Mundo";
	
	ft_putstr(str);
	return (0);
}
