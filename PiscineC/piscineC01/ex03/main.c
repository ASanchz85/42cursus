#include <unistd.h>
#include <stdio.h>

 void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{	
	int	div;
	int	mod;
	
	div = -1;
	mod = -1;
	ft_div_mod(70, 10, &div, &mod);
	printf("%d / %d\n", div, mod);
	return (0);
}
