#include <unistd.h>

void ft_putstr_non_printable(char *str);

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien \t?");
	return (0);
}
