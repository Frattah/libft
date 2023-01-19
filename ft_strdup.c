#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*nw;
	int	len;
	
	len = ft_strlen(s);
	if(!(nw = (char *) malloc(sizeof(char) * len)))
		return (NULL);
	ft_strlcpy(nw, s, len + 1);
	return (nw);
}
