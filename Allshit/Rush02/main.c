/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbenaroc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 10:57:11 by qbenaroc          #+#    #+#             */
/*   Updated: 2018/07/22 18:20:29 by qbenaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/colle02.h"

char	*ft_realloc(char *buff, int b_size)
{
	int		i;
	char	*copybuff;

	i = 0;
	if (!(copybuff = (char*)malloc(sizeof(char) * b_size)))
		return (0);
	while (i < b_size)
	{
		copybuff[i] = buff[i];
		i++;
	}
	if (!(buff = (char*)malloc(sizeof(char) * b_size + 1)))
		return (0);
	i = 0;
	while (i < b_size)
	{
		buff[i] = copybuff[i];
		i++;
	}
	return (buff);
}

int		main(void)
{
	char	*result_buff;
	char	*match_tab;
	int		x;
	int		y;
	int		i;

	i = 0;
	if (!(result_buff = (char*)malloc(sizeof(char))))
		return (0);
	while (read(0, result_buff + i, 1))
	{
		i++;
		ft_realloc(result_buff, i);
	}
	result_buff[i] = '\0';
	if (result_buff[0] == '\0')
	{
		ft_putstr("aucune\n");
		return (0);
	}
	x = get_x(result_buff);
	y = get_y(result_buff);
	match_tab = ft_manage_match(result_buff, x, y);
	ft_display_match(match_tab, x, y);
	return (0);
}
