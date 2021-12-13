/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 08:55:29 by eyagiz            #+#    #+#             */
/*   Updated: 2021/12/08 08:58:45 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	indx;
	int	b;

	indx = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[indx] != '\0')
	{
		b = 0;
		while (str[indx + b] == to_find[b])
		{
			b++;
			if (to_find[b] == '\0')
				return (&str[indx]);
		}
		indx++;
	}
	return (0);
}
