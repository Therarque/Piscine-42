/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoury- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:03:45 by akhoury-          #+#    #+#             */
/*   Updated: 2018/07/08 21:01:24 by akhoury-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	afficher(int x, int y, char dessin[][y])
{
	int dx;
	int dy;

	dy = 0;
	while (dy < y)
	{
		dx = 0;
		while (dx <= x)
		{
			if (dx == x)
				ft_putchar('\n');
			else
				ft_putchar(dessin[dx][dy]);
			dx++;
		}
		dy++;
	}
}

void	rush(int x, int y)
{
	char	tab[x][y];
	int		cx;
	int		cy;

	cy = 0;
	if (x > 0 && y > 0)
	{
		while (cy++ < y)
		{
			cx = 0;
			while (cx++ < x)
			{
				if ((cx == 1 && cy == 1) || (cx == x && cy == y) ||
					(cx == 1 && cy == y) || (cx == x && cy == 1))
					tab[cx - 1][cy - 1] = 'o';
				else if (cx != 1 && cx != x && cy != 1 && cy != y)
					tab[cx - 1][cy - 1] = ' ';
				else if (cx == 1 || cx == x)
					tab[cx - 1][cy - 1] = '|';
				else
					tab[cx - 1][cy - 1] = '-';
			}
		}
		afficher(x, y, tab);
	}
}
