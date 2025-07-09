/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_structures.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:12:31 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 11:59:59 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_STRUCTURES_H
# define MAP_STRUCTURES_H

# include "fdf.h"

struct s_map
{
	int		width;
	int		height;
	t_point	**lines;
};

struct s_point
{
	int		x;
	int		y;
	int		z;
	int		w;
	int		cx;
	int		cy;
	int		cz;
	int		cw;
};

#endif