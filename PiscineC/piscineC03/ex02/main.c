#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	test1[10] = "hola";
	char	test2[15] = "adios";
	
	ft_strcat(test2, test1);

	char	test1b[10] = "hola";
	char	test2b[15] = "adios";
	
	strcat(test2b, test1b);

	printf("%s", test2);
	printf("\n%s", test2b);
	return (0);
}
