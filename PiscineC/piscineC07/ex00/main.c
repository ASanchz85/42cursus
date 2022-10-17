#include <string.h>
#include <stdio.h>

char *ft_strdup(char *src);

int	main(void)
{
	char *str;
	char *dest;

	str = strdup("hola");
	printf("%s\n", str);
	dest = ft_strdup("hola");
	printf("%s", dest);
	return (0);
}
