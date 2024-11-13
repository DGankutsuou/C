#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int main()
{
	char s[10] = "legendary";
	char d[17] = "NamelessNameless";
	printf ("%s\n", ft_strcpy(d, s));
	printf ("%s", d);
	return (0);
}
