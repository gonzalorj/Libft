/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:15:42 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/13 14:16:11 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	unsigned int	i;
	unsigned char	b;

	i = 0;
	b = (unsigned char)c;
	while (str[i] != b)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	return (str);
}
