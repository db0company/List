/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<stdlib.h>
#include	"list.h"

t_list *	sub_list_arg(t_list * list,
			     bool (*function)(void *, void * arg),
			     void * arg)
{
  t_list *	sub;

  sub = NULL;
  if (list)
    {
      list->cur = list->begin;
      while (list->cur)
	{
	  if (function(list->cur->data, arg))
	    if (!(put_in_list(&sub, list->cur->data)))
	      return (NULL);
	  list->cur = list->cur->next;
	}
    }
  return (sub);
}

