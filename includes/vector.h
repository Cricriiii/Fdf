/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:50:24 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/08 20:44:51 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include "fdf.h"

void		vector_init(t_vector vector);
void		vector_destroy(t_vector vector);
void		vector_configure(t_vector v, int xyz[3], int mode);

#endif