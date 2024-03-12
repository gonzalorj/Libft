/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:32:27 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/12 15:38:15 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*final_size;

	final_size = (int)malloc(nitems * size);
	if (final_size == NULL)
		return (final_size);
	ft_bzero(final_size, nitems * count);
	return (final_size);
}
