#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;
	int		total;
	
	str = "adsfa25fa";
	total = -1;
	total = ft_str_is_lowercase(str);
	printf("%d", total);
	return (0);
}
