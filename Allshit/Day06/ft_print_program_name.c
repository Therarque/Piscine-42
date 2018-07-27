/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 22:38:08 by mamaurer          #+#    #+#             */
/*   Updated: 2018/07/19 14:11:22 by mamaurer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	while (argv[0][i] != '\0')
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	return (0);
}
