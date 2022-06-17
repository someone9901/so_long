/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:04:44 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/17 07:30:32 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_count_elements(t_map *map)
{
	int	i;
	int	j;

	j = 0;
	while (map->map_parsing[j])
	{
		i = 0;
		while (map->map_parsing[j][i])
		{
			if (map->map_parsing[j][i] == 'C')
				map->coin_count += 1;
			if (map->map_parsing[j][i] == 'E')
				map->door_count += 1;
			if (map->map_parsing[j][i] == 'P')
				map->player_count += 1;
			i++;
		}
		j++;
	}
	return (1);
}
