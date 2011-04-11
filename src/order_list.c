/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	"list.h"

void		order_list(t_list * list, bool (*compare_data)(void *, void *))
{
  t_node *	tmp;

  if (list)
    {
      list->cur = list->begin;
      while (list->cur)
	{
	  tmp = list->cur;
	  while (tmp)
	    {
	      if (tmp->prev && compare_data(tmp->data, tmp->prev->data))
		swap_data(tmp, tmp->prev);
	      tmp = tmp->prev;
	    }
	  list->cur = list->cur->next;
	}
    }
}
