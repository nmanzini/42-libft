/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:09:49 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/20 22:40:52 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	char *final;

	final = dest;
	while (*src != 0 && len > 0)
	{
		*dest++ = *src++;
		len--;
	}
	while (len > 0)
	{
		*dest++ = 0;
		len--;
	}
	return (final);
}
