/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 02:29:58 by mamaurer          #+#    #+#             */
/*   Updated: 2018/07/27 02:34:59 by mamaurer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		taille(int ac, char **av)
{
	int i;
	int j;
	int taillet;

	i = 1;
	taillet = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			taillet++;
			j++;
		}
		i++;
	}
	if (ac > 2)
		taillet -= ac - 2;
	return (taillet);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		taillet;
	char	*str;

	taillet = taille(argc, argv);
	str = malloc(sizeof(char) * (taillet + 1));
	if (str == NULL)
		return (NULL);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			str[k++] = argv[i][j++];
		if (i < argc - 1)
			str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
