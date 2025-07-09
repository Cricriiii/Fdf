/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 13:36:35 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/02 17:44:24 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "fdf.h"

// int	create_trgb(int t, int r, int g, int b)
// {
// 	return (t << 24 | r << 16 | g << 8 | b);
// }

// void	move_left(t_fdf fdf)
// {
// 	t_point	point;
// 	t_line	line;

// 	line = fdf->map->lines;
// 	point = line->points;	
	
// 	mlx_clear_window(fdf->displays->mlx->mlx, fdf->displays->mlx->win);
// 	while (line)
// 	{
// 		while (point)
// 		{
// 			mlx_pixel_put(fdf->displays->mlx, fdf->displays->mlx->win, point->x -= 1, point->y, create_trgb(100, 100, 100, 100));
// 			point = point->next;
// 		}
// 		line = line->next;
// 	}	
// }

// void	move_right(t_fdf fdf)
// {
// 	// mlx_clear_window(mlx->mlx, mlx->win);
// 	mlx_pixel_put(mlx->mlx, mlx->win, mlx->point->x += 1, mlx->point->y, create_trgb(rand() % 255, rand() % 255, rand() % 255, rand() % 255));
// }

// void	move_up(t_fdf fdf)
// {
// 	// mlx_clear_window(mlx->mlx, mlx->win);
// 	mlx_pixel_put(mlx->mlx, mlx->win, mlx->point->x, mlx->point->y -= 1, create_trgb(rand() % 255, rand() % 255, rand() % 255, rand() % 255));
// }

// void	move_down(t_fdf fdf)
// {
// 	// mlx_clear_window(mlx->mlx, mlx->win);
// 	mlx_pixel_put(mlx->mlx, mlx->win, mlx->point->x, mlx->point->y += 1, create_trgb(rand() % 255, rand() % 255, rand() % 255, rand() % 255));
// }
