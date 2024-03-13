/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:52:00 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/13 15:44:55 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dest, const char *src, size_t d_size)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= d_size)
		dest_len = d_size;
	if (dst_len == d_size)
		return (d_size + src_len);
	if (src_len < d_size - dest_len)
		ft_memcpy(dest + d_size, src, src_len + 1);
	else
	{
		ft_memcpy(dest + dst_len, src, d_size - destlen - 1);
		dst[d_size - 1] = '\0';
	}
	return (dest_len + src_len);
}
