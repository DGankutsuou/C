#include <unistd.h>
#include <stdio.h>

int str_len(char *str)
{
    if (!*str)
        return (0);
    if (*str)
        return (1 + str_len(++str));
}

int main()
{
    printf("%d", str_len("Are you crazy?"));
    return (0);
}
