/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:05:43 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/17 07:58:30 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_assign_map(t_map *map, int i, int j)
{
	if (map->map_parsing[j][i] == '\n')
		i++;
	if (map->map_parsing[j][i] == '1')
		ft_draw_wall(map);
	if (map->map_parsing[j][i] == '0')
		ft_draw_floor(map);
	if (map->map_parsing[j][i] == 'C')
		ft_draw_coin(map);
	if (map->map_parsing[j][i] == 'E')
	{
		map->door_position_y = j;
		map->door_position_x = i;
		ft_draw_door(map);
	}
	if (map->map_parsing[j][i] == 'P')
	{
		map->player_position_x = i;
		map->player_position_y = j;
		ft_draw_player(map);
	}
}

void	ft_put_images(t_map *map)
{
	int	i;
	int	j;

	j = 0;
	while (map->map_parsing[j])
	{
		i = 0;
		while (map->map_parsing[j][i])
		{
			map->map_x = i * 80;
			map->map_y = j * 80;
			ft_assign_map(map, i, j);
			i++;
		}
		j++;
	}
}

void	ft_assign_images(t_map *map)
{
	map->wall_img = mlx_xpm_file_to_image(map->mlx_ptr, "./xpms/wall.xpm",
			&map->xml_w, &map->xml_h);
	map->yajora_img = mlx_xpm_file_to_image(map->mlx_ptr, "./xpms/yajora.xpm",
			&map->xml_w, &map->xml_h);
	map->player_img = mlx_xpm_file_to_image(map->mlx_ptr, "./xpms/player.xpm",
			&map->xml_w, &map->xml_h);
	map->door_locked_img = mlx_xpm_file_to_image(map->mlx_ptr,
			"./xpms/door_locked.xpm", &map->xml_w, &map->xml_h);
	map->door_opened_img = mlx_xpm_file_to_image(map->mlx_ptr,
			"./xpms/door_opened.xpm", &map->xml_w, &map->xml_h);
	map->coin_img = mlx_xpm_file_to_image(map->mlx_ptr, "./xpms/coin.xpm",
			&map->xml_w, &map->xml_h);
}

void	ft_draw_map(t_map *map)
{
	ft_assign_images(map);
	ft_put_images(map);
	if (map->coin_count == 0)
		swich_door(map);
	if (p_next_to_door(map))
		display_end(map);
	mlx_key_hook(map->win_ptr, &ft_moves, map);
	mlx_hook(map->win_ptr, 17, 1L << 2, ft_close, map);
}

int	main(int argc, char **argv)
{
	int		fd;
	t_map	map;

	map.map_fd = argv[1];
	fd = open(argv[1], O_RDONLY);
	if (fd == -1 || !check_filename(argv[1]))
		return (put_error(1));
	if (argc == 2)
	{
		parse_map(&map);
		if (!check_map(&map) || !check_map_elmnt(&map))
			return (put_error(0));
		map.mlx_ptr = mlx_init();
		map.win_ptr = mlx_new_window(map.mlx_ptr, map.width * 80,
				map.height * 80, "so_long");
		ft_draw_map(&map);
		mlx_loop(map.mlx_ptr);
	}
	return (0);
}
