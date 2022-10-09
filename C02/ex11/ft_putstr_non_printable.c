/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuzminy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:59:26 by nkuzminy          #+#    #+#             */
/*   Updated: 2022/07/25 15:25:31 by nkuzminy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	h;

	i = 0;
	h = 0x0;
	while (str[i])
	{
		if ((str[i] < 'a') || (str[i] > 'z' && str[i] < 'A') || (str[i] > 'Z'))
		{
			ft_putchar(str[i]);
			i++;
		}
		else if ((str[i] >= 32) && (str[i] <= 126))
		{
			ft_putchar(92 + h + str[i]);
			i++;
		}
	}
}
