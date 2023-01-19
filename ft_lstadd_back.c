#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	ft_lstadd_front(lst, ft_lstlast(*lst));
}
