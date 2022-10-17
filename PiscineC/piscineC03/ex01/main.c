#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	test1a[] = "hola";
	char	test1b[] = "";

	char	test2a[] = "h";
	char	test2b[] = "";

	int		result1 = ft_strncmp(test1a, test1b, 3);
	int		result2 = strncmp(test2a, test2b, 3);

	printf("%i\n", result1);
	printf("%i", result2);
	return (0);
}
