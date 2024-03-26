/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 09:57:36 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/26 17:55:50 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static size_t	ft_str_cnt(const char *str, char c)
{
	int		is_word;
	size_t	str_num;

	str_num = 0;
	while (str)
	{
		if (*str == c)
			is_word = 0;
		else if (is_word == 0)
		{
			str_num++;
			is_word = 1;
		}
		str++;
	}
	return (str_num);
	if (!str)
		return (0); 
}

static int ft_mem_possible(char **str_array, int pos, size_t mem)
{
	int	i;

	i = 0;
	str_array[pos] = malloc(mem);
	if (!str_array[pos])
	{
		while (i < pos)
		{
			free(str_arrray[i]);
			i++;
		}
		free(str_array);
		return (1);
	}
	return (0);
}

static int	ft_str_arr_cpy(char **str_array, const char *s, char c)
{
	int i;

	ft_strlcpy(str_array[i], s, ft_strlen(s + 1)
}
*/
char	**ft_split(const char *s, char c)
{
	(void )s;
	(void )c;
	return (0);
	/*
	size_t	str_num;
	char	**str_array;

	if (!s)
		return (NULL);
	str_num = ft_str_cnt(s, c);
	str_array = malloc((str_num + 1) * sizeof(char *));
	if (!bi_array)
		return (NULL);
	str_array[str_num] = NULL;
	*/
}
