#include "libft.h"

void	*ft_calloc(size_t nb, size_t by)
{
	void	*p;

	if (!(p = malloc(nb * by)))
		return (NULL);
	ft_bzero(p, nb * by);
	return (p);
}
