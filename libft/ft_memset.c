/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel-l <cdutel-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:24:20 by cdutel-l          #+#    #+#             */
/*   Updated: 2021/11/08 16:07:04 by cdutel-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			t;

	t = 0;
	while (t != len)
	{
		((char *)b)[t] = (unsigned char)c;
		t++;
	}
	return (b);
}