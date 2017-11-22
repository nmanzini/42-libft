/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 18:34:59 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/20 18:55:00 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int pos;

	pos = ft_strlen(s);
	if (s)
	{
		while (s[pos] != (char)c && pos >= 0)
			pos--;
		if (s[pos] == (char)c)
			return ((char*)&s[pos]);
		else
			return (NULL);
	}
	return (NULL);
}
