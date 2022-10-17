#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;
	int		total;
	
	str = "ASFDA23231";
	total = -1;
	total = ft_str_is_uppercase(str);
	printf("%d", total);
	return (0);
}
