/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<stdlib.h>
#include	"list.h"

void		del_all_node_as(t_list ** list,
				bool (*match_node)(void *),
				void (*destroy_data)(void *))
{
  void *	data;

  while ((data = del_node_as(list, match_node)))
    if (destroy_data)
      destroy_data(data);
}
