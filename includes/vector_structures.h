/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_structures.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:51:33 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/08 20:43:15 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_STRUCTURES_H
# define VECTOR_STRUCTURES_H

#include "fdf.h"

enum configure_mode
{
	ROTATE,
	TRANSLATE,
	SCALE
};

struct s_xyz
{
	double	x;
	double	y;
	double	z;
	double	w;
};

struct s_vector
{
	struct s_xyz	t;
	struct s_xyz	r;
	struct s_xyz	s;
};

#endif