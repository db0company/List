/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	"list.h"

void		foreach_list(t_list * list, void (*function)(void *))
{
  if (list)
    {
      list->cur = list->begin;
      while (list->cur)
	{
	  function(list->cur->data);
	  list->cur = list->cur->next;
	}
    }
}

