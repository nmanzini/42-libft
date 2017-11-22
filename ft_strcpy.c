/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanzini <nmanzini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:22:22 by nmanzini          #+#    #+#             */
/*   Updated: 2017/11/16 10:15:27 by nmanzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	char *final;

	final = dest;
	while (*src != 0)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (final);
}
