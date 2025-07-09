/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_translate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:40:33 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 16:37:27 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	translate(t_trs trs, t_vector v)
{
	if (trs->t)
	{
		trs->t->mat[0][0] = 1;
		trs->t->mat[0][3] = v->t.x;
		trs->t->mat[1][1] = 1;
		trs->t->mat[1][3] = v->t.y;
		trs->t->mat[2][2] = 1;
		trs->t->mat[2][3] = v->t.z;
		trs->t->mat[3][3] = 1;
	}
}

/* t_mat4x4	translate(t_vector v)
{
	t_mat4x4	trans;

	trans = calloc(1, sizeof(struct s_mat4x4));
	if (trans)
	{
		trans->mat[0][0] = 1;
		trans->mat[0][3] = v->t.x;
		trans->mat[1][1] = 1;
		trans->mat[1][3] = v->t.y;
		trans->mat[2][2] = 1;
		trans->mat[2][3] = v->t.z;
		trans->mat[3][3] = 1;
	}
	return (trans);
} */
