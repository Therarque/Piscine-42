/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 09:34:06 by mamaurer          #+#    #+#             */
/*   Updated: 2018/07/26 17:48:34 by mamaurer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		how_many_words(char *str)
{
	int i;
	int nw;

	i = 0;
	nw = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == 9 || str[i] == 32 || str[i] == 10) &&
				(str[i - 1] >= 33 && str[i - 1] <= 126))
			nw++;
		i++;
	}
	if (str[i] == '\0' && (str[i - 1] >= 33 && str[i - 1] <= 126))
		nw++;
	return (nw);
}

int		hma(char *str, int i)
{
	int nb;

	nb = 0;
	while (str[i] != 0 && str[i] != 9 && str[i] != 32 && str[i] != 10)
	{
		i++;
		nb++;
	}
	return (nb);
}

char	*ft_strcpy(char *src, int i)
{
	int		j;
	char	*dest;

	j = 0;
	dest = malloc(sizeof(char) * (hma(src, i)));
	if (dest == NULL)
		return (NULL);
	while (src[i] != 0 && src[i] != 9 && src[i] != 32 && src[i] != 10)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		taille;

	i = 0;
	j = 0;
	taille = how_many_words(str);
	tab = malloc(sizeof(*tab) * (taille + 1));
	if (tab == NULL)
		return (NULL);
	while (j < taille)
	{
		if (str[i] != '\0' && str[i] != 9 && str[i] != 32 && str[i] != 10)
		{
			tab[j] = ft_strcpy(str, i);
			while (str[i] != 9 && str[i] != 32 && str[i] != 10 && str[i])
				i++;
			j++;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}
