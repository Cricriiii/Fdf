/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trs_structures.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:21:55 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/08 20:41:50 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

struct s_trs
{
	t_mat4x4	isometric;
	t_mat4x4	identity;
	t_mat4x4	to_origin;
	t_mat4x4	to_center;
	t_mat4x4	t;
	t_mat4x4	r;
	t_mat4x4	s;
	t_mat4x4	trs;
	t_vector	vec;
	bool		dirty;
};
