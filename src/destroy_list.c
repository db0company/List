/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<stdlib.h>
#include	"list.h"

void		destroy_list(t_list ** list, void (*destroy_elem)(void *))
{
  t_node *	tmp;

  if ((*list))
    {
      (*list)->cur = (*list)->begin;
      while ((*list)->cur)
	{
	  if (destroy_elem)
	    destroy_elem((*list)->cur->data);
	  tmp = (*list)->cur->next;
	  free((*list)->cur);
	  (*list)->cur = tmp;
	}
      free((*list));
    }
  *list = NULL;
}
