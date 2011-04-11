/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<stdlib.h>
#include	"list.h"

void *		get_data_as(t_list * list, bool (*match_data)(void *))
{
  if (list)
    {
      list->cur = list->begin;
      while (list->cur)
	{
	  if (match_data(list->cur->data))
	    return (list->cur->data);
	  list->cur = list->cur->next;
	}
    }
  return (NULL);
}

