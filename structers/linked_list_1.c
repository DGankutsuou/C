#include <stdlib.h>
#include <stdio.h>

typedef struct	s_node
{
	struct s_list	*next;
	int		data;
}	t_node;

void	add_node(t_node **start)
{
	t_node	*new_node;

	new_node = (t_node *)malloc (sizeof(t_node));
	if (new_node == NULL)
		return ;
	
}

int	main(void)
{
	t_node	*head;

	head = NULL;
	return (0);
}
