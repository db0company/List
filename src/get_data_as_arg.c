/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<stdlib.h>
#include	"list.h"

void *		get_data_as_arg(t_list * list,
				bool (*match_data)(void *, void *),
				void * arg)
{
  if (list)
    {
      list->cur = list->begin;
      while (list->cur)
	{
	  if (match_data(list->cur->data, arg))
	    return (list->cur->data);
	  list->cur = list->cur->next;
	}
    }
  return (NULL);
}

