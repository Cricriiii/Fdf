/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_misc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 19:09:02 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 11:25:55 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	map_print(t_map map)
{
	t_point	**line;
	t_point	*point;

	line = map->lines;
	while (*line)
	{			
		point = *line;
		while (*point)
		{
			printf("%d ", (*point)->z);
			point++;
		}
		line++;
		printf("\n");
	}
}
