/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:11 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 11:37:50 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_map	map_init(char *filepath)
{
	t_map	map;
	t_data	data;
	int		line_nb;

	data = map_openfile(filepath);
	
	map = ft_calloc(1, sizeof(struct s_map));
	if (map)
	{
		line_nb = ft_lstsize(data);
		map->height = line_nb;
		map->lines = ft_calloc(line_nb + 1, sizeof(t_point **));
		map->lines[line_nb] = NULL;
		map_build(map, data);
		// data_lines a free()
	}
	else
	{
		// data_lines a free()
		fdf_exit("Malloc fail", errno);
	}
	return (map);
}
