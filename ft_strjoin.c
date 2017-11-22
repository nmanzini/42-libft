/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:50:15 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/22 17:20:00 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *dest;
	char *out;

	if (s1 && s2)
	{
		dest = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (dest)
		{
			out = dest;
			while (*s1 != 0)
				*dest++ = *s1++;
			while (*s2 != 0)
				*dest++ = *s2++;
			return (out);
		}
		else
		{
			return (NULL);
		}
	}
	else
		return (NULL);
}
