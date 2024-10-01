/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarci5 <algarci5@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:30:39 by algarci5          #+#    #+#             */
/*   Updated: 2024/09/30 18:19:16 by algarci5         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		size;

	if (!s)
		return (NULL);
	if (start > len)
		return (NULL);
	sub = (char *)malloc((len - start) * sizeof(char));
	if (!sub)
		return (NULL);
	size = 0;
	while (s[start])
	{
		sub[size] = s[start];
		size++;
		start++;
	}
	sub[size] = '\0';
	return (sub);
}
