/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	"list.h"

void		dump_list(t_list * list, void (*displayer)(void *))
{
  foreach_list(list, displayer);
}

