/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 21:16:02 by aamssafi          #+#    #+#             */
/*   Updated: 2022/05/07 21:36:22 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "so_long.h"

int	ft_putnbr(int nb)
{
	unsigned int	num;
	int				i;

	i = 0;
	num = nb;
	if (nb < 0)
	{
		i += ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		i += ft_putnbr(num / 10);
		num = num % 10;
	}
	if (num < 10)
	{
		i += ft_putchar(num + 48);
	}
	return (i);
}
