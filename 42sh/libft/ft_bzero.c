/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcowle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 16:01:11 by kcowle            #+#    #+#             */
/*   Updated: 2016/08/07 16:01:20 by kcowle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s1, unsigned n)
{
	register char *t;

	t = s1;
	while (n != 0)
	{
		*t++ = 0;
		n--;
	}
}