#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *new_str;

	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	i = 0;
	if (!new_str || !s)
		return (NULL);
	while (s[i])
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}