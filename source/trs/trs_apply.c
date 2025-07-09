/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trs_apply.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:29:05 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/08 23:14:06 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	trs_apply(t_point p, t_trs trs)
{
	double	tx;
	double	ty;
	double	tz;

	t_mat4x4	mtotal = ft_calloc(1, sizeof(struct s_mat4x4));
	mat_copy(mtotal, trs->identity);

	mat_multiply(mtotal, trs->to_center);
	mat_multiply(mtotal, trs->trs);
	mat_multiply(mtotal, trs->to_origin);
	
	tx = p->cx * mtotal->mat[0][0] + p->cy * mtotal->mat[0][1] + p->cz * mtotal->mat[0][2] + p->cw * mtotal->mat[0][3];
	ty = p->cx * mtotal->mat[1][0] + p->cy * mtotal->mat[1][1] + p->cz * mtotal->mat[1][2] + p->cw * mtotal->mat[1][3];
	tz = p->cx * mtotal->mat[2][0] + p->cy * mtotal->mat[2][1] + p->cz * mtotal->mat[2][2] + p->cw * mtotal->mat[2][3];
	// tw = p->cx * mtotal->mat[3][0] + p->cy * mtotal->mat[3][1] + p->cz * mtotal->mat[3][2] + p->cw * mtotal->mat[3][3];
	
/* 	tx = p->cx * trs->trs->mat[0][0] + p->cy * trs->trs->mat[0][1] + p->cz * trs->trs->mat[0][2] + p->cw * trs->trs->mat[0][3];
	ty = p->cx * trs->trs->mat[1][0] + p->cy * trs->trs->mat[1][1] + p->cz * trs->trs->mat[1][2] + p->cw * trs->trs->mat[1][3];
	tz = p->cx * trs->trs->mat[2][0] + p->cy * trs->trs->mat[2][1] + p->cz * trs->trs->mat[2][2] + p->cw * trs->trs->mat[2][3];
	// tw = p->cx * trs->trs->mat[3][0] + p->cy * trs->trs->mat[3][1] + p->cz * trs->trs->mat[3][2] + p->cw * trs->trs->mat[3][3]; */
	
	p->cx = round(tx);
	p->cy = round(ty);
	p->cz = round(tz);

/* 	p->cx += trs->to_center->mat[0][3];
	p->cy += trs->to_center->mat[1][3];	
	p->cy += trs->to_center->mat[2][3];	 */
}


/* void	trs_apply(t_point p, t_mat4x4 trs)
{
	double	tx;
	double	ty;
	double	tz;
	double	tw;
	
	tx = p->cx * trs->mat[0][0] + p->cy * trs->mat[0][1] + p->cz * trs->mat[0][2] + p->cw * trs->mat[0][3];
	ty = p->cx * trs->mat[1][0] + p->cy * trs->mat[1][1] + p->cz * trs->mat[1][2] + p->cw * trs->mat[1][3];
	tz = p->cx * trs->mat[2][0] + p->cy * trs->mat[2][1] + p->cz * trs->mat[2][2] + p->cw * trs->mat[2][3];
	tw = p->cx * trs->mat[3][0] + p->cy * trs->mat[3][1] + p->cz * trs->mat[3][2] + p->cw * trs->mat[3][3];
	
	p->cx = tx;
	p->cy = ty;
	p->cz = tz;
	p->cw = tw;
}*/

// void	trs_apply(t_point p, t_mat4x4 trs)
// {
// 	p->cx = p->x * trs->mat[0][0] + p->y * trs->mat[0][1] + p->z * trs->mat[0][2] + p->w * trs->mat[0][3];
// 	p->cy = p->x * trs->mat[1][0] + p->y * trs->mat[1][1] + p->z * trs->mat[1][2] + p->w * trs->mat[1][3];
// 	p->cz = p->x * trs->mat[2][0] + p->y * trs->mat[2][1] + p->z * trs->mat[2][2] + p->w * trs->mat[2][3];
// 	p->cw = p->x * trs->mat[3][0] + p->y * trs->mat[3][1] + p->z * trs->mat[3][2] + p->w * trs->mat[3][3];
// }

