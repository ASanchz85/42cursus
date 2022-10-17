#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char			src1[] = "abcdfldasjfñalsd";
//	char			dest1[] = "0123456789";
	char			dest1[] = "0123456789";
	
	char			src2[] = "abcdadsfñlajsdlñ";
//	char			dest2[] = "0123456789";
	char			dest2[] = "0123456789";

	char			*test1 = ft_strcpy(dest1, src1);
	char			*test2 = strcpy(dest2, src2);

	/*n = 20;
	ft_strncpy(dest, src, n);*/
	for (int i = 0; i < 16; i++)
	{
		if (*(test1 + i) == '\0')
			printf("\\0");
		else
			printf("%c", *(test1 + i));
	}
	printf("\n");

	for (int i = 0; i < 16; i++)
	{
		if (*(test2 + i) == '\0')
			printf("\\0");
		else
			printf("%c", *(test2 + i));
	}
	printf("\n");

	//printf("%s\n", test1);
/*	char	src[] = "Hola Mundo";
	char	dest[] = "";
	
	char *test = ft_strcpy(dest, src);
	printf("%s", test);
	return (0);*/
}
