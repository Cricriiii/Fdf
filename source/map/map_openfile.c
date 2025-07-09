/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_openfile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:29:21 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 11:38:13 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static t_data	map_data_extract(int map_fd)
{
	t_data	data_lines;
	t_data	data_ptr;
	t_list	*new;
	char	*data;

	data_lines = NULL;
	data_ptr = data_lines;
	while (true)
	{
		data = gets_next_line(map_fd);
		if (!data)
			return (close(map_fd), data_lines);
		new = ft_lstnew(data);
		if (!new)
		{
			;	// detruire liste
			fdf_exit("Malloc fail", EXIT_FAILURE);
		}
		ft_lstadd_back(&data_lines, new);
		if (data_lines)
			data_ptr = data_lines->next;
		else
			data_ptr = data_ptr->next;
	}
}

t_data	map_openfile(char *filepath)
{
	int		map_fd;
	t_data	data;

	map_fd = open(filepath, O_RDONLY);
	if (map_fd == OPEN_FAIL)
		fdf_exit("Map open error", errno);
	data = map_data_extract(map_fd);
	if (data == NULL)
		fdf_exit("Map open error", EXIT_FAILURE);	
	return (data);
}
