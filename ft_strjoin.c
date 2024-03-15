/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:54:39 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/15 12:40:41 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char str1, const char str2)
{
	char	*cap;
	size_t	p;
	size_t	i;
	size_t	str1_len;
	size_t	str2_len;

	i = 0;
	p = 0;
	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	cap = (char *)malloc(sizeof(char) * (str1_len + str2_len + 1));
	if (!cap)
		return (NULL);
	if (!s1 || !s2)
		return (NULL);
	while (str1)
		cap[p++] = str1[i++];
	i = 0;
	while (str2)
		cap[p++] = str[i++];
	cap[p] = '\0';
	return (cap);
}
