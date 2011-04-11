/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<stdlib.h>
#include	"list.h"

t_list *	duplicate_list(t_list * list)
{
  return (duplicate_list_elem(list, NULL));
}
