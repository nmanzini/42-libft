/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 18:57:17 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/20 23:54:31 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	i = 0;
	if (*needle == 0)
		return ((char*)haystack);
	while (haystack[i] != 0)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] != 0)
			j++;
		if (j == ft_strlen(needle))
			return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}
