#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;
	int		total;
	
	str = "adasfdfa";
	total = -1;
	total = ft_str_is_alpha(str);
	printf("%d", total);
	return (0);
}
