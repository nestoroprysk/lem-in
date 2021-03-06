/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noprysk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 18:27:37 by noprysk           #+#    #+#             */
/*   Updated: 2017/10/30 13:33:59 by noprysk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	ft_strcpy(&s1[i], s2);
	return (s1);
}
