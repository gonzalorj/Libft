/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:56:52 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/21 16:20:22 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*cap;
	size_t	i;
	size_t	p;

	cap = (char *)malloc(sizeof(char) * (len + 1));
	if (!cap)
		return (NULL);
	i = 0;
	p = 0;
	if (!str)
	{
		return (NULL);
	}
	while (str[i])
	{
		if (i >= start && p < len)
		{
			cap[p] = str[i];
			p++;
		}
		i++;
	}
	cap[p] = '\0';
	return (cap);
}
