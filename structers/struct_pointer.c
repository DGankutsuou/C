#include <unistd.h>
#include <stdio.h>

typedef struct	s_data
{
	int	x;
	int	y;
}	t_data;

int	main(void)
{
	t_data	a;
	t_data	*ptr;

	a.x = 10;
	a.y = 20;
	ptr = &a;
	printf ("\nx = %d\ny = %d\n", (*ptr).x, ptr->y);
	return (0);
}
