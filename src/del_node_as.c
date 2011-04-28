/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<stdlib.h>
#include	"list.h"

void *		del_node_as(t_list ** list, bool (*match_node)(void *))
{
  if ((*list))
    {
      (*list)->cur = (*list)->begin;
      while ((*list)->cur)
	{
	  if (match_node((*list)->cur->data))
	    return (del_node(list, ((*list)->cur)));
	  (*list)->cur = (*list)->cur->next;
	}
    }
  return (NULL);
}
