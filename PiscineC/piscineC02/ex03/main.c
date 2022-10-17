#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str;
	int		total;
	
	str = "asdfas";
	total = -1;
	total = ft_str_is_numeric(str);
	printf("%d", total);
	return (0);
}
