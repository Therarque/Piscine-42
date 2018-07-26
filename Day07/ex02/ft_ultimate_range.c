/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 01:04:00 by mamaurer          #+#    #+#             */
/*   Updated: 2018/07/26 18:07:53 by mamaurer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	tab = malloc(sizeof(*tab) * ((max - min)));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}
