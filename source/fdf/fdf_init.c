/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 15:15:22 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/08 21:49:55 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_fdf	fdf_init(char *filepath, char *main_title)
{
	t_fdf		fdf;
	
	fdf = ft_calloc(1, sizeof(struct s_fdf));
	if (fdf)
	{
		fdf->mlx = mlx_display_init(main_title);
		fdf->map = map_init(filepath);
		fdf->trs = trs_init();
		vector_init(fdf->trs->vec);
	}
	return (fdf);
}
