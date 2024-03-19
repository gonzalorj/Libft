#include "libft.h"

void ft_end_fd(char *s, int fd)
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