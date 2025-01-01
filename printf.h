/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odahriz <odahriz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:21:20 by odahriz           #+#    #+#             */
/*   Updated: 2025/01/01 13:07:12 by odahriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(long n);
int	ft_puthexa(unsigned long n, char c);
int	ft_putptr(void *ptr);

#endif