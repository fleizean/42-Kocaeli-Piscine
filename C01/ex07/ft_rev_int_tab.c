/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:59:01 by eyagiz            #+#    #+#             */
/*   Updated: 2021/12/01 18:05:37 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	b;

	i = 0;
	while (i < size / 2)
	{
		b = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = b;
		i++;
	}
}
