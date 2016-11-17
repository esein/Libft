#include <string.h>
#include <stdio.h>
#include "libft.h"
int	main(void)
{
	int		lol;
	char dst[50] = "";
	char *src = "";
	
	int		lol2;
	char dst2[50] = "";
	char *src2 = "";

	lol = strlcat(dst,src, 0);
	printf("%s\n",dst);
	printf("%d\n",lol);
	lol2 = ft_strlcat(dst2,src2, 0);
	printf("%s\n",dst);
	printf("%d",lol);
	return (0);
}

