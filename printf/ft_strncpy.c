/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 09:40:24 by knage             #+#    #+#             */
/*   Updated: 2016/05/15 09:40:26 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	char *s;

	s = s1;
	while (n > 0 && *s2 != '\0')
	{
		*s++ = *s2++;
		--n;
	}
	while (n > 0)
	{
		*s++ = '\0';
		--n;
	}
	*s++ = '\0';
	return (s1);
}
