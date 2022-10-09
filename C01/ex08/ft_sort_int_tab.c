/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuzminy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:47:53 by nkuzminy          #+#    #+#             */
/*   Updated: 2022/07/20 14:20:24 by nkuzminy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	x;

	i = 0;
	while (i < size)
	{
		x = 0;
		tmp = 0;
		while (x < (size - 1))
		{
			if (tab[x] > tab[x + 1])
			{
				tmp = tab[x];
				tab[x] = tab[x + 1];
				tab[x + 1] = tmp;
			}
			x++;
		}
		i++;
	}
}
