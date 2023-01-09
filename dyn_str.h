/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_str.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:07:57 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/09 16:15:55 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYN_STR_H
# define DYN_STR_H

#include <stddef.h>
#include <stdbool.h>

typedef	struct s_dyn_str
{
	size_t	len;
	size_t	capacity;
	char	*str;
}			t_dyn_str;

#endif
