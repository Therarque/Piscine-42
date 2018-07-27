/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbenaroc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 21:43:42 by qbenaroc          #+#    #+#             */
/*   Updated: 2018/07/22 16:57:35 by qbenaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/colle02.h"

char	*ft_rush02(int x, int y, int k, char *tab02)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (++j <= y && x > 0 && y > 0)
	{
		while (i <= x)
		{
			if ((i == 1 || i == x) && j == 1)
				tab02[k++] = 'A';
			else if ((i == 1 || i == x) && j == y)
				tab02[k++] = 'C';
			else if ((i > 1 && i < x && j == 1) || (i > 1 && i < x && j == y)
					|| ((i == 1 || i == x) && (j != 1 && j != y)))
				tab02[k++] = 'B';
			else
				tab02[k++] = ' ';
			i++;
		}
		tab02[k++] = '\n';
		i = 1;
	}
	return (tab02);
}

char	*ft_push_rush02_intab(int x, int y)
{
	char	*tab02;
	int		tabsize;

	tabsize = (x * y) + y + 1;
	if (!(tab02 = (char*)malloc(sizeof(char) * tabsize)))
		return (0);
	tab02 = ft_rush02(x, y, 0, tab02);
	tab02[tabsize] = '\0';
	return (tab02);
}
