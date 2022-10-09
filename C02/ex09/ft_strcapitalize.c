/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuzminy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:59:08 by nkuzminy          #+#    #+#             */
/*   Updated: 2022/07/21 17:39:03 by nkuzminy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (str[i] != '\0')
	{
		if (l == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			l++;
		}
		else if (l > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			l = 0;
		else
			l++;
		i++;
	}
	return (str);
}
