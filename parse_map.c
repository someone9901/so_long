/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:04:39 by aamssafi          #+#    #+#             */
/*   Updated: 2022/05/31 22:21:20 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

char	*ft_assign(char **height, int fd)
{
	*height = get_next_line(fd);
	return (*height);
}

int	cnt_l(int fd)
{
	char	*line;

	line = get_next_line(fd);
	if (!line)
	{
		free(line);
		return (0);
	}
	free(line);
	return (1);
}

int	cnt_map_dim(t_map *map)
{
	int		fd;
	int		i;
	char	*width;

	fd = open(map->map_fd, O_RDONLY);
	i = 0;
	width = get_next_line(fd);
	if (width == NULL)
	{
		write(1, "Empty map\n", 11);
		exit(0);
	}
	map->width = ft_strlen(width) - 1;
	free(width);
	while (cnt_l(fd))
		i++;
	map->height = i + 1;
	return (0);
}

int	parse_map(t_map *map)
{
	int	i;
	int	fd;

	i = 0;
	cnt_map_dim(map);
	fd = open(map->map_fd, O_RDONLY);
	map->map_parsing = malloc(sizeof(char *) * map->height + 1);
	while ((ft_assign(&map->map_parsing[i], fd)))
		i++;
	map->map_parsing[i] = 0;
	ft_count_elements(map);
	return (i);
}

int	check_map_len(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->height - 1)
	{
		if (ft_strlen(map->map_parsing[i]) - 1 != map->width)
		{	
			return (0);
		}
		i++;
	}
	return (1);
}
