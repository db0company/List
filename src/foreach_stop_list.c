/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	"list.h"

bool		foreach_stop_list(t_list * list, bool (*function)(void *))
{
  if (list)
    {
      list->cur = list->begin;
      while (list->cur)
	{
	  if (function(list->cur->data))
	    return (true);
	  list->cur = list->cur->next;
	}
    }
  return (false);
}

