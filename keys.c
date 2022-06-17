/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:06:10 by aamssafi          #+#    #+#             */
/*   Updated: 2022/06/17 07:30:05 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_moves(int key, t_map *map)
{
	if (key == D_BUTTON || key == 124)
		ft_key_move_p_right(map);
	if (key == A_BUTTON || key == 123)
		ft_key_move_p_left(map);
	if (key == S_BUTTON || key == 125)
		ft_key_move_p_down(map);
	if (key == W_BUTTON || key == 126)
		ft_key_move_p_up(map);
	if (key == ESC_BUTTON)
		exit(0);
	ft_draw_map(map);
	return (1);
}
