/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trs_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:53:20 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 10:56:20 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	trs_destroy(t_trs trs)
{
	if (trs)
	{
		free(trs->identity);
		free(trs->isometric);
		free(trs->to_center);
		free(trs->to_origin);
		free(trs->r);
		free(trs->s);
		free(trs->t);
		free(trs->trs);
	}
	free(trs);
}
