/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuzminy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:52:58 by nkuzminy          #+#    #+#             */
/*   Updated: 2022/08/03 11:58:55 by nkuzminy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 0)
	{
		while (av[0][i])
		{
			write (1, &av[0][i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
