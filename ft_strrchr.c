/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:22:57 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/20 12:42:17 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		i;
	char		*pos;
	char		*res;
	char		ch;

	ch = (unsigned char)c;
	res = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			pos = (char *)(str + i);
		i++;
	}
	if (str[i] == ch)
		pos = (char *)(str + i);
	return (pos);
}
