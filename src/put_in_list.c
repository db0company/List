/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<strings.h>
#include	<stdlib.h>
#include	"list.h"

static bool	list_init(t_list ** list, void * data)
{
  t_node *	new;

  if (!(*list = malloc(sizeof(**list)))
      || !(new = new_node(data)))
    return (false);
  bzero(*list, sizeof(**list));
  (*list)->len = 1;
  (*list)->begin = new;
  (*list)->end = new;
  return (true);
}

bool		put_in_list(t_list ** list, void * data)
{
  t_node *	new;

  if (!list)
    return (false);
  if (!*list)
    return (list_init(list, data));
  if (!(new = new_node(data)))
    return (false);
  (*list)->end->next = new;
  new->prev = (*list)->end;
  (*list)->end = new;
  ++((*list)->len);
  return (true);
 }
