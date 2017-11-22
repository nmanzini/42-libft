/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:27:19 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/21 01:22:26 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *sone;
	unsigned char *stwo;

	sone = (unsigned char*)s1;
	stwo = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (*sone == *stwo & n-- > 0)
	{
		sone++;
		stwo++;
		if (n == 0)
			return (0);
	}
	if (*sone != *stwo)
	{
		return (*sone - *stwo);
	}
	return (0);
}
