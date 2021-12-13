/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:28:10 by stunca            #+#    #+#             */
/*   Updated: 2021/11/28 15:06:37 by stunca           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	is_negative(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}

void	ft_print_line(char left, char middle, char right, int size)
{
	ft_putchar(left);
	while (size > 2)
	{
		ft_putchar(middle);
		size--;
	}
	size--;
	if (size == 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	x = is_negative(x);
	y = is_negative(y);
	if (x == 0 || y == 0)
		return ;
	ft_print_line('A', 'B', 'C', x);
	while (y > 2)
	{
		y--;
		ft_print_line('B', ' ', 'B', x);
	}
	y--;
	if (y == 1)
		ft_print_line('C', 'B', 'A', x);
}
