/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:07:36 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/21 01:06:10 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;

	while (n-- > 0)
	{
		str = (unsigned char*)s;
		if (*str == (unsigned char)c)
		{
			return (str);
		}
		s++;
	}
	return (NULL);
}
