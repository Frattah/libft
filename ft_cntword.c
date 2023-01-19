#include "libft.h"

int	ft_cntword(char const *s, char c)
{
	size_t	i;
	size_t	w;
	size_t	ln;

	i = 0;
	w = 0;
	ln = ft_strlen(s);
	while (s[i])
	{
		printf("(%ld != 0 && %ld != %ld - 1 && %c != %c && %c == %c && %c != %c)\n", i,i,ln,s[i -1],c,s[i],c,s[i+1],c);
		if (i != 0 && i != ln - 1 && s[i - 1] != c && s[i] == c && s[i + 1] != c)
			w += (!w) ? 2 : 1;
		i++;
	}
	return (w);
}
