/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<stdlib.h>
#include	"list.h"

t_node *	new_node(void * data)
{
  t_node *	new_node;

  if (!(new_node = malloc(sizeof(*new_node))))
    return (NULL);
  new_node->data = data;
  new_node->next = NULL;
  new_node->prev = NULL;
  return (new_node);
}
