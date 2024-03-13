/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:37:26 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/13 14:26:13 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*dest_ptr;
	const char		*src_ptr;
	size_t			i;

	i = 0;
	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	dest_ptr[i] = '\0';
	return (dest);
}
