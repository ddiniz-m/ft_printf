/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:08:03 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/09 13:48:12 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
	return ;
}

/* #include<stdio.h>
#include<unistd.h>

void f(unsigned int i, char *str)
{
	char c = str[i];
	c = c + i;
	write(1, &c, 1);
} 

int main()
{
	char *str = "abcd0";
	ft_striteri(str, *f);
}
 */