/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:24:45 by eyagiz            #+#    #+#             */
/*   Updated: 2021/12/07 12:26:36 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	temp;
	unsigned char	*str_value;
	char			*hex_symbol;

	hex_symbol = "0123456789abcdef";
	str_value = (unsigned char *)str;
	while (*str_value != '\0')
	{
		if (*str_value >= 32 && *str_value <= 126)
		{
			write(1, str_value, 1);
		}
		else
		{
			ft_putchar('\\');
			temp = *str_value / 16;
			ft_putchar(hex_symbol[temp]);
			temp = *str_value % 16;
			ft_putchar(hex_symbol[temp]);
		}
		str_value++;
	}
}
