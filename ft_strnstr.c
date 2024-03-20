/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:24:36 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/20 12:36:48 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t			i;
	size_t			p;
	unsigned char	*string;
	unsigned char	*to_find;

	string = (unsigned char *)str;
	to_find = (unsigned char *)substr;
	i = 0;
	p = 0;
	if (to_find == 0)
	{
		return ((char *)&str[i]);
	}
	while (str[i] && i < n)
	{
		while (str[i + p] == substr[p])
			p++;
		if (to_find[p] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
