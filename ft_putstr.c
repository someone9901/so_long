/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 21:16:23 by aamssafi          #+#    #+#             */
/*   Updated: 2022/05/07 21:16:31 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_putstr(char *s)
{
	int	k;

	if (!s)
		return (ft_putstr("(null)"));
	k = ft_strlen(s);
	write(1, s, k);
	return (k);
}
