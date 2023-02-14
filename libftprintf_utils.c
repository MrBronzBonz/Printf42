/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 08:56:40 by ebronzin          #+#    #+#             */
/*   Updated: 2023/02/14 08:48:43 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int ft_putchar(char ch)
{
	if ( ch )
	{
		write(1, &ch, 1);
		return (1);
	}
	else
		return (0);
}

int ft_putstr(char *c)
{
	int i;

	i = 0;
	if (c == NULL)
	{
		write (1, "Null", 6);
		return (6);
	}
	while (c[i])
	{
		write( 1, &c[i], 1);
		i++;
	}
	return (i);
}
