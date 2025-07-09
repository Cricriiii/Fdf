/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_display_init.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:08:38 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 15:03:28 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static bool	mlx_init_fail(t_mlx	mlx)
{
	return (!mlx || !mlx->mlx || !mlx->win);
}

t_mlx	mlx_display_init(char *title)
{
	t_mlx	mlx;

	if (!title)
		title = "New window";
	mlx = ft_calloc(1, sizeof(struct s_mlx));
	if (mlx)
	{
		mlx->mlx = mlx_init();
		if (mlx->mlx)
			mlx->win = mlx_new_window(mlx->mlx, WIDTH, HEIGHT, title);
	}
	if (mlx_init_fail(mlx))
		;	//	sequence de sortie
	return (mlx);
}