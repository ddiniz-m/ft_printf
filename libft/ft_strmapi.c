/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:08:09 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/09 11:35:58 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*buff;

	i = 0;
	len = ft_strlen(s);
	if (!s || !f)
		return (0);
	buff = malloc(sizeof(char) * (len + 1));
	if (!buff)
		return (0);
	while (i < len)
	{
		buff[i] = f(i, s[i]);
		i++;
	}
	buff[i] = '\0';
	return (buff);
}

/* #include<stdio.h>

char f(unsigned int i, char c)
{
	char a;
	
	if (c >= 97 && c <= 122)
		a = c - 32;
	return (a);
} 

int main()
{
	char *str = "hello";
	char *s;

	s = ft_strmapi(str, *f);
	printf("%s\n", s);
} */