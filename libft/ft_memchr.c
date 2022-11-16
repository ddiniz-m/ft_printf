/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:01:27 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/08 11:49:44 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	if (!n)
		return (0);
	while (str[i] != (unsigned char)c && i < n - 1)
		i++;
	if (str[i] == (unsigned char)c)
		return (str + i);
	return (0);
}

/* #include<stdio.h>
int main()
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	char str[] = "/|\x12\xff\x09\x42\2002\42|\\";
	
	printf("%s\n", (char *)ft_memchr(tab, -1, 7));
} */