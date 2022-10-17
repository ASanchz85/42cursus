#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main(void)
 {
	int     size;
	char    *strs[5];
	char    *sep;
	char    *sol;

	size = 5;
	strs[0] = "hola";
	strs[1] = "que";
	strs[2] = "tal";
	strs[3] = "estas?";
	strs[4] = "bien";
	sep = " _ ";
	sol = ft_strjoin(size, strs, sep);
	printf("%s \n", sol);
	 return (0);
}
