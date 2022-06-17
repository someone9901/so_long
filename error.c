/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:04:49 by aamssafi          #+#    #+#             */
/*   Updated: 2022/05/13 21:08:36 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
		write(fd, &str[i++], 1);
}

int	check_map_elmnt(t_map *map)
{
	if (map->coin_count < 1)
		return (0);
	if (map->player_count != 1)
		return (0);
	if (map->door_count != 1)
		return (0);
	return (1);
}

int	put_error(int error)
{
	if (error == 0)
		ft_putstr_fd("Invalid map !\n", 2);
	if (error == 1)
		ft_putstr_fd("file not found\n", 2);
	return (0);
}
