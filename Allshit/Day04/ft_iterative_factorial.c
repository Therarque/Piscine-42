/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 20:28:35 by mamaurer          #+#    #+#             */
/*   Updated: 2018/07/07 21:51:31 by mamaurer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;
	int result;

	fact = 1;
	result = 1;
	if ((nb < 0) && (nb > 13))
		return (0);
	else if ((nb == 0) || (nb == 1))
		return (1);
	while (fact <= nb)
	{
		result = result * fact;
		fact++;
	}
	return (result);
}
