/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_configure.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:04:10 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 19:35:10 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	vector_configure(t_vector v, int xyz[3], int mode)
{
	if (mode == ROTATE)
	{
		v->r.x += xyz[0];
		v->r.y += xyz[1];
		v->r.z += xyz[2];	
	}
	else if (mode == TRANSLATE)
	{
		v->t.x += xyz[0];
		v->t.y += xyz[1];
		v->t.z += xyz[2];	
	}
	else if (mode == SCALE)
	{
		v->s.x += xyz[0];
		v->s.y += xyz[1];
		v->s.z += xyz[2];	
	}
}
