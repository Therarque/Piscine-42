/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 20:18:12 by mamaurer          #+#    #+#             */
/*   Updated: 2018/07/19 14:12:37 by mamaurer         ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;
	j = 1;
	while (j < argc)
	{
		while (argv[i] != '\0' && i > 0)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i--;
		}
		j++;
	}
}
