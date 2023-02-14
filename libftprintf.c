/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:31:34 by ebronzin          #+#    #+#             */
/*   Updated: 2023/02/14 09:24:26 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int	ft_organize(va_list list, const char format)
{
	int	print;

	print = 0;

	if (format == 'c')
		print += ft_putchar(va_arg(vl, int));
	else if (format == 'd')
		print += ft_putchar(va_arg(vl, int));
}

int	ft_printf(const char *token, ...)
{
	va_list list;
	va_start(list, token);
	int 	count;
	char	k;

	count = 0;
	while (token[count])
	{
		if (token[count] == '%')
		{
			count++;
			if (token[count] == 'c')
			{
				k = va_arg(list, int);
				ft_putchar(k);
			}
			else if (token[count] == 'd')
			{
				k = va_arg(list, int);
				ft_putchar(k);
			}
			else if (token[count] == 's')
			{
				k = va_arg(list, int);
				ft_putstr(&k);
			}
			/*else if (token[count] == 'p')
			{
				k = va_arg(list, int);
				ft_putstr((char *)&k);
			}*/
			else if (token[count] == '%')
			{
				k = va_arg(list, int);
				ft_putchar(k);
			}
		}
		else
			write(1, &token[count] , 1);
		count++;
	}
	va_end(list);
	return (0);
}

int main()
{
	char	c = 'C';
	int		i = 57;
	char	*s = "yeye(0)ye!";
	//void	*p = NULL;
	/*char	n = "15";
	unsigned int	u = "-345";*/
	char	q = 37;


	ft_printf("Qui devo stampare C:%c, qui devo stampare 9:%d, qui'devo stampare yeye(0)ye!:%s e qui devo stampare PERCENTUALE:%% fine trasmissione", c, i , *s, q);
}
