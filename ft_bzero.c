/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:15:02 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/12 18:27:55 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*copy;

	i = 0;
	copy = (unsigned char *)s;
	while (i < n)
	{
		copy[i] = 0;
		i++;
	}
}
