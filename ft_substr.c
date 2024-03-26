/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:56:52 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/26 17:55:46 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	p;

	if (!str)
		return (NULL);
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	p = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (i >= start && p < len)
		{
			new[p] = str[i];
			p++;
		}
		i++;
	}
	new[p] = '\0';
	return (new);
}
