/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 19:10:41 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/04 11:28:58 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/* bool	map_size(t_map map)
{
	t_line	line;
	int		x;
	
	map->width = points_count(map->lines->points);
	line = map->lines;
	while (line)
	{
		map->height++;
		if (map->width != points_count(line->points))
			return (false);
		line = line->next;
	}
	return (true);
}
 */