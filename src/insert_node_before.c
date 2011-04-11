/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	"list.h"

bool		insert_node_before(t_list * list,
				   t_node * node,
				   t_node * new)
{
  if (list && node && new)
    {
      if (node->prev)
	node->prev->next = new;
      new->prev = node->prev;
      node->prev = new;
      new->next = node;
      return (true);
    }
  return (false);
}
