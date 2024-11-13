#include<unistd.h>

void ft_putchar (char c);

void ft_print_alphabet(void)
{
    write (1, "a", 1);
    //a++;
}

int main ()
{
    ft_print_alphabet ();
	ft_putchar('h');
    return 0;
}

void ft_putchar (char c)
{
    write (1 , &c , 1);
}
