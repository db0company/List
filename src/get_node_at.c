/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<stdlib.h>
#include	"list.h"

t_node *	get_node_at(t_list * list, unsigned int pos)
{
  unsigned int	i;

  if (list && (pos < list->len))
    {
      list->cur = list->begin;
      i = 0;
      while (list->cur && i < pos)
	{
	  list->cur = list->cur->next;
	  i++;
	}
      return (list->cur);
    }
  return (NULL);
}

