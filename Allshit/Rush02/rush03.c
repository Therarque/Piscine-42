/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbenaroc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 21:57:00 by qbenaroc          #+#    #+#             */
/*   Updated: 2018/07/22 16:57:57 by qbenaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/colle02.h"

char	*ft_rush03(int x, int y, int k, char *tab03)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (++j <= y)
	{
		while (i <= x)
		{
			if (((i == x && j == 1) && x != 1) || ((j == y && i == x) &&
						y != 1))
				tab03[k++] = 'C';
			else if ((i == 1 && j == 1) || (i == 1 && j == y))
				tab03[k++] = 'A';
			else if ((i > 1 && i < x && j == 1) || (i > 1 && i < x && j == y)
					|| ((i == 1 || i == x) && (j != 1 && j != y)))
				tab03[k++] = 'B';
			else
				tab03[k++] = ' ';
			i++;
		}
		tab03[k++] = '\n';
		i = 1;
	}
	return (tab03);
}

char	*ft_push_rush03_intab(int x, int y)
{
	char	*tab03;
	int		tabsize;

	tabsize = (x * y) + y + 1;
	if (!(tab03 = (char*)malloc(sizeof(char) * tabsize)))
		return (0);
	tab03 = ft_rush03(x, y, 0, tab03);
	tab03[tabsize] = '\0';
	return (tab03);
}
