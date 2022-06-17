/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 21:06:57 by aamssafi          #+#    #+#             */
/*   Updated: 2022/05/07 21:36:19 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_type(va_list arg, char vd)
{
	int	plus;

	plus = 0;
	if (vd == 'c')
		plus += ft_putchar(va_arg(arg, int));
	else if (vd == 's')
		plus += ft_putstr(va_arg(arg, char *));
	else if (vd == 'i' || vd == 'd')
		plus += ft_putnbr(va_arg(arg, int));
	else if (vd == '%')
		plus += ft_putchar('%');
	else
		plus += ft_putchar(vd);
	return (plus);
}

int	ft_printf(const char *vd, ...)
{
	int		i;
	int		p;
	va_list	arg;

	va_start (arg, vd);
	i = 0;
	p = 0;
	while (vd[i])
	{
		if (vd[i] == '%')
		{
			i++;
			p += ft_type(arg, vd[i]);
			if (vd[i] == '\0')
				break ;
		}
		else
			p += ft_putchar(vd[i]);
		i++;
	}
	va_end (arg);
	return (p);
}
