/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_scale.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:40:48 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 15:43:58 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	scale(t_trs trs, t_vector v)
{
	if (trs->s)
	{
		trs->s->mat[0][0] = v->s.x;
		trs->s->mat[1][1] = v->s.y;
		trs->s->mat[2][2] = v->s.z;
		trs->s->mat[3][3] = 1;
	}
}

/* t_mat4x4	scale(t_vector v)
{
	t_mat4x4	scale;

	scale = calloc(1, sizeof(struct s_mat4x4));
	if (scale)
	{
		scale->mat[0][0] = v->s.x;
		scale->mat[1][1] = v->s.y;
		scale->mat[2][2] = v->s.z;
		scale->mat[3][3] = 1;
	}
	return (scale);
} */
