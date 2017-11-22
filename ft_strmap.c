/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:10:31 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/20 23:35:46 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *out_m;
	char *out_o;

	if (f && s)
	{
		out_o = ft_strnew(ft_strlen(s));
		if (!out_o)
			return (NULL);
		out_m = out_o;
		while (*s != 0)
		{
			*out_m++ = f(*s++);
		}
		return (out_o);
	}
	return (NULL);
}
