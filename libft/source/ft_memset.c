/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:29:04 by cgajean           #+#    #+#             */
/*   Updated: 2025/05/02 15:11:26 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	t_byte			*mem;

	if (s == NULL)
		return (NULL);
	mem = (t_byte *) s;
	while (n-- > 0)
		*mem++ = c;
	return (s);
}
