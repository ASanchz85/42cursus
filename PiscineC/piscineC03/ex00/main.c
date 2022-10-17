#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	test1a[] = "hol";
	char	test1b[] = "htl";

	int		result1 = ft_strcmp(test1a, test1b);
	int		result2 = strcmp(test1a, test1b);

	printf("%i", result1);
	printf("%i", result2);
	return (0);
}
