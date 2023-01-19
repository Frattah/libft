#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	while (*s && *s != c)
		s++;
	return (s);
}
