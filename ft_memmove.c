/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:49:30 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/21 00:59:48 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *a;
	char *b;

	a = (char*)src;
	b = (char*)dst;
	if (a < b)
		while (len--)
		{
			b[len] = a[len];
		}
	else
		ft_memcpy(b, a, len);
	return (dst);
}
