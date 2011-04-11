/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<stdlib.h>
#include	"list.h"

void *		del_node_at(t_list ** list, unsigned int pos)
{
  unsigned int	i;

  if (*list)
    {
      (*list)->cur = (*list)->begin;
      i = 0;
      while ((*list)->cur && i < pos)
	{
	  (*list)->cur = (*list)->cur->next;
	  i++;
	}
      return (del_node(list, (*list)->cur));
    }
  return (NULL);
}
