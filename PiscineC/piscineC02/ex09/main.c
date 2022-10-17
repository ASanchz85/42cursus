#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[40] = "hola, que tal? como esta456s. YO BIEN";
	
	ft_strcapitalize(str);
	for	(int i = 0; i < 40; i++)
	{
		write(1, &str[i], 1);
	}
	return (0);
}
