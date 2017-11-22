/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:47:37 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/21 16:05:05 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
					int c, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	a = (unsigned char*)src;
	b = (unsigned char*)dst;
	while (n-- > 0)
	{
		*b = *a;
		if (*a == (unsigned char)c)
			return ((void*)b + 1);
		a++;
		b++;
	}
	return (NULL);
}
