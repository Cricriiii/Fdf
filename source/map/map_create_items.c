/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_create_items.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 19:08:31 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/04 11:27:31 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/* t_point	point_create(int x, int y, int z, int w)
{
	t_point	point;

	point = ft_calloc(1, sizeof(struct s_point));
	if (point)
	{
		point->x = x;
		point->y = y;
		point->z = z;
		point->w = 1;
	}
	return (point);
}

void	point_add(t_line *line, t_point newpoint)
{
	t_point	ptr;
	
	if (!line || !newpoint)
		return ;
	if ((*line)->points == NULL)
		(*line)->points = newpoint;
	else
	{
		ptr = (*line)->points;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = newpoint;
	}
}

t_line	line_create(void)
{
	t_line	line;

	line = ft_calloc(1, sizeof(struct s_line));
	if (line)
	{
		line->points = NULL;
		line->next = NULL;
	}
	return (line);
}

void line_add(t_map *map, t_line newline)
{
	t_line	ptr;
	
	if (!map || !newline)
		return ;
	if ((*map)->lines == NULL)
		(*map)->lines = newline;
	else
	{
		ptr = (*map)->lines;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = newline;
	}
} */
