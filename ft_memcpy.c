/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:23:15 by jcaron            #+#    #+#             */
/*   Updated: 2023/01/09 17:18:29 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_char;
	const unsigned char	*src_char;
	unsigned long		*dest_long;
	const unsigned long	*src_long;

	if (!dest || !src)
		return (NULL);
	if (dest == src)
		return (dest);
	dest_char = (unsigned char *)dest;
	src_char = (const unsigned char *)src;
	while (n % sizeof(unsigned long))
	{
		*(dest_char++) = *(src_char++);
		n--;
	}
	dest_long = (unsigned long *)dest_char;
	src_long = (const unsigned long *)src_char;
	while (n)
	{
		*(dest_long++) = *(src_long++);
		n -= sizeof(unsigned long);
	}
	dest_char = (unsigned char *)dest_long;
	src_char = (const unsigned char *)src_long;
	while (n)
	{
		*(dest_char++) = *(src_char++);
		n--;
	}
	return (dest);
}
