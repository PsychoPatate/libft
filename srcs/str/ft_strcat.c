/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerboe <jukerboe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:42:01 by jukerboe          #+#    #+#             */
/*   Updated: 2019/10/10 16:42:27 by jukerboe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char const *s2)
{
	char *res;

	res = s1;
	while (*s1)
		s1++;
	while (*s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (res);
}