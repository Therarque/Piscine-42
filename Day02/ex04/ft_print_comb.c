/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 02:27:50 by mamaurer          #+#    #+#             */
/*   Updated: 2018/07/05 21:50:20 by mamaurer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	count(int c, int d, int u)
{
	if (c == 7 && d == 8 && u == 9)
	{
		ft_putchar(c + '0');
		ft_putchar(d + '0');
		ft_putchar(u + '0');
	}
	else
	{
		ft_putchar(c + '0');
		ft_putchar(d + '0');
		ft_putchar(u + '0');
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = 0;
	while (c <= 7)
	{
		d = c + 1;
		while (d <= 8)
		{
			u = d + 1;
			while (u <= 9)
			{
				count(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
