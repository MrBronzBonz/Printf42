/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 08:56:14 by ebronzin          #+#    #+#             */
/*   Updated: 2023/02/14 15:48:26 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *token, ...);
int		ft_organize(va_list list, const char format);
int		ft_putchar(char ch);
int		ft_putstr(char *c);
int		ft_putptr(uintptr_t ptr);
void	ft_put_ptr(uintptr_t nb);
int		len_ptr(uintptr_t nb);
int		ft_putesadecimal(unsigned int num, const char format);
void	ft_put_esa(unsigned int num, const char format);
int		esa_len(unsigned int num);
int		ft_putnumbr(int i);
char	*ft_itoa(int n);
int		ft_len(int n);
char	*ft_char(char *s, unsigned int number, int len);
int		ft_putunsnumbr(unsigned int nb);
int		ll_lenght(long long nb, int base);

#endif
