/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_center_to_origin.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:31:58 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 19:30:12 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_mat4x4	center_to_origin(void)
{
	t_mat4x4	origin;

	origin = ft_calloc(1, sizeof(struct s_mat4x4));
	if (origin)
	{
		origin->mat[0][3] = -WIDTH / 2;
		origin->mat[1][3] = -HEIGHT / 2;
		origin->mat[0][0] = 1;
		origin->mat[1][1] = 1;
		origin->mat[2][2] = 1;
		origin->mat[3][3] = 1;
	}
	return (origin);
}
