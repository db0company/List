/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<stdlib.h>
#include	"list.h"

void *		del_node(t_list ** list, t_node * node)
{
  void *	data;

  if ((*list) && node)
    {
      if (node->prev)
	node->prev->next = node->next;
      else
	(*list)->begin = node->next;
      if (node->next)
	node->next->prev = node->prev;
      else
	(*list)->end = node->prev;
      data = node->data;
      free(node);
      --((*list)->len);
      if (!((*list)->len))
	{
	  free(*list);
	  *list = NULL;	  
	}
      return (data);
    }
  return (NULL);
}
