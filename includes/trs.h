/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trs.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:21:40 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/08 12:37:10 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRS_H
# define TRS_H

# include "fdf.h"

t_trs	trs_init(void);
void	trs_destroy(t_trs trs);
void	trs_compute(t_trs trs);
// void	trs_apply(t_point p, t_mat4x4 trs);
void	trs_apply(t_point p, t_trs trs);

// void	trs_apply(t_point p, t_mat4x4 trs);

#endif