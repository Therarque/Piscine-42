/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbenaroc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 10:48:34 by qbenaroc          #+#    #+#             */
/*   Updated: 2018/07/22 18:30:43 by qbenaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE02_H
# define COLLE02_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_rush(int x, int y);
int		get_x(char *str);
int		get_y(char *str);
int		ft_comparestr(char *s1, char *s2);
char	*ft_push_rush00_intab(int x, int y);
char	*ft_push_rush01_intab(int x, int y);
char	*ft_push_rush02_intab(int x, int y);
char	*ft_push_rush03_intab(int x, int y);
char	*ft_push_rush04_intab(int x, int y);
void	ft_putnbr(int nb);
void	ft_display_match(char *tab, int x, int y);
char	*ft_manage_match();

#endif
