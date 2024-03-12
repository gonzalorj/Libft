/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:17:52 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/12 15:47:13 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strdup(const char *src)
{
	char	*dest;
	int		n;
	int		i;

	i = 0;
	n = ft_strlen(src);
	dest = (char *)malloc(n + 1);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
