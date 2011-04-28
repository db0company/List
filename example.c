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
  printf("--> %s\n", (char *)elem);
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

bool		start_a(void * data)
{
  return (!(strncmp((char *)data, "a", 1)));
}

int		main(int ac, char **av)
{
  int		i;
  t_list *	arg_list;
  t_list *	list;
  t_list *	a_list;;
  char *	str;


  printf("----- [ Create list from command line arguments          ] -----\n");
  arg_list = list_from_table(av);
  dump_list(arg_list, display);

  printf("----- [ Duplicate list and allocate strings              ] -----\n");
  list = duplicate_list_elem(arg_list, duplicate_string);
  dump_list(list, display);

  printf("----- [ Destroy first list                               ] -----\n");
  destroy_list(&arg_list, NULL);

  printf("----- [ Print list size                                  ] -----\n");
  printf("%d\n", get_list_len(list));

  printf("----- [ Order list by name                               ] -----\n");
  order_list(list, compare);
  dump_list(list, display);

  printf("----- [ A sub list with words starting by 'a'            ] -----\n");
  a_list = sub_list(list, start_a);
  dump_list(a_list, display);
  destroy_list(&a_list, NULL);

  printf("----- [ Get the 3rd element of the list                  ] -----\n");
  str = (char *)get_data_at(list, 3);
  printf("3rd element : %s\n", str);

  printf("----- [ Insert 'a new element' before 'cherry'           ] -----\n");
  if (!(insert_data_before(list, get_node_as(list, match_cherry_node),
			   str = strdup("a new element !"))))
    free(str);
  dump_list(list, display);

  printf("----- [ Delete the first element 'banana'                ] -----\n");
  free(del_node_as(&list, match_banana));
  dump_list(list, display);

  printf("----- [ Delete all the elements 'apple'                  ] -----\n");
  del_all_node_as(&list, match_apple, free);
  dump_list(list, display);

  printf("----- [ Destroy the list and free elements               ] -----\n");
  destroy_list(&list, free);

  return (0);
}
