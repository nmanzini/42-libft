/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 10:20:42 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/20 23:38:56 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int index;

	index = 0;
	if (s != NULL && f != NULL)
	{
		while (s[index] != 0)
		{
			f(index, &s[index]);
			index++;
		}
	}
}
