/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:22:57 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/15 13:30:57 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		i;
	char		*pos;
	char		res;

	let = (unsigned char) c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == let)
			pos = (char *)(str + i);
		i++;
	}
	if (s[i] == let)
		pos = (char *)(str + i);
	return (pos);
}
