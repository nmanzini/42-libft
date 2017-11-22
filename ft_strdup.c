/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:46:52 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/20 18:53:20 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *copy;

	copy = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (copy)
		ft_strcpy(copy, s1);
	return (copy);
}
