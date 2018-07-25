/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 18:25:32 by mamaurer          #+#    #+#             */
/*   Updated: 2018/07/24 21:48:49 by mamaurer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (src[len] != '\0')
		len++;
	str = malloc(sizeof(*str) * (len + 1));
	if (str[0] == '\0')
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

struct s_stock_par	*ft_param_to_tab(int argc, char **argv)
{
	t_stock_par		*stock;
	int				i;
	int				j;

	stock = malloc(sizeof(t_stock_par) * (argc + 1));
	if (!stock)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			j++;
		stock[i].size_param = j;
		stock[i].str = argv[i];
		stock[i].copy = ft_strdup(argv[i]);
		stock[i].tab = ft_split_whitespaces(argv[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
