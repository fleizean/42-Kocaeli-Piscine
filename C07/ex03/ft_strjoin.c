/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:15:16 by eyagiz            #+#    #+#             */
/*   Updated: 2021/12/14 13:28:25 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		indx1;
	int		indx2;
	int		c;

	s = malloc(sizeof(strs));
	indx1 = 0;
	c = 0;
	while (indx1 < size)
	{
		indx2 = 0;
		while (strs[indx1][indx2] != '\0')
		{
			s[c++] = strs[indx1][indx2++];
		}
		indx2 = 0;
		while (sep[indx2] != '\0' && indx1 != size - 1)
		{
			s[c++] = sep[indx2++];
		}
		indx1++;
	}
	s[c] = '\0';
	return (s);
}
