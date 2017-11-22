/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 12:52:44 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/22 18:04:25 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	char endline;

	if (s)
	{
		endline = '\n';
		while (*s != 0)
		{
			write(1, s, 1);
			s++;
		}
		write(1, &endline, 1);
	}
}
