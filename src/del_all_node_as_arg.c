/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<stdlib.h>
#include	"list.h"

void		del_all_node_as_arg(t_list ** list,
				    bool (*match_node)(void *, void *),
				    void (*destroy_data)(void *),
				    void * arg)
{
  void *	data;

  while ((data = del_node_as_arg(list, match_node, arg)))
    if (destroy_data)
      destroy_data(data);
}
