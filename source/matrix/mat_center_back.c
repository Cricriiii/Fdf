/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_center_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:31:56 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 19:15:22 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_mat4x4	center_back(void)
{
	t_mat4x4	center;

	center = ft_calloc(1, sizeof(struct s_mat4x4));
	if (center)
	{
		center->mat[0][3] = WIDTH / 2;
		center->mat[1][3] = HEIGHT / 2;
		center->mat[0][0] = 1;
		center->mat[1][1] = 1;
		center->mat[2][2] = 1;
		center->mat[3][3] = 1;		
	}
	return (center);
}