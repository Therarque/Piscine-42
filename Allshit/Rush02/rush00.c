/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbenaroc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 19:33:11 by qbenaroc          #+#    #+#             */
/*   Updated: 2018/07/22 16:55:37 by qbenaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/colle02.h"

char	*ft_rush00(int x, int y, int k, char *tab00)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (++j <= y && x > 0 && y > 0)
	{
		while (i <= x)
		{
			if (((i == 1 || i == x) && j == 1) || ((i == 1 || i == x) &&
						j == y))
				tab00[k++] = 'o';
			else if ((i > 1 && i < x && j == 1) || (i > 1 && i < x && j == y))
				tab00[k++] = '-';
			else if ((i == 1 && j != 1 && j != y) || (i == x && j != 1 &&
						j != y))
				tab00[k++] = '|';
			else
				tab00[k++] = ' ';
			i++;
		}
		tab00[k++] = '\n';
		i = 1;
	}
	return (tab00);
}

char	*ft_push_rush00_intab(int x, int y)
{
	char	*tab00;
	int		tabsize;

	tabsize = (x * y) + y + 1;
	if (!(tab00 = (char*)malloc(sizeof(char) * tabsize)))
		return (0);
	tab00 = ft_rush00(x, y, 0, tab00);
	tab00[tabsize] = '\0';
	return (tab00);
}
