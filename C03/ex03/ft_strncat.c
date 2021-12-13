/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 08:49:19 by eyagiz            #+#    #+#             */
/*   Updated: 2021/12/08 08:54:20 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	indx;
	unsigned int	indx2;

	indx = 0;
	indx2 = 0;
	while (dest[indx] != '\0')
	{
		indx++;
	}
	while (src[indx2] != '\0' && indx2 < nb)
	{
		dest[indx] = src[indx2];
		indx++;
		indx2++;
	}
	dest[indx] = '\0';
	return (dest);
}
