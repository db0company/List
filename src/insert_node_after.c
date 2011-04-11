/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	"list.h"

bool		insert_node_after(t_list * list,
				  t_node * node,
				  t_node * new)
{
  if (list && node && new)
    {
      if (node->next)
	node->next->prev = new;
      new->next = node->next;
      node->next = new;
      new->prev = node;
      return (true);
    }
  return (false);
}
