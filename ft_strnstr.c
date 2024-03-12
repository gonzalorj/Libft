/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:24:36 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/12 15:52:18 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t	i;
	size_t	p;

	i = 0;
	p = 0;
	if (substr[0] == 0)
	{
		return ((char *)str);
	}
	while (str[i] && i < n)
	{
		while (str[i + p] == substr[p] && ((i + j) < n))
		{
			p++;
			if (substr == '\0')
				return ((char *)str + i);
		}
		i++;
	}
	return (0);
}
