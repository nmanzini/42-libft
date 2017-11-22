/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:07:46 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/22 17:30:55 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int				beg;
	int				end;
	char			*string;
	char			*out;

	if (s == NULL)
		return (NULL);
	beg = 0;
	end = ft_strlen(s) - 1;
	while ((s[beg] == ' ' || s[beg] == '\n' || s[beg] == '\t') && (s[beg] != 0))
		beg++;
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t') && (s[end] != 0))
		end--;
	if (beg >= end)
		return (ft_strdup(""));
	string = ft_strnew(end - beg + 1);
	if (string)
	{
		out = string;
		while (s[beg] != 0 && beg <= end)
			*string++ = s[beg++];
		return (out);
	}
	else
		return (NULL);
}
