/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarci5 <algarci5@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:38:29 by algarci5          #+#    #+#             */
/*   Updated: 2024/09/28 19:43:44 by algarci5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*len;

	len = dest;
	while (*len != '\0')
		len++;
	while (*src != '\0' && size > 1)
	{
		*len = *src;
		len++;
		src++;
		size--;
	}
	*len = '\0';
	return ((size_t)dest);
}
/*int	main(void)
{
	char	src[] = "mundo";
	char	dest[30] = "Hola ";

	ft_strlcat(dest, src, 10);
	printf("%d", dest);
}*/