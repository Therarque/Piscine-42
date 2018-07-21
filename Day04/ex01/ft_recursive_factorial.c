/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 21:09:47 by mamaurer          #+#    #+#             */
/*   Updated: 2018/07/07 21:16:07 by mamaurer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	if ((nb == 0) || (nb == 1))
		return (1);
	else if ((nb > 0) && (nb < 13))
		return (result = nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}
