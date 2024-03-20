/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:56:52 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/20 10:01:32 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*cap;
	size_t	i;
	size_t	p;

	cap = (char *)malloc(sizeof(char) * (len + 1));
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
