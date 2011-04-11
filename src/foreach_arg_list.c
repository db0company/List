/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	"list.h"

void		foreach_arg_list(t_list * list,
				 void (*function)(void * elem, void * arg),
				 void * arg)
{
  if (list)
    {
      list->cur = list->begin;
      while (list->cur)
	{
	  function(list->cur->data, arg);
	  list->cur = list->cur->next;
	}
    }
}

