/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:26:27 by cgajean           #+#    #+#             */
/*   Updated: 2025/06/28 19:05:51 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

//	prevoir une facon de differencier lorsque je sors alors qu'il n'y a pas d'erreur, par exemple map invalide

int	fdf_exit(char *errmsg, int errnum)
{
	perror(errmsg);
	exit(errnum);
}
