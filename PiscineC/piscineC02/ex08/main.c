#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[6] = "ABCDEF";
//	char	*total = ft_strupcase(str);
	
//	str = "aa";
//	total = "";
//	total = ft_strupcase(str);
	
	ft_strlowcase(str);
	for	(int i = 0; i < 6; i++)
	{
		write(1, &str[i], 1);
//		printf("%c", *(total + i));
	}
	
	return (0);
}
