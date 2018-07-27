/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_view_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboutoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:26:15 by bboutoil          #+#    #+#             */
/*   Updated: 2018/07/14 19:35:35 by bboutoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../grid_view.c"

void	test_print_grid(void)
{
	int		toto[9][9] = {0};
	show_grid(toto);
}

int main(void)
{
	test_print_grid();
	return 0;
}
