/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trs_compute.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:28:27 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/08 22:12:26 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	s_compute(t_trs trs)
{
	trs->s->mat[0][0] += trs->vec->s.x;
	trs->s->mat[1][1] += trs->vec->s.y;
	trs->s->mat[2][2] += trs->vec->s.z;
	trs->s->mat[3][3] += 1;
}

static void	r_compute(t_trs trs)
{
	t_mat4x4	rx;
	t_mat4x4	ry;
	t_mat4x4	rz;

	rx = identity();
	ry = identity();
	rz = identity();

	rotate_x(trs, rx);
	rotate_y(trs, ry);
	rotate_z(trs, rz);

	mat_copy(trs->r, trs->identity);
	mat_multiply(trs->r, rz);
	mat_multiply(trs->r, ry);
	mat_multiply(trs->r, rx);

	free(rx);
	free(ry);
	free(rz);
}

static void	t_compute(t_trs trs)
{
	trs->t->mat[0][0] += trs->vec->t.x;
	trs->t->mat[1][1] += trs->vec->t.y;
	trs->t->mat[2][2] += trs->vec->t.z;
	trs->t->mat[3][3] = 1;
}

void	trs_compute(t_trs trs)
{
	s_compute(trs);
	r_compute(trs);
	t_compute(trs);
	mat_copy(trs->trs, trs->identity);
	mat_multiply(trs->trs, trs->t);
	mat_multiply(trs->trs, trs->r);
	mat_multiply(trs->trs, trs->s);
}

/* void	trs_compute(t_trs trs)
{
	t_mat4x4		tmp;

	trs->trs = trs->identity;
	tmp = mat_multiply(trs->trs, trs->to_origin);
	// free(trs->trs);
	trs->trs = tmp;
	tmp = mat_multiply(trs->trs, trs->s);
	// free(trs->trs);
	trs->trs = tmp;
	tmp = mat_multiply(trs->trs, trs->r);
	// free(trs->trs);
	trs->trs = tmp;
	tmp = mat_multiply(trs->trs, trs->t);
	free(trs->trs);
	// trs->trs = tmp;
	tmp = mat_multiply(trs->trs, trs->to_center);
	free(trs->trs);
	// trs->trs = tmp;
} */

/* t_mat4x4	trs_compute(t_mat4x4 t, t_mat4x4 r, t_mat4x4 s)
{
	t_mat4x4		trs;
	t_mat4x4		tmp;

	trs = identity();
	tmp = mat_multiply(trs, center_to_origin());
	free(trs); 
	trs = tmp;
	tmp = mat_multiply(s, trs);
	free(trs); 
	trs = tmp;
	tmp = mat_multiply(r, trs);
	free(trs); 
	trs = tmp;
	tmp = mat_multiply(t, trs);
	free(trs); 
	trs = tmp;
	tmp = mat_multiply(trs, center_back());
	free(trs); 
	trs = tmp;
	return (trs);
} */
