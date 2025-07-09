/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 19:19:51 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/04 11:27:24 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/* static void	points_destroy(t_point points)
{
	t_point	temp;

	while (points)
	{
		temp = points->next;
		free(points);
		points = temp;
	}
}

static void	lines_destroy(t_line line)
{
	t_line	temp;
	
	while (line)
	{
		points_destroy(line->points);
		temp = line->next;
		free(line);
		line = temp;
	}
}

void	map_destroy(t_map map)
{
	if (map)
		lines_destroy(map->lines);
	free (map);
}
 */