#include "printf.h"

int	main(void)
{
	int	test = 4242;
	char *str = "gallu";
	int	num_ft;
	int num_original;

	num_ft = ft_printf("hola %d\n", test);
	num_original = printf("hola %d\n", test);

	printf("variable ft %d\nvariable original %d\n", num_ft, num_original);

	num_ft = ft_printf("hola %s\n", str);
	num_original = printf("hola %s\n", str);

	printf("variable ft %d\nvariable original %d", num_ft, num_original);
	return (0);
}
