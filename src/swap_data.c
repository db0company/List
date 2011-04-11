/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#include	"list.h"

void		swap_data(t_node * left, t_node * right)
{
  void *	tmp;

  if (right && left)
    {
      tmp = right->data;
      right->data = left->data;
      left->data = tmp;
    }
}

