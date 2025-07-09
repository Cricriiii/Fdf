/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enum.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 14:31:26 by cgajean           #+#    #+#             */
/*   Updated: 2025/07/07 12:01:33 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENUM_H
# define ENUM_H

enum	e_malloc_status
{
	ARG_ERROR = -1,
	MALLOC_OK = 0,
	MALLOC_FAIL = 1,
};

enum	e_access_status
{
	ACCESS_FAIL = -1,
	ACCESS_OK = 0,
};

enum	e_open_status
{
	OPEN_FAIL = -1,
	OPEN_OK = 0,
};

enum e_exit_code
{
	R_FAIL = 1,
	W_FAIL = 1,
	X_FAIL = 126,
	F_FAIL = 127,
};

enum e_pipe_status
{
	PIPE_FAIL = -1,
	PIPE_OK = 0,
};

#endif