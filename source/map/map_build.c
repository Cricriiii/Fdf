/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_build.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:20:45 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 11:39:28 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	line_populate(t_map map, char **splitted_data, int y_value)
{
	t_point	new_point;
	int		x;

	x = 0;
	if (splitted_data)
	{
		while (splitted_data[x])
		{
			new_point = ft_calloc(1, sizeof(struct s_point));
			new_point->x = x;
			new_point->y = y_value;
			new_point->z = ft_atoi(splitted_data[x]);
			new_point->w = 1;
			map->lines[y_value][x++] = new_point;
		}
	}
}

static void	line_create(t_map map, char *data, int y_value)
{
	char	**splitted_data;
	char	**data_ptr;
	int		pcount;

	splitted_data = ft_split(data, ' ');
	if (splitted_data)
	{
		data_ptr = splitted_data;
		pcount = points_count(data_ptr);
		map->width = pcount;
		map->lines[y_value] = ft_calloc(pcount + 1, sizeof(t_point *));
		if (!map->lines[y_value])
			return (ft_split_free(data_ptr));
		map->lines[y_value][pcount] = NULL;
		line_populate(map, data_ptr++, y_value++);
	}
	return (ft_split_free(splitted_data));
}

void	map_build(t_map map, t_data data_lines)
{
	char	*line;
	int		y;

	y = 0;
	while (true)
	{
		if (!data_lines)
			break ;
		line = ft_strtrim(data_lines->content, "\n");
		line_create(map, line, y++);
		free(line);
		data_lines = data_lines->next;
	}
/* 	if (!map_size(map))
		fdf_exit("Invalid map", EXIT_FAILURE); */
}
