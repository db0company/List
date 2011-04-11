/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	"list.h"

bool		insert_node_at(t_list * list, unsigned int pos,
			       t_node * new_node)
{
  t_node *	node;

  if (!(node = get_node_at(list, pos)))
    return (false);
  return (insert_data_before(list, node, new_node));
}
