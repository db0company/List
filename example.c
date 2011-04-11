/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	<string.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	"list.h"

void		display(void * elem)
{
  printf("%s\n", (char *)elem);
}

bool		match_banana(void * data)
{
  return (!strcmp((char *)data, "banana"));
}

bool		match_apple(void * data)
{
  return (!strcmp((char *)data, "apple"));
}

bool		match_cherry_node(t_node * node)
{
  return (!strcmp((char *)(node->data), "cherry"));
}

void *		duplicate_string(void * string)
{
  return ((void *)(strdup((char *)string)));
}

bool		compare(void * s1, void * s2)
{
  return (strcmp((char *)s1, (char *)s2) == -1);
}

int		main(int ac, char **av)
{
  int		i;
  t_list *	arg_list;
  t_list *	list;
  char *	str;


  arg_list = list_from_table(av);
  dump_list(arg_list, display);

  list = duplicate_list_elem(arg_list, duplicate_string);
  dump_list(list, display);

  destroy_list(&arg_list, NULL);
  printf("%d\n", get_list_len(list));

  order_list(list, compare);
  dump_list(list, display);

  str = (char *)get_data_at(list, 3);
  printf("3rd element : %s\n", str);

  insert_data_before(list, get_node_as(list, match_cherry_node),
  		     strdup("a new element !"));

  free(del_node_as(&list, match_banana));
  dump_list(list, display);

  del_all_node_as(&list, match_apple, free);
  dump_list(list, display);

  destroy_list(&list, free);

  return (0);
}
