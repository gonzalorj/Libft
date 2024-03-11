/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:52:00 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/11 17:06:51 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char *dest, const char *src, size_t n)
{
	int i;
	int p;

	i = 0;
	while(dest[i])
	{
		i++;
	}
	while(src[p] && i < n)
	{
		dest[i] = src[p];
		i++;
		p++;
	}
}
