/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 07:30:04 by mamaurer          #+#    #+#             */
/*   Updated: 2018/07/26 20:57:40 by mamaurer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src, int count, int ac)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
		if (count == ac - 2)
			dest[i + j] = '\0';
		else
			dest[i + j] = '\n';
	}
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		count;

	count = 0;
	while (count < argc)
	{
		j = 0;
		while (argv[j] != '\0')
		{
			count++;
			j++;
		}
	}
	str = malloc(sizeof(*str) * (count + 1));
	i = 0;
	while (i < argc - 1)
	{
		str = ft_strcat(str, argv[i + 1], i, argc);
		i++;
	}
	return (str);
}

int main(int ac, char **av)
{
	printf("%s\n", ft_concat_params(ac, av));
}
