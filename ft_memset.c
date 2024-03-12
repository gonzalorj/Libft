/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:07:09 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/12 15:46:13 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*copy;

	i = 0;
	copy = (unsigned char *)str;
	while (i < n)
	{
		copy[i] = (unsigned char)c;
		i++;
	}
	return (copy);
}
