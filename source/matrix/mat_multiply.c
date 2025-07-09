/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_multiply.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:26:43 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/08 11:14:02 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	mat_multiply(t_mat4x4 m1, t_mat4x4 m2)
{
	t_mat4x4	mul;
	int			i;
	int			j;
	int			k;

	if (!m1)
		return ;
	if (!m2)
		return ;
	mul = ft_calloc(1, sizeof(struct s_mat4x4));
	if (mul)
	{
		i = -1;
		while (++i < 4)
		{
			j = -1;
			while (++j < 4)
			{
				k = -1;
				while (++k < 4)
					mul->mat[i][j] += m1->mat[i][k] * m2->mat[k][j];
			}
		}
	}
	mat_copy(m1, mul);
	return ((void) free(mul));
}
