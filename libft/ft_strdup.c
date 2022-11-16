/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:31:01 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/08 11:44:28 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = malloc(sizeof(*src) * ft_strlen((char *)src) + 1);
	if (!dest)
		return (0);
	ft_strlcpy(dest, (char *)src, ft_strlen((char *)src) + 1);
	return (dest);
}

/* #include<stdio.h>
int main()
{
	char str[] = "Hello";
	printf("%s\n", ft_strdup(str));
} */