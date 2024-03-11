/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:13:03 by gorodrig          #+#    #+#             */
/*   Updated: 2024/03/11 11:31:24 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
