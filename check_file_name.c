/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file_name.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:05:06 by aamssafi          #+#    #+#             */
/*   Updated: 2022/05/16 23:13:54 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static char	*ft_strrchr(char *str, char c)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (0);
}

int	check_filename(char *name)
{
	char	*str;
	char	*ber;
	int		g;

	ber = ".ber";
	g = -1;
	str = ft_strrchr(name, '.');
	if (strlen(ber) != strlen(str))
		return (0);
	while (ber[++g])
	{
		if (ber[g] != str[g])
			return (0);
	}
	return (1);
}
