/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:39:33 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/03 16:39:25 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen((char *)dest);
	if (size < j || size == 0)
	{
		return (ft_strlen((char *)src) + size);
	}
	while (src[i] != '\0' && i + j < size - 1)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (ft_strlen((char *)src) + j);
}

/* int main()
{
	char *dest;
	char *src;
	src = calloc(6, sizeof(char));
	dest = calloc(12, sizeof(char));
	strcpy(src, "World");
	strcpy(dest, "Hello ");
	printf("Destination = %s\n", dest);
	printf("Source = %s\n", src);
	ft_strlcat(dest, src, 12);
	printf("Both together = %s\n", dest);
} */