/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbenaroc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 22:15:45 by qbenaroc          #+#    #+#             */
/*   Updated: 2018/07/22 16:58:10 by qbenaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/colle02.h"

char	*ft_rush04(int x, int y, int k, char *tab04)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (++j <= y)
	{
		while (i <= x)
		{
			if (((i == x && j == 1) && x != 1) || ((j == y && i == 1) &&
						y != 1))
				tab04[k++] = 'C';
			else if ((i == 1 && j == 1) || (i == x && j == y))
				tab04[k++] = 'A';
			else if ((i > 1 && i < x && j == 1) || (i > 1 && i < x && j == y)
					|| ((i == 1 || i == x) && (j != 1 && j != y)))
				tab04[k++] = 'B';
			else
				tab04[k++] = ' ';
			i++;
		}
		tab04[k++] = '\n';
		i = 1;
	}
	return (tab04);
}

char	*ft_push_rush04_intab(int x, int y)
{
	char	*tab04;
	int		tabsize;

	tabsize = (x * y) + y + 1;
	if (!(tab04 = (char*)malloc(sizeof(char) * tabsize)))
		return (0);
	tab04 = ft_rush04(x, y, 0, tab04);
	tab04[tabsize] = '\0';
	return (tab04);
}
