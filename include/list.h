/*
** Made by	db0
** Contact	db0company@gmail.com
** Site		http://db0.fr/
*/

#ifndef			LIST_H_
# define		LIST_H_

#  include		<stdbool.h>

typedef struct		s_node
{
  void *		data;
  struct s_node *	next;
  struct s_node *	prev;
}			t_node;

typedef struct
{
  t_node *		begin;
  t_node *		end;
  t_node *		cur;
  unsigned int		len;
}			t_list;

bool		put_in_list(t_list ** list, void * data);
t_node *	new_node(void * data);
t_list *	list_from_table(char **table);

void		destroy_list(t_list ** list, void (*destroy_data)(void *));

t_list *	duplicate_list(t_list * list);
t_list *	duplicate_list_elem(t_list * list,
				    void * (*duplicate)(void *));

void		dump_list(t_list * list, void (*displayer)(void *));
void		foreach_list(t_list * list, void (*function)(void *));
bool		foreach_stop_list(t_list * list, bool (*function)(void *));
void		foreach_arg_list(t_list * list,
				 void (*function)(void * elem,
						  void * arg),
				 void * arg);
bool		foreach_arg_stop_list(t_list * list,
				      bool (*function)(void * elem,
						       void * arg),
				      void * arg);

t_list *	sub_list(t_list * list,
			 bool (*function)(void *));

int		get_list_len(t_list * list);

void *		get_data_at(t_list * list, unsigned int pos);
void *		get_data_as(t_list * list, bool (*match_data)(void *));
void *		get_data_as_arg(t_list * list,
				bool (*match_data)(void *, void *),
				void * arg);

t_node *	get_node_at(t_list * list, unsigned int pos);
t_node *	get_node_as(t_list * list, bool (*match_node)(t_node *));
t_node *	get_node_as_arg(t_list * list,
				bool (*match_node)(t_node *, void *),
				void * arg);

void *		del_node(t_list ** list, t_node * node);
void *		del_node_at(t_list ** list, unsigned int pos);
void *		del_node_as(t_list ** list, bool (*match_data)(void *));
void *		del_node_as_arg(t_list ** list,
				bool (*match_node)(void *, void *),
				void * arg);
void		del_all_node_as(t_list ** list, bool (*match_data)(void *),
				void (*destroy_data)(void *));
void		del_all_node_as_arg(t_list ** list,
				    bool (*match_node)(void *, void *),
				    void (*destroy_data)(void *),
				    void * arg);

bool		insert_data_at(t_list * list, unsigned int pos, void * data);
bool		insert_data_after(t_list * list, t_node * node, void * data);
bool		insert_data_before(t_list * list, t_node * node, void * data);
bool		insert_node_at(t_list * list, int pos, t_node * new_node);
bool		insert_node_after(t_list * list, t_node * node,
				  t_node * new_node);
bool		insert_node_before(t_list * list, t_node * node,
				   t_node * new_node);

void		swap_data(t_node *, t_node *);
void		order_list(t_list * list,
			   bool (*compare_data)(void *, void *));

#endif		/* !LIST_H_ */

