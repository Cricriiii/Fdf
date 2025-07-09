/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_display.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:22:04 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/02 17:44:30 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "fdf.h"

// static void	kill(t_mlx mlx)
// {
// 	mlx_destroy_window(mlx->mlx, mlx->win);
// 	mlx_destroy_display(mlx->mlx);
// 	free(mlx);
// 	exit(0);
// }

// static int	create_trgb(int t, int r, int g, int b)
// {
// 	return (t << 24 | r << 16 | g << 8 | b);
// }

// static int	key_hook(int keycode, t_fdf fdf)
// {	
// 	if (keycode == ESC)
// 		kill(fdf->displays->mlx);
// 	else if (keycode == LEFT_ARROW)
// 		move_left(fdf);

// 	return (0);
// }

// void	mlx_display(t_fdf fdf)
// {
// 	t_line	lptr;
// 	t_point	pptr;
	
// 	fdf->displays->mlx = ft_calloc(1, sizeof(struct s_mlx));
// 	fdf->displays->mlx->title = "First fdf try";
// 	fdf->displays->mlx = mlx_init();
// 	fdf->displays->mlx->win = mlx_new_window(fdf->displays->mlx, WIDTH, HEIGHT, "New window");

// 	lptr = fdf->map->lines;
// 	while (lptr)
// 	{
// 		pptr = lptr->points;
// 		while (pptr)
// 		{
// 			mlx_pixel_put(fdf->displays->mlx, fdf->displays->mlx->win, (int) (pptr->x * (float) (WIDTH / fdf->map->width)), (int) (pptr->y * (float) (HEIGHT / fdf->map->height)), create_trgb(255, 255, 255, 255));
// 			pptr = pptr->next;
// 		}
// 		lptr = lptr->next;
// 	}
// 	mlx_key_hook(fdf->displays->mlx->win, key_hook, fdf->displays);
// 	mlx_key_hook(fdf->displays->mlx->win, key_hook, fdf->displays);
// 	mlx_loop(fdf->displays->mlx);
// }
