/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	"list.h"

bool		insert_data_at(t_list * list, unsigned int pos, void * data)
{
  t_node *	node;

  if (!(node = get_node_at(list, pos)))
    return (false);
  return (insert_data_before(list, node, data));
}
