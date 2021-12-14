/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:02:25 by eyagiz            #+#    #+#             */
/*   Updated: 2021/12/14 12:53:51 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*src;
	int	i;

	if (min >= max)
		return (NULL);
	src = malloc(sizeof(int) * (max - min));
	if (src == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (min < max)
		{
			src[i] = min;
			i++;
			min++;
		}
	}
	return (src);
}
