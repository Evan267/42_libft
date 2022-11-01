#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main()
{
	char test1[50] = "This is string.h library function";
	char test2[50] = "Bonjour comment allez vous ?";
	char test3[50] = "This is string.h library function";
	char test4[50] = "Bonjour comment allez vous ?";
	printf("%s\n%s\n", ft_memcpy(test1, test2, 5), memcpy(test3, test4, 5));
	return (0);
}
