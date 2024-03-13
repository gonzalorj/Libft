/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:22:57 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/13 15:53:30 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	str_len;
	unsigned char	b;

	str_len = ft_strlen(str);
	b = (unsigned char)c;
	while (str[str_len] != b)
	{
		if ((str_len - 1) < 0)
			return (NULL);
		str_len--;
	}
	return (str);
}
