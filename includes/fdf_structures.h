/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_structures.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 15:04:03 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/08 21:50:09 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_STRUCTURES_H
# define FDF_STRUCTURES_H

# include "fdf.h"

struct s_fdf
{
	t_mlx		mlx;
	t_map		map;
	t_trs		trs;
};

#endif