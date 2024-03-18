#include "libft.h"

static int w_counter(const char *str, char c)
{
	size_t word_count;
	size_t is_word;

	word_count = 0;
	is_word = 0;

	while (*str)
	{
		if (*str != c && is_word == 0)
		{
			is_word = 1;
			word_count++;
		}
		else if (*str == c)
		{
			is_word = 0;
		}
		str++;
	}
	return word_count;
}

char **ft_split(const char *s, char c)
{
}