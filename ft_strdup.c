/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:17:52 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/13 14:25:40 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	n;
	size_t	i;

	i = 0;
	n = ft_strlen(src);
	dest = (char *)malloc(n + 1);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
