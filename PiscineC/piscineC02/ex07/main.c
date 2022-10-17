#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[6] = "abcdef";
//	char	*total = ft_strupcase(str);
	
//	str = "aa";
//	total = "";
//	total = ft_strupcase(str);
	
	ft_strupcase(str);
	for	(int i = 0; i < 3; i++)
	{
		write(1, &str[i], 1);
//		printf("%c", *(total + i));
	}
	
	return (0);
}
