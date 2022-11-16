/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:45:40 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/03 16:03:16 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	str = s;
	i = 0;
	while (n > 0)
	{
		str[i] = c;
		i++;
		n--;
	}
	return (s);
}

/* int main()
{
	char str[] = "Hello What's Up";
	ft_memset(str, 'p', 5);
	printf("%s\n", str);
} */