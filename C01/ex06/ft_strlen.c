/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:50:35 by eyagiz            #+#    #+#             */
/*   Updated: 2021/11/30 19:28:26 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int say)
{
	if (say > 9)
	{
		ft_putnbr(say / 10);
		ft_putnbr(say % 10);
	}
	else
	{
		ft_putchar(say + 48);
	}
}

int	ft_strlen(char *str)
{
	int		say;

	say = 0;
	while (str[say] != '\0')
	{
		say++;
	}
	return (say);
}
