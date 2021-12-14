/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:44:00 by eyagiz            #+#    #+#             */
/*   Updated: 2021/12/14 11:59:33 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	int		indx;

	indx = 0;
	while (src[indx])
		indx++;
	dst = malloc(sizeof(src) * indx);
	indx = 0;
	if (dst == NULL)
		return (0);
	else
	{
		while (src[indx])
		{
			dst[indx] = src[indx];
			indx++;
		}
		dst[indx] = '\0';
		return (dst);
	}
}
