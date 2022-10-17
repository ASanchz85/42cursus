#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	test1[20] = "Hola mundo";
	char	test2[30] = "como va todo?";
	int		size;
	int		total;

	size = 25;
	total = strlcat(test2, test1, size);
	
	char	test1b[20] = "Hola mundo";
	char	test2b[30] = "como va todo?";
	int		sizeb;
	int		totalb;

	sizeb = 25;
	totalb = ft_strlcat(test2b, test1b, sizeb);
	printf("%i\n", total);
	printf("%i\n", totalb);
	printf("\n");
	for (int i = 0; i < 25; i++)
	{
		if (test2[i] == '\0')
			printf("\\0");
			printf("%c", *(test2 + i));
	}
	printf("\n");
	for (int i = 0; i < 25; i++)
	{
		if (test2[i] == '\0')
			printf("\\0");
			printf("%c", test2b[i]);
	}
	return (0);
}
