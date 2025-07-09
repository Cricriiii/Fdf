/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:27:46 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/09 13:21:14 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	kill(t_mlx mlx)
{
	// mlx_destroy_window(mlx->mlx, mlx->win);
	// mlx_destroy_display(mlx->mlx);
	free(mlx);
	exit(0);
}

static int	create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

static int	key_hook(int keycode, t_mlx mlx)
{	
	if (keycode == ESC)
		kill(mlx);

	return (0);
}

void	mlx_display(t_fdf fdf)
{
	t_point	**point;
	int		x;
	int		y;

	point = fdf->map->lines;
	y = 0;
	while (point[y])
	{
		x = 0;
		while (point[y][x])
		{
			point[y][x]->cx = point[y][x]->x * WIDTH / fdf->map->width;
			point[y][x]->cy = point[y][x]->y * HEIGHT / fdf->map->height;
			point[y][x]->cz = point[y][x]->z * 5;
			point[y][x]->cw = 1;
			x++;
		}
		y++;
	}
	y = 0;
	while (point[y])
	{
		x = 0;
		while (point[y][x])
		{
			if (point[y][x + 1])
				plot_bresenham(fdf->mlx, point[y][x], point[y][x + 1]);
			if (point[y + 1])
				plot_bresenham(fdf->mlx, point[y][x], point[y+1][x]);
			x++;
		}
		y++;
	}
	
	//	Les differentes structures se trouvent dans ./fdf/includes/, dans les headers ***_structures.h)
	// 	
	//	toute cette fonction mlx_display est du test, elle sera totalement reecrite quand les transformations fonctionneront
	//
	//	la bouce for ci-dessous illustre l'idee : 
	//	mapper les event touche / souris a la modification d'un vecteur	qui va incrementer les transformation a appliquer via la fonction vector_configure()
	//	(par exemple rotation de +5 degres sur Rx, decaler de -20 sur y)
	//
	//	ensuite, la matrice TRS est calculee via trs_compute(), a partir du vecteur
	//	
	//
	//	une fois TRS calculee, l'idee est de l'appliquer a chaque paire de points 
	//	et de dessiner les lignes via l'algorithme de dessin de Bresenham.
	//
	//	chaque point contient sa valeur d'origine stockee dans x, y, z, w.
	//	la transformation TRS est appliquee a ces valeurs d'origine de facon cumulative via le vecteur defini juste avant.
	//	Les valeurs transformees sont stockee dans cx, cy, cz, cw, et pretes a envoyer au dessin plot_bresenham()
	//	
	//	mon probeme reside dans trs_compute() et trs_apply()
	//
	//	les dossiers ./fdf/trs et ./fdf/matrix contiennent les fonctions en jeu
	//
	
	for (double angle = 0; angle <= 90; angle += 1)
	{
		vector_configure(fdf->trs->vec, (int [3]) {10, 0, 0}, TRANSLATE);
 		trs_compute(fdf->trs);
		mlx_clear_window(fdf->mlx->mlx, fdf->mlx->win);
		y = 0;
		while (point[y])
		{
			x = 0;
			while (point[y][x])
			{							
				trs_apply(point[y][x], fdf->trs);
				if (point[y][x + 1])
				{
					trs_apply(point[y][x + 1], fdf->trs);
					plot_bresenham(fdf->mlx, point[y][x], point[y][x + 1]);
				}
				if (point[y + 1] && point[y + 1][x])
				{
					trs_apply(point[y + 1][x], fdf->trs);
					plot_bresenham(fdf->mlx, point[y][x], point[y + 1][x]);
				}
				x++;
			}
			y++;
		}
	}
	
  	mlx_hook(fdf->mlx->win, KeyPress, KeyPressMask, key_hook, fdf->mlx);
	
	mlx_loop(fdf->mlx->mlx);
}

int	main(int argc, char **argv)
{
	t_fdf		fdf;
	
	fdf = fdf_init("./4 dots.fdf", "Fdf");

	mlx_display(fdf);

	return (0);
}
