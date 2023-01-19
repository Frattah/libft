#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	ln;
	size_t	i;

	if (s2 == NULL)
		return ((char *) s1);
	ln = ft_strlen(s2);
	i = 0;
	while (s1[i] && i < n)
	{
		printf("confronto %s && %s\n", s1 + i, s2);
		if (!ft_strncmp(s1 + i, s2, ln))
			return ((char *) s1 + i);
		i++;
	}
	return (NULL);
}
