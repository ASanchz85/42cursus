#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str;
	int		total;
	
	str = "66";
	total = -1;
	total = ft_str_is_printable(str);
	printf("%d", total);
	return (0);
}
