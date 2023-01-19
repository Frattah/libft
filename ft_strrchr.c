#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i > 0 && s[i] != c)
		i--;
	return(s + i);
}
