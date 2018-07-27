/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 15:15:19 by smoulin           #+#    #+#             */
/*   Updated: 2018/07/22 16:53:34 by qbenaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/colle02.h"

int		ft_strval(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_comparlen(char *s1, char *s2)
{
	int		i;
	int		a;

	i = ft_strval(s1);
	a = ft_strval(s2);
	if (a == i)
		return (1);
	return (0);
}

int		ft_comparestr(char *s1, char *s2)
{
	int		i;

	i = 0;
	if (ft_comparlen(s1, s2) == 1)
	{
		while (s1[i] == s2[i])
		{
			if (s1[i] == '\0' && s2[i] == '\0')
				return (1);
			i++;
		}
		return (0);
	}
	return (0);
}
