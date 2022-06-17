/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:05:28 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/17 07:32:39 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define S_BUTTON 1
# define A_BUTTON 0
# define ESC_BUTTON 53
# define W_BUTTON 13
# define D_BUTTON 2

# include "get_next_line.h"
# include <unistd.h>
# include <mlx.h>
# include <stdlib.h>
# include <errno.h>
# include <fcntl.h>
# include <string.h>
# include <stdarg.h>

typedef struct s_map
{
	int		width;
	int		height;
	void	*win_ptr;
	void	*mlx_ptr;
	char	*wall_img_path;
	void	*wall_img;
	char	*yajora_path;
	void	*yajora_img;
	char	*coin_path;
	void	*coin_img;
	char	*door_locked_path;
	void	*door_locked_img;
	char	*door_opened_path;
	char	*door_opened_img;
	int		xml_w;
	int		xml_h;
	char	*player_img_path;
	void	*player_img;
	int		player_position_x;
	int		player_position_y;
	int		door_position_x;
	int		door_position_y;
	char	**map_parsing;
	char	*map_fd;
	int		map_x;
	int		map_y;
	int		coin_count;
	int		door_count;
	int		player_count;
	int		moves_count;
}	t_map;

void	ft_draw_map(t_map *map);
int		check_map(t_map *map);
int		cnt_map_dim(t_map *map);
int		parse_map(t_map *map);
int		check_map_len(t_map *map);
void	ft_draw_wall(t_map *map);
void	ft_draw_floor(t_map *map);
void	ft_draw_coin(t_map *map);
void	ft_draw_door(t_map *map);
void	ft_draw_player(t_map *map);
int		ft_count_elements(t_map *map);
void	ft_print_2d(t_map *map);
int		ft_moves(int key, t_map *map);
void	move_p_right(t_map *map);
void	move_p_down(t_map *map);
void	move_p_left(t_map *map);
void	move_p_up(t_map *map);
int		put_error(int error);
int		check_map_elmnt(t_map *map);
void	swich_door(t_map *map);
int		p_next_to_door(t_map *map);
void	display_end(t_map *map);
int		ft_close(t_map *map);
void	ft_key_move_p_right(t_map *map);
void	ft_key_move_p_left(t_map *map);
void	ft_key_move_p_up(t_map *map);
void	ft_key_move_p_down(t_map *map);
int		check_filename(char *name);
int		ft_type(va_list arg, char vd);
int		ft_printf(const char *vd, ...);
int		ft_putstr(char *s);
int		ft_putchar(char r);
int		ft_putnbr(int nb);
#endif
