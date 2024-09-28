/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarci5 <algarci5@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:24:36 by algarci5          #+#    #+#             */
/*   Updated: 2024/09/28 14:14:34 by algarci5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*int main()
{
    const char str[] = "Hello, World!";
    char *result = ft_strrchr(str, 's');

    if (result)
        printf("Primero encontrado: %c\n", *result);
    else
        printf("No encontrado\n");

    return 0;
}*/