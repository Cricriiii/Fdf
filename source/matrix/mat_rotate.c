/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:28:02 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/08 21:11:47 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	rotate_x(t_trs trs, t_mat4x4 rx)
{
	double angle = ft_toradian(trs->vec->r.x);
	
	mat_copy(rx, trs->identity);
	rx->mat[1][1] = cos(angle);
	rx->mat[1][2] = -sin(angle);
	rx->mat[2][1] = sin(angle);
	rx->mat[2][2] = cos(angle);
}

void	rotate_y(t_trs trs, t_mat4x4 ry)
{
	double angle = ft_toradian(trs->vec->r.y);

	mat_copy(ry, trs->identity);
	ry->mat[0][0] = cos(angle);
	ry->mat[0][2] = sin(angle);
	ry->mat[2][0] = -sin(angle);
	ry->mat[2][2] = cos(angle);
}

void	rotate_z(t_trs trs, t_mat4x4 rz)
{
	double angle = ft_toradian(trs->vec->r.z);

	mat_copy(rz, trs->identity);
	rz->mat[0][0] = cos(angle);
	rz->mat[0][1] = -sin(angle);
	rz->mat[1][0] = sin(angle);
	rz->mat[1][1] = cos(angle);
}

/* static void	rotate_x(t_trs trs, t_vector v)
{
	if (trs->r)
	{
		trs->r->mat[0][0] = 1;
		trs->r->mat[1][1] = cos(ft_toradian(v->r.x));
		trs->r->mat[1][2] = -sin(ft_toradian(v->r.x));
		trs->r->mat[2][1] = sin(ft_toradian(v->r.x));
		trs->r->mat[2][2] = cos(ft_toradian(v->r.x));
		trs->r->mat[3][3] = 1;
	}
}

static void	rotate_y(t_trs trs, t_vector v)
{
	if (trs->r)
	{
		trs->r->mat[0][0] = cos(ft_toradian(v->r.y));
		trs->r->mat[0][2] = sin(ft_toradian(v->r.y));
		trs->r->mat[1][1] = 1;
		trs->r->mat[2][0] = -sin(ft_toradian(v->r.y));
	if (trs->r)
	{
		trs->r->mat[0][0] = cos(ft_toradian(v->r.z));
		trs->r->mat[0][1] = -sin(ft_toradian(v->r.z));
		trs->r->mat[1][0] = sin(ft_toradian(v->r.z));
		trs->r->mat[1][1] = cos(ft_toradian(v->r.z));
		trs->r->mat[2][2] = 1;
		trs->r->mat[3][3] = 1;
	}
}

void	rotate(t_trs trs, t_vector v, int axis)
{
	if (axis & RX)
		rotate_x(trs, v);
	if (axis & RY)
		rotate_y(trs, v);
	if (axis & RZ)
		rotate_z(trs, v);
}		trs->r->mat[2][2] = cos(ft_toradian(v->r.y));
		trs->r->mat[3][3] = 1;
	}
}

static void	rotate_z(t_trs trs, t_vector v)
{
	if (trs->r)
	{
		trs->r->mat[0][0] = cos(ft_toradian(v->r.z));
		trs->r->mat[0][1] = -sin(ft_toradian(v->r.z));
		trs->r->mat[1][0] = sin(ft_toradian(v->r.z));
		trs->r->mat[1][1] = cos(ft_toradian(v->r.z));
		trs->r->mat[2][2] = 1;
		trs->r->mat[3][3] = 1;
	}
}

void	rotate(t_trs trs, t_vector v, int axis)
{
	if (axis & RX)
		rotate_x(trs, v);
	if (axis & RY)
		rotate_y(trs, v);
	if (axis & RZ)
		rotate_z(trs, v);
} */

/* static t_mat4x4	rotate_x(t_vector v)
{
	t_mat4x4	rx;

	rx = calloc(1, sizeof(struct s_mat4x4));
	if (rx)
	{
		rx->mat[0][0] = 1;
		rx->mat[1][1] = cos(ft_toradian(v->r.x));
		rx->mat[1][2] = -sin(ft_toradian(v->r.x));
		rx->mat[2][1] = sin(ft_toradian(v->r.x));
		rx->mat[2][2] = cos(ft_toradian(v->r.x));
		rx->mat[3][3] = 1;
	}
	return (rx);
}

static t_mat4x4	rotate_y(t_vector v)
{
	t_mat4x4	ry;

	ry = calloc(1, sizeof(struct s_mat4x4));
	if (ry)
	{
		ry->mat[0][0] = cos(ft_toradian(v->r.y));
		ry->mat[0][2] = sin(ft_toradian(v->r.y));
		ry->mat[1][1] = 1;
		ry->mat[2][0] = -sin(ft_toradian(v->r.y));
		ry->mat[2][2] = cos(ft_toradian(v->r.y));
		ry->mat[3][3] = 1;
	}
	return (ry);
}

static t_mat4x4	rotate_z(t_vector v)
{
	t_mat4x4	rz;

	rz = calloc(1, sizeof(struct s_mat4x4));
	if (rz)
	{
		rz->mat[0][0] = cos(ft_toradian(v->r.z));
		rz->mat[0][1] = -sin(ft_toradian(v->r.z));
		rz->mat[1][0] = sin(ft_toradian(v->r.z));
		rz->mat[1][1] = cos(ft_toradian(v->r.z));
		rz->mat[2][2] = 1;
		rz->mat[3][3] = 1;
	}
	return (rz);
}

t_mat4x4	rotate(t_vector v, int axis)
{
	t_mat4x4	rotation;
	t_mat4x4	temp;

	rotation = identity();
	if (axis & RX)
	{
		temp = mat_multiply(rotation, rotate_x(v));
		free(rotation);
		rotation = temp;
	}
	if (axis & RY)
	{
		temp = mat_multiply(rotation, rotate_y(v));
		free(rotation);
		rotation = temp;
	}
	if (axis & RZ)
	{
		temp = mat_multiply(rotation, rotate_z(v));
		free(rotation);
		rotation = temp;
	}
	return (rotation);
} */
