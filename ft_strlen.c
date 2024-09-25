/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarci5 <algarci5@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:40:45 by algarci5          #+#    #+#             */
/*   Updated: 2024/09/25 15:17:31 by algarci5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int main(void)
{
	const char s[] = "hola";
	size_t i;

	i = ft_strlen(s);
	printf("%zu", i);
}*/
