/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 19:11:31 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/04 12:15:32 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	points_count(char **data)
{
	char	**ptr;
	
	if (data)
	{
		ptr = data;
		while (*ptr)
			ptr++;
		return (ptr - data);
	}
	else
		return (0);
}
