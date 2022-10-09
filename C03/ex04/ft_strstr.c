/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuzminy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:16:46 by nkuzminy          #+#    #+#             */
/*   Updated: 2022/07/30 15:05:01 by nkuzminy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		f = 0;
		while (str[i + f] == to_find[f] && str[i + f] != '\0')
		{
			if (to_find[f + 1] == '\0')
				return (&str[i]);
			f++;
		}
		i++;
	}
	return (0);
}
