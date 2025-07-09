/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:47:21 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/08 21:11:59 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

# include "fdf.h"

void		mat_multiply(t_mat4x4 m1, t_mat4x4 m2);
void		mat_copy(t_mat4x4 dest, t_mat4x4 src);

t_mat4x4	identity(void);
t_mat4x4	center_back(void);
t_mat4x4	center_to_origin(void);
t_mat4x4	isometric(void);

void		scale(t_trs trs, t_vector v);
void		rotate(t_trs trs, t_vector v, int axis);
void		translate(t_trs trs, t_vector v);

void		rotate_x(t_trs trs, t_mat4x4 rx);
void		rotate_y(t_trs trs, t_mat4x4 ry);
void		rotate_z(t_trs trs, t_mat4x4 rz);

/* t_mat4x4	rotate(t_vector v, int axis);
t_mat4x4	scale(t_vector v);
t_mat4x4	translate(t_vector v); */

#endif
