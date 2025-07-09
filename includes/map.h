/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 12:27:26 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 14:57:44 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_MAP_H
# define FDF_MAP_H

# include "fdf.h"

t_data	map_openfile(char *filepath);
t_map	map_init(char *filepath);
void	map_build(t_map map, t_data data_lines);
int		points_count(char **data);

void	map_print(t_map map);
void	map_destroy(t_map map);

#endif
