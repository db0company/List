/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<stdlib.h>
#include	"list.h"

void *		del_node_at(t_list ** list, unsigned int pos)
{
  return (del_node(list, get_node_at(*list, pos)));
}
