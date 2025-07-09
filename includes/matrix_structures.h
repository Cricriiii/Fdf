/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_structures.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:48:10 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 11:49:00 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_STRUCTURES_H
# define MATRIX_STRUCTURES_H

# include "fdf.h"

enum e_rotation
{
	RX = 1,
	RY = 2,
	RZ = 4
};

struct s_mat4x4
{
	double	mat[4][4];
};


#endif