/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 06:38:29 by mamaurer          #+#    #+#             */
/*   Updated: 2018/07/21 21:54:29 by mamaurer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	affichage(int j, char **str)
{
	int i;

	i = 0;
	while (++i < j)
	{
		ft_putstr(str[i]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		time;
	char	*tmp;

	time = 1;
	while (time > 0)
	{
		time = 0;
		i = -1;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				time = 1;
			}
		}
	}
	affichage(argc, argv);
	return (0);
}
