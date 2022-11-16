/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:04:48 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/10 13:23:19 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	if (n != 0)
	{
		a = s1[i];
		b = s2[i];
	}
	else
		return (0);
	while ((s1[i] != '\0') && (s1[i] == s2[i]) && (n > i + 1))
	{
		i++;
		a = s1[i];
		b = s2[i];
	}
	return (a - b);
}

/* int main()
{
	char s1[] = "Hello";
	char s2[] = "hellO";
	printf("%d\n", ft_strncmp(s1, s2, 2));
} */