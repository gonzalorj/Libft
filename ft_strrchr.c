/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:22:57 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/26 17:06:12 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		i;
	char		*rt;

	rt = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
		{
			rt = ((char *)&str[i]);
		}
		i++;
	}
	if (c == '\0')
		rt = ((char *)&str[i]);
	return (rt);
}
