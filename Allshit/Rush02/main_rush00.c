/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_rush00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbenaroc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 16:57:37 by qbenaroc          #+#    #+#             */
/*   Updated: 2018/07/21 17:57:40 by qbenaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/colle02.h"

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_rush(ft_atoi(av[1]), ft_atoi(av[2]));
	}
	return (0);
}
