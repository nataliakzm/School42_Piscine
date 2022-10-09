/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuzminy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:06:32 by nkuzminy          #+#    #+#             */
/*   Updated: 2022/07/16 13:28:46 by nkuzminy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putint(int num, int max)
{
	char	c;
	char	d;

	if (num <= 9)
	{
		c = num + 48;
		ft_putchar('0', c);
	}
	else if (num <= max)
	{
		c = (num % 10) + 48;
		d = (num / 10) + 48;
		ft_putchar(d, c);
	}
}

void	ft_cutint(int e, int f)
{
	ft_putint(e, 98);
	write(1, " ", 1);
	ft_putint(f, 99);
	if (e != 98 || f != 99)
	{
		ft_putchar(',', ' ');
	}
}

void	ft_print_comb2(void)
{
	int	g;
	int	h;

	g = 0;
	while (g <= 98)
	{
		h = g + 1;
		while (h <= 99)
		{
			ft_cutint(g, h);
			h++;
		}
		g++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
