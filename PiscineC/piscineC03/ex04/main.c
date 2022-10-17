#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	test1[40] = "hola que tal estas como te ha ido?";
	char	test2[20] = "como";
	char	*result;

	result = ft_strstr(test1, test2);
	
	char	test1b[40] = "hola que tal estas como te ha ido?";
	char	test2b[20] = "como";
	
	char	*result2;

	result2 = strstr(test1b, test2b);
	
	printf("%s", result);
	printf("\n%s", result2);
	return (0);
}
