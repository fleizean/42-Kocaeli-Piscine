/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 23:21:03 by eyagiz            #+#    #+#             */
/*   Updated: 2021/12/12 23:21:07 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int ac, char **av)
{
	int	a ;

	a = 0;
	if (ac > 0)
	{
		while (av[0][a] != '\0')
		{
			write(1, &av[0][a], 1);
			a++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
