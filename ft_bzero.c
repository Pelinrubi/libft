/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarci5 <algarci5@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:55:11 by algarci5          #+#    #+#             */
/*   Updated: 2024/09/26 14:59:24 by algarci5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t				size;
	unsigned char		*ptr;

	ptr = (unsigned char *)s;
	size = 0;
	while (size < n)
	{
		ptr[size] = 0;
		size++;
	}
}
