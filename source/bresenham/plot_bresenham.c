/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plot_bresenham.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:14:39 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 17:00:02 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

#define col(val) ((val) << 24 | (val) << 16 | (val) << 8 | (val))
#define WHITE col(255)

void	plot_bresenham(t_mlx mlx, t_point p1, t_point p2)
{
	int	dx = p2->cx - p1->cx;
	int	dy = p2->cy - p1->cy;
	int	e;
	int	x = p1->cx;
	int	y = p1->cy;
	
	if (dx)
	{
		if (dx > 0)
		{
			if (dy)
			{
				if (dy > 0)
				{
					//	vecteur oblique dans le 1er quadrant
					if (dx >= dy)
					{
						//	vecteur diagonal ou oblique proche de l'horizontale dans le 1er octant
						dx = (e = dx) * 2;
						dy *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (++x == p2->cx)
								break ;
							e -= dy;
							if (e < 0)
							{
								y++;
								e += dx;
							}
						}
					}
					else	//	dy < 0
					{
						//	vecteur oblique proche de la verticale, dans le 2nd octant
						dy = (e = dy) * 2;
						dx *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (++y == p2->cy)
								break;
							e -= dx;
							if (e < 0)
							{
								x++;
								e += dy;
							}
						}
					}
				}
				else	//	dy < 0 && dx > 0
				{
					//	vecteur oblique dans le 4e quadrant
					if (dx >= -dy)
					{
						//	vecteur diagonal ou oblique proche de l’horizontale, dans le 8e octant
						dx = (e = dx) * 2;
						dy *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (++x == p2->cx)
								break ;
							e += dy;
							if (e < 0)
							{
								y--;
								e += dx;
							}
						}
					}
					else
					{
						// vecteur oblique proche de la verticale, dans le 7e octant
						dy = (e = dy) * 2;
						dx *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (--y == p2->cy)
								break;
							e += dx;
							if (e > 0)
							{
								x++;
								e += dy;
							}
						}
					}
				}
			}
			else	//	dy == 0 && dx > 0
			//	vecteur horizontal vers la droite
			{
				while (x != p2->cx)
				{
					mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
					x++;
				}
			}
		}
		else	//	dx < 0
		{
			if (dy)
			{				
				if (dy > 0)		//	vecteur oblique dans le 2d quadrant
				{
					if (-dx >= dy)
					{
						// vecteur diagonal ou oblique proche de l’horizontale, dans le 4e octant
						dx = (e = dx) * 2;
						dy *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (--x == p2->cx)
								break;
							e += dy;
							if (e >= 0)
							{
								y++;
								e += dx;
							}
						}
					}
					else
					{
						// vecteur oblique proche de la verticale, dans le 3e octant
						dy = (e = dy) * 2;
						dx *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (++y == p2->cy)
								break ;
							e += dx;
							if (e <= 0)
							{
								x--;
								e += dy;
							}
						}
					}
				}
				else	//	dy < 0 && dx < 0
				{
					// vecteur oblique dans le 3e quadrant
					if (dx <= dy)
					{
						// vecteur diagonal ou oblique proche de l’horizontale, dans le 5e octant
						dx = (e = dx) * 2;
						dy *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (--x == p2->cx)
								break;
							e -= dy;
							if (e >= 0)
							{
								y--;
								e += dx;
							}
						}
					}
					else	//	vecteur oblique proche de la verticale, dans le 6e octant
					{
						dy = (e = dy) * 2;
						dx *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (--y == p2->cy)
								break ;
							e -= dx;
							if (e >= 0)
							{
								x--;
								e += dy;
							}						
						}
					}					
				}
			}
			else	// dy == 0 && dx < 0
			{
				while (x != p2->cx)
				{
					mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
					x--;
				}					
			}
		}
	}
	else	//	dx == 0
	{
		if (dy)
		{
			if (dy > 0)
			{
				//	vecteur vertical croissant
				while (y != p2->cy)
				{
					mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
					y++;
				}
			}
			else	//	dy < 0
			{
				//	vecteur vertical decroissant
				while (y != p2->cy)
				{
					mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
					y--;
				}
			}
		}
	}
}

/* void	plot_bresenham(t_mlx mlx, t_point p1, t_point p2)
{
	int	dx = p2->x - p1->x;
	int	dy = p2->y - p1->y;
	int	e;
	int	x = p1->x;
	int	y = p1->y;
	
	if (dx)
	{
		if (dx > 0)
		{
			if (dy)
			{
				if (dy > 0)
				{
					//	vecteur oblique dans le 1er quadrant
					if (dx >= dy)
					{
						//	vecteur diagonal ou oblique proche de l'horizontale dans le 1er octant
						dx = (e = dx) * 2;
						dy *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (++x == p2->x)
								break ;
							e -= dy;
							if (e < 0)
							{
								y++;
								e += dx;
							}
						}
					}
					else	//	dy < 0
					{
						//	vecteur oblique proche de la verticale, dans le 2nd octant
						dy = (e = dy) * 2;
						dx *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (++y == p2->y)
								break;
							e -= dx;
							if (e < 0)
							{
								x++;
								e += dy;
							}
						}
					}
				}
				else	//	dy < 0 && dx > 0
				{
					//	vecteur oblique dans le 4e quadrant
					if (dx >= -dy)
					{
						//	vecteur diagonal ou oblique proche de l’horizontale, dans le 8e octant
						dx = (e = dx) * 2;
						dy *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (++x == p2->x)
								break ;
							e += dy;
							if (e < 0)
							{
								y--;
								e += dx;
							}
						}
					}
					else
					{
						// vecteur oblique proche de la verticale, dans le 7e octant
						dy = (e = dy) * 2;
						dx *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (--y == p2->y)
								break;
							e += dx;
							if (e > 0)
							{
								x++;
								e += dy;
							}
						}
					}
				}
			}
			else	//	dy == 0 && dx > 0
			//	vecteur horizontal vers la droite
			{
				while (x != p2->x)
				{
					mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
					x++;
				}
			}
		}
		else	//	dx < 0
		{
			if (dy)
			{				
				if (dy > 0)		//	vecteur oblique dans le 2d quadrant
				{
					if (-dx >= dy)
					{
						// vecteur diagonal ou oblique proche de l’horizontale, dans le 4e octant
						dx = (e = dx) * 2;
						dy *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (--x == p2->x)
								break;
							e += dy;
							if (e >= 0)
							{
								y++;
								e += dx;
							}
						}
					}
					else
					{
						// vecteur oblique proche de la verticale, dans le 3e octant
						dy = (e = dy) * 2;
						dx *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (++y == p2->y)
								break ;
							e += dx;
							if (e <= 0)
							{
								x--;
								e += dy;
							}
						}
					}
				}
				else	//	dy < 0 && dx < 0
				{
					// vecteur oblique dans le 3e quadrant
					if (dx <= dy)
					{
						// vecteur diagonal ou oblique proche de l’horizontale, dans le 5e octant
						dx = (e = dx) * 2;
						dy *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (--x == p2->x)
								break;
							e -= dy;
							if (e >= 0)
							{
								y--;
								e += dx;
							}
						}
					}
					else	//	vecteur oblique proche de la verticale, dans le 6e octant
					{
						dy = (e = dy) * 2;
						dx *= 2;
						while (1)
						{
							mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
							if (--y == p2->y)
								break ;
							e -= dx;
							if (e >= 0)
							{
								x--;
								e += dy;
							}						
						}
					}					
				}
			}
			else	// dy == 0 && dx < 0
			{
				while (x != p2->x)
				{
					mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
					x--;
				}					
			}
		}
	}
	else	//	dx == 0
	{
		if (dy)
		{
			if (dy > 0)
			{
				//	vecteur vertical croissant
				while (y != p2->y)
				{
					mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
					y++;
				}
			}
			else	//	dy < 0
			{
				//	vecteur vertical decroissant
				while (y != p2->y)
				{
					mlx_pixel_put(mlx->mlx, mlx->win, x, y, WHITE);
					y--;
				}
			}
		}
	}
} */
