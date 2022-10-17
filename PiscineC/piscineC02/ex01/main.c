#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char			src1[] = "abcd";
	char			dest1[] = "0123456789";
	
	char			src2[] = "abcd";
	char			dest2[] = "0123456789";

	char			*test1 = ft_strncpy(dest1, src1, 8);
	char			*test2 = strncpy(dest2, src2, 8);

	/*n = 20;
	ft_strncpy(dest, src, n);*/
	for (int i = 0; i < 11; i++)
	{
		if (*(test1 + i) == '\0')
			printf("\\0");
		else
			printf("%c", *(test1 + i));
	}
	printf("\n");

	for (int i = 0; i < 11; i++)
	{
		if (*(test2 + i) == '\0')
			printf("\\0");
		else
			printf("%c", *(test2 + i));
	}
	printf("\n");

	//printf("%s\n", test1);
	return (0);
}
