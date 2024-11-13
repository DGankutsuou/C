#include <stdio.h>

int	main(void)
{
	char	a, b, c;
	//a = getch(); // read char without diplaying it
	//printf ("a = %c", a);
	//b = getche(); // read only one char and display it immediately\
						even without the enter
	//printf ("b = %c", b);
	c = getchar(); // read a string and get the first char
	printf ("c = %c\n", c);
	return (0);
}
