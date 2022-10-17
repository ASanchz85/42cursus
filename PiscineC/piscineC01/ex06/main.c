#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int		total;
	
	str = "hola mundo";
	ft_strlen(str);

	total = ft_strlen(str);
	printf("%d\n", total);
	return (0);
}
