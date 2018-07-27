/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_match.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbenaroc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 12:19:49 by qbenaroc          #+#    #+#             */
/*   Updated: 2018/07/22 18:22:30 by qbenaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/colle02.h"

char	*ft_manage_match(char *str, int x, int y)
{
	char	*match_tab;
	int		i;

	i = 0;
	if (!(match_tab = (char*)malloc(sizeof(char) * 6)))
		return (0);
	if (ft_comparestr(str, ft_push_rush00_intab(x, y)) == 1)
		match_tab[i++] = '0';
	if (ft_comparestr(str, ft_push_rush01_intab(x, y)) == 1)
		match_tab[i++] = '1';
	if (ft_comparestr(str, ft_push_rush02_intab(x, y)) == 1)
		match_tab[i++] = '2';
	if (ft_comparestr(str, ft_push_rush03_intab(x, y)) == 1)
		match_tab[i++] = '3';
	if (ft_comparestr(str, ft_push_rush04_intab(x, y)) == 1)
		match_tab[i++] = '4';
	match_tab[i] = '\0';
	return (match_tab);
}

void	ft_display_match(char *tab, int x, int y)
{
	int i;

	i = 0;
	while (tab[i])
	{
		ft_putstr("[colle-0");
		ft_putchar(tab[i]);
		ft_putstr("] [");
		ft_putnbr(x);
		ft_putstr("] [");
		ft_putnbr(y);
		ft_putchar(']');
		if (tab[i + 1] != '\0')
			ft_putstr(" || ");
		i++;
	}
	if (i > 0)
		ft_putchar('\n');
	if (tab[0] == '\0')
		ft_putstr("aucune\n");
}
