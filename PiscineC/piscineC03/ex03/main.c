#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	test1[10] = "hola";
	char	test2[50] = "adios";
	
	ft_strncat(test2, test1, 5);

	char	test1b[10] = "hola";
	char	test2b[50] = "adios";
	
	strncat(test2b, test1b, 5);

	printf("%s", test2);
	printf("\n%s", test2b);
	return (0);
}
