/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trs_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:44:03 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/08 20:42:51 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static bool	trs_init_fail(t_trs trs)
{
	if (!trs)
		return (true);
	else if (!trs->identity || !trs->isometric)
		return (true);
	else if (!trs->to_center || !trs->to_origin)
		return (true);
	else if (!trs->t || !trs->s || !trs->r || !trs->trs)
		return (true);
	else
		return (false);
}

t_trs	trs_init(void)
{
	t_trs	trs;

	trs = ft_calloc(1, sizeof(struct s_trs));
	if (trs)
	{
		trs->identity = identity();
		trs->to_origin = center_to_origin();
		trs->to_center = center_back();
		trs->isometric = isometric();
		trs->t = identity();
		trs->r = identity();
		trs->s = identity();
		trs->trs = identity();
		trs->vec = ft_calloc(1, sizeof(struct s_vector));	// a verifier dans init_fail
	}
	if (trs_init_fail(trs))
		trs_destroy(trs);	// creer une sequence de destruction plus complete debouchant sur un exit().
	return (trs);
}
