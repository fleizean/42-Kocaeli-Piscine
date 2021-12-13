/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 23:01:11 by eyagiz            #+#    #+#             */
/*   Updated: 2021/11/27 23:12:10 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reversealphbet;

	reversealphbet = 'z';
	while (reversealphbet >= 'a')
	{
		write(1, &reversealphbet, 1);
		reversealphbet--;
	}
}
