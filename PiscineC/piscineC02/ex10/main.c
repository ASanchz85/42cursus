#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			src1[] = "abcdefghij";
	char			dest1[] = "0123456789";
	
	char			src2[] = "abcdefghij";
	char			dest2[] = "0123456789";

	char			src3[] = "abcdefghij";
	char			dest3[] = "0123456789";

	unsigned int			test1 = ft_strlcpy(dest1, src1, 6);
	unsigned long int		test3 = strlcpy(dest3, src3, 6);

	printf("%i", test1);
	printf("\n");

/*	for (int i = 0; i < 11; i++)
	{
		if (*(dest3 + i) == '\0')
			printf("%c", *(dest3 + i));
	}*/
	printf("\n");
	printf("%lu", test3);
	printf("\n");
	return (0);
}
