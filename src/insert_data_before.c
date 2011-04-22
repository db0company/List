/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<stdlib.h>
#include	"list.h"

bool		insert_data_before(t_list * list, t_node * node, void * data)
{
  t_node *	new;

  if ((new = new_node(data)))
    {
      if ((insert_node_before(list, node, new)))
	return (true);
      free(new);
    }
  return (false);
}

