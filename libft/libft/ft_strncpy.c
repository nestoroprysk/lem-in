/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noprysk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 16:32:23 by noprysk           #+#    #+#             */
/*   Updated: 2017/10/29 19:48:35 by noprysk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] != 0 && i < len)
	{
		ft_memcpy(&dst[i], &src[i], 1);
		i++;
	}
	if (i < len)
		ft_bzero(&dst[i], (len - i));
	return (dst);
}
