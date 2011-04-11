/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"list.h"

t_list *	list_from_table(char ** table)
{
  t_list *	list;
  ssize_t	i;

  list = NULL;
  i = 0;
  while (table && table[i])
    {
      if (!(put_in_list(&list, table[i])))
	return (NULL);
      ++i;
    }
  return (list);
}
