#include "libft.h"

void ft_putend_fd(char *s, int fd)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	write(fd, s, i);
	write(fd, '\n', 1);
}